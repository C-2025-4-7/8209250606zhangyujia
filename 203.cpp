#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三条边长：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a)cout << "三边不能构成三角形" << endl;
	else{
		cout << "三边能构成三角形" << endl;
		cout << "三角形周长为" << a + b + c << endl;
		if (a == b || a == c || b == c)cout << "该三角形是等腰三角形" << endl;
		else cout << "该三角形不是等腰三角形" << endl;
	}
	return 0;
}