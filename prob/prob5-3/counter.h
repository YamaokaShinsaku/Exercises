#ifndef _COUNTER_H_
#define _COUNTER_H_
class Counter
{
private:
	//回数
	int m_count;
	//合計回数
	static int m_totalCount;
public:
	//コンストラクタ
	Counter();
	//リセット
	void reset();
	//カウント
	void count();
	//カウントの数
	int getCount();
	//カウント数の合計
	static int getTotalCount();
};

#endif // !_COUNTER_H_
