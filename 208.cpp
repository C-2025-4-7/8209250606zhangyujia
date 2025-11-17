#include<iostream>
#include<string>
using namespace std;
int main()
{
	double a, temp = 0, i = 0;
	cout << "输入数字：" << endl;
	cin >> a;
	double x = a;
	if (a < 0)x = -x, a = -a, i = -1;
	while (x - temp > 0.00001 || x - temp < -0.00001)
	{
		temp = x;
		x = (x + a / x) / 2;
	}
	if (i < 0)
	{
		string r = to_string(x) + 'i';
		cout << "平方根：" << r << endl;
	}
	else cout << "平方根：" << x << endl;
	return 0;
}