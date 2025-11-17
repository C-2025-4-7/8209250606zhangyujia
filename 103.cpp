#include<iostream>
using namespace std;
int main()
{
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "char length:" << sizeof(char) << endl;
	cout << "unsigned char length:" << sizeof(unsigned char) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "signed length:" << sizeof(signed) << endl;
	cout << "unsigned length:" << sizeof(unsigned) << endl;
	cout << "short length:" << sizeof(short) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "unsigned short length:" << sizeof(unsigned short) << endl;
	cout << "unsigned long length:" << sizeof(unsigned long) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "long double length:" << sizeof(long double) << endl;
	//cout << "void length:" << sizeof(void) << endl;//不允许使用不完整的数据类型
	return 0;
}