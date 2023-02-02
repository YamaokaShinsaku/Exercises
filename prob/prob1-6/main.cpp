#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s, m;
	cout << "姓を入力：";
	cin >> s;
	cout << "命を入力 :";
	cin >> m;
	cout << "名前は「 " << s + m << " 」です。" << endl;

	return 0;
}