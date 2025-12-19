#include <iostream>
using namespace std;
int Gcd(int num1, int num2) {
	if (num1 == 0||num2 == 0)return 0;
	while (num2 != 0)
	{
		int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}	
	return num1;
}
void GcdAndLcm(int num1, int num2,int& gcd,int& lcm) {
	if (num1 == 0 || num2 == 0) {
		gcd = 0;
		lcm = 0;
	}
	else {
		gcd = Gcd(num1, num2);
		lcm = num1 / gcd * num2;
	}
	
}
int main() {
	int num1, num2;
	cout << "输入数字：" << endl;
	cin >> num1;
	cin >> num2;
	cout << "最大公约数：" << Gcd(num1,num2) << endl;
	int gcd, lcm;
	GcdAndLcm(num1,num2,gcd,lcm);
	cout << "最大公约数：" << gcd << endl;
	cout << "最小公倍数：" << lcm << endl;
	return 0;
}
