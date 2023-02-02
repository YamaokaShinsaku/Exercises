#pragma once
#ifndef _CALCULATION_H_
#define _CALCULATION_H_

class Calculation
{
private:
	int number1;  //ˆê‚Â–Ú‚Ì”
	int number2;  //“ñ‚Â–Ú‚Ì”
public:
	void setNumber1(int num);  //ˆê‚Â–Ú‚Ì”‚ğİ’è
	void setNumber2(int num);  //“ñ‚Â–Ú‚Ì”‚ğİ’è

	int getNumber1();  //ˆê‚Â–Ú‚Ì”‚ğæ“¾
	int getNumber2();  //“ñ‚Â–Ú‚Ì”‚ğæ“¾

	int add(); //“ñ‚Â‚Ì”‚Ì˜a
	int sub(); //“ñ‚Â‚Ì”‚Ì·
};

#endif // !_CALCULATION_H_
