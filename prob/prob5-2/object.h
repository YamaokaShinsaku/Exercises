#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object
{
private:
	static int m_objectNum;
public:
	//�R���X�g���N�^
	Object();
	//�f�X�g���N�^
	~Object();
	//m_objectNum �̒l���擾
	static int getObjectNum();
};

#endif // !_OBJECT_H_

