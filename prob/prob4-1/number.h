#pragma once
#ifndef _NUMBER_H_
#define _NUMBER_H_

class Number
{
private:
	//�����o�ϐ�
	int a;
	int b;
public:
	//�R���X�g���N�^
	Number();
	//�f�X�g���N�^
	~Number();
	//��̐��l��ݒ�
	void setNumbers(int n1, int n2);
	//��̐��̘a���擾
	int getAdd();
};

#endif // _NUMBER_H_
