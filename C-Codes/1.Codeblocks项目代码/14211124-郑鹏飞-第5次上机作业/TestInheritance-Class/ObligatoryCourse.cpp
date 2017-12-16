#include "ObligatoryCourse.h"

ObligatoryCourse::~ObligatoryCourse()
{
    //dtor
}

int ObligatoryCourse::getScore() const
{
	return mark;
}

bool ObligatoryCourse::setMark(int m)
{
	if ((mark<=100)&&(mark>=0)) {
		mark=m;
		return true;
	}else{
		return false;
	}
}
