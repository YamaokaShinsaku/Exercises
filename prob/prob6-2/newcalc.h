#ifndef _NEWCALC_H_
#define _NEWCALC_H_
#include"fundcalc.h"

class NewCalc : public FundCalc
{
public:
	//二つの数の積
	double mul();
	//二つの数の商
	double div();
};

#endif // !_NEWCALC_H_
