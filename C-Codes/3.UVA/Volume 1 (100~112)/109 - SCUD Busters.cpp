#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct POINT {
    int x; int y;
    bool operator==(const POINT &other) {
        return (x == other.x && y == other.y);
    }
} ptBase;

typedef vector<POINT> PTARRAY;

bool CompareAngle(POINT pt1, POINT pt2) {
    pt1.x -= ptBase.x, pt1.y -= ptBase.y;
    pt2.x -= ptBase.x, pt2.y -= ptBase.y;
    return (pt1.x / sqrt((float)(pt1.x * pt1.x + pt1.y * pt1.y)) <
        pt2.x / sqrt((float)(pt2.x * pt2.x + pt2.y * pt2.y)));
}

void CalcConvexHull(PTARRAY &vecSrc, PTARRAY &vecCH) {
    ptBase = vecSrc.back();
    sort(vecSrc.begin(), vecSrc.end() - 1, &CompareAngle);
    vecCH.push_back(ptBase);
    vecCH.push_back(vecSrc.front());
    POINT ptLastVec = { vecCH.back().x - ptBase.x,
        vecCH.back().y - ptBase.y };
    PTARRAY::iterator i = vecSrc.begin();
    for (++i; i != vecSrc.end() - 1; ++i) {
        POINT ptCurVec = { i->x - vecCH.back().x, i->y - vecCH.back().y };
        while (ptCurVec.x * ptLastVec.y - ptCurVec.y * ptLastVec.x < 0) {
            vecCH.pop_back();
            ptCurVec.x = i->x - vecCH.back().x;
            ptCurVec.y = i->y - vecCH.back().y;
            ptLastVec.x = vecCH.back().x - (vecCH.end() - 2)->x;
            ptLastVec.y = vecCH.back().y - (vecCH.end() - 2)->y;
        }
        vecCH.push_back(*i);
        ptLastVec = ptCurVec;
    }
    vecCH.push_back(vecCH.front());
}

int CalcArea(PTARRAY &vecCH) {
    int nArea = 0;
    for (PTARRAY::iterator i = vecCH.begin(); i != vecCH.end() - 1; ++i) {
        nArea += (i + 1)->x * i->y - i->x * (i + 1)->y;
    }
    return nArea;
}

bool PointInConvexHull(POINT pt, PTARRAY &vecCH) {
    for (PTARRAY::iterator i = vecCH.begin(); i != vecCH.end() - 1; ++i) {
        int nX1 = pt.x - i->x, nY1 = pt.y - i->y;
        int nX2 = (i + 1)->x - i->x, nY2 = (i + 1)->y - i->y;
        if (nX1 * nY2 - nY1 * nX2 < 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    vector<PTARRAY> vecKingdom;
    POINT ptIn;
    int aFlag[100] = {0}, nAreaSum = 0;
    for (int nPtCnt; cin >> nPtCnt && nPtCnt >= 1;) {
        PTARRAY vecSrc, vecCH;
        cin >> ptIn.x >> ptIn.y;
        vecSrc.push_back(ptIn);
        for (; --nPtCnt != 0;) {
            cin >> ptIn.x >> ptIn.y;
            POINT &ptMin = vecSrc.back();
            vecSrc.insert(vecSrc.end() - (ptIn.y > ptMin.y ||
                (ptIn.y == ptMin.y && ptIn.x > ptMin.x)), ptIn);
        }
        CalcConvexHull(vecSrc, vecCH);
        vecKingdom.push_back(vecCH);
    }
    while (cin >> ptIn.x >> ptIn.y) {
        vector<PTARRAY>::iterator i = vecKingdom.begin();
        for (int k = 0; i != vecKingdom.end(); ++i, ++k) {
            if (PointInConvexHull(ptIn, *i) && aFlag[k] != 1) {
                nAreaSum += CalcArea(*i);
                aFlag[k] = 1;
                break;
            }
        }
    }
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << (float)nAreaSum / 2.0f << endl;
    return 0;
}
