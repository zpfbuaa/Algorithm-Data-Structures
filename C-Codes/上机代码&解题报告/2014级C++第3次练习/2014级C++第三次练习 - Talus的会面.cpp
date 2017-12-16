#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int t1, t2, s1, s2, w, t;
    cin >> t;
    while (t--)
    {
        cin >> t1 >> t2 >> s1 >> s2 >> w;
        if (s2 - t1 <= 0 || t2 - s1 <= 0)
        {
            cout << "0.00" << endl;
            continue;
        }//不可能会面
        int rgn1 = -1, rgn2 = -1;
        if (s2 <= t1 + w)rgn1 = 0;
        if (s1 >= t2 - w)rgn2 = 0;
        if (rgn1 == 0 && rgn2 == 0)
        {
            cout << "1.00\n";
            continue;
        }//一定能会面
        if (s2 > t1 + w)
        {
            int line1 = 0, line2 = 0, x1, y1, x2, y2;

            //寻找第一条线与可行域矩形的交点
            for (int i = t1 + 1; i <= t2; i++)
                if (i + w == s2)
                {
                    line1 = 1;
                    x1 = i;
                    y1 = s2;
                    break;
                }
            for (int i = s1 + 1; i < s2; i++)
                if (t2 + w == i)
                {
                    line1 = 2;
                    x1 = t2;
                    y1 = i;
                    break;
                }
            for (int i = t1; i < t2; i++)
                if (i + w == s1)
                {
                    line2 = 3;
                    x2 = i;
                    y2 = s1;
                    break;
                }
            for (int i = s1; i < s2; i++)
                if (t1 + w == i)
                {
                    line2 = 4;
                    x2 = t1;
                    y2 = i;
                    break;
                }
            if (y1 == s2&&x2 == t1)
                rgn1 = (s2 - w - t1)*(s2 - w - t1);
            if (x2 == t1&&x1 == t2)
                rgn1 = (2 * s2 - 2 * w - t1 - t2)*(t2 - t1);
            if (y1 == s2&&y2 == s1)
                rgn1 = (s2 + s1 - 2 * w - 2 * t1)*(s2 - s1);
            if (x1 == t2&&y2 == s1)
                rgn1 = (s2 - s1)*(t2 - t1) * 2 - (y1 - s1)*(t2 - x2);
        }
        if (s1 < t2 - w)
        {
            int x1, y1, x2, y2;

            //寻找第二条线与可行域矩形的交点
            for (int i = t1 + 1; i <= t2; i++)
                if (i - w == s2)
                {
                    x1 = i;
                    y1 = s2;
                    break;
                }
            for (int i = s1 + 1; i < s2; i++)
                if (t2 - w == i)
                {
                    x1 = t2;
                    y1 = i;
                    break;
                }
            for (int i = t1; i < t2; i++)
                if (i - w == s1)
                {
                    x2 = i;
                    y2 = s1;
                    break;
                }
            for (int i = s1; i < s2; i++)
                if (t1 - w == i)
                {
                    x2 = t1;
                    y2 = i;
                    break;
                }
            if (x1 == t2&&y2 == s1)
                rgn2 = (y1 - s1)*(t2 - x2);
            if (y1 == s2&&y2 == s1)
                rgn2 = (2 * t2 - x1 - x2)*(s2 - s1);
            if (x1 == t2&&x2 == t1)
                rgn2 = (y1 + y2 - 2 * s1)*(t2 - t1);
            if (y1 == s2&&x2 == t1)
                rgn2 = (s2 - s1)*(t2 - t1) * 2 - (x1 - t1)*(s2 - y2);

        }

        double temp = (double)(s2 - s1)*(t2 - t1) * 2;//可行域总面积

        double ps = (double)((temp - rgn1 - rgn2) / temp);//会面几率
        cout << fixed << setprecision(2) << ps << endl;
    }
    return 0;
}
