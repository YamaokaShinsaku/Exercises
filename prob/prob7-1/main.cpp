#include<iostream>
#include"counter.h"

using namespace std;

int main()
{
	//カウンタを生成
	Counter* pC = new Counter();
	pC->count();         //一回カウント
	pC->count();         //一回カウント

	cout << "回数" << pC->getCount() << "回数" << endl;
	pC->count(4);      //４回カウント
	cout << "回数" << pC->getCount() << "回数" << endl;
	//カウンタをリセット
	pC->reset();
	cout << "回数" << pC->getCount() << "回数" << endl;
	
	//カウンタを消去
	delete pC;

	return 0;
}