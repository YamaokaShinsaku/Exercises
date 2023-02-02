#include "function.h"

int Function::max(int n1, int n2)
{
	int max = 0;
	max = n1;
	if (max < n2)
	{
		max = n2;
	}

	return max;
}

int Function::min(int n1, int n2)
{
	int min = 0;
	min = n1;
	if (n1 > n2)
	{
		min = n2;
	}
	return min;
}
