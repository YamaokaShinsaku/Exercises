#pragma once
#ifndef _CALCULATION_H_
#define _CALCULATION_H_

class Calculation
{
private:
	int number1;  //一つ目の数
	int number2;  //二つ目の数
public:
	void setNumber1(int num);  //一つ目の数を設定
	void setNumber2(int num);  //二つ目の数を設定

	int getNumber1();  //一つ目の数を取得
	int getNumber2();  //二つ目の数を取得

	int add(); //二つの数の和
	int sub(); //二つの数の差
};

#endif // !_CALCULATION_H_
