#include<iostream>
using namespace std;
int main()
{
	int num = 2, sum = 0, i = 0;
	while (sum < 100)
	{
		sum += num;
		num *= 2;
		i++;
	}
	num /= 2;
	sum -= num;

	cout << "每天平均花" << sum * 0.8 / i << "元" << endl;
	return 0;
}