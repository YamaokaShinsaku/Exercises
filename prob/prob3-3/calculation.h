#pragma once
#ifndef _CALCULATION_H_
#define _CALCULATION_H_

class Calculation
{
private:
	int number1;  //��ڂ̐�
	int number2;  //��ڂ̐�
public:
	void setNumber1(int num);  //��ڂ̐���ݒ�
	void setNumber2(int num);  //��ڂ̐���ݒ�

	int getNumber1();  //��ڂ̐����擾
	int getNumber2();  //��ڂ̐����擾

	int add(); //��̐��̘a
	int sub(); //��̐��̍�
};

#endif // !_CALCULATION_H_
