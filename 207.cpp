#include<iostream>
using namespace std;
int main()
{
	string star = "*";
	for (int i = 0; i < 5; i++)
	{
		cout << star << endl;
		star += '*';
	}
	return 0;
}