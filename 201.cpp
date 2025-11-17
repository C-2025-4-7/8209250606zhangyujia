#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "ÊäÈë×Ö·û£º" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		char capital_ch = ch - 32;
		cout << "´óÐ´×ÖÄ¸£º" << capital_ch << endl;
	}
	else
	{
		char next_ch = ch + 1;
		cout << "ºó¼Ì×Ö·û£º" << next_ch << endl;
	}
	return 0;
}