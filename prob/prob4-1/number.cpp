#include"number.h"
#include<iostream>

//using namespace std;
//�R���X�g���N�^
Number::Number() :a(0), b(0)
{

}
//�f�X�g���N�^
Number::~Number()
{

}
//��̐��l��ݒ�
void Number::setNumbers(int n1,int n2)
{
	a = n1;
	b = n2;
}

int Number::getAdd()
{
	return a + b;
}