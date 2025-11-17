#include<iostream>
#include <iomanip>
#define Pi 3.1415926
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	double r, h, v;
	cout << "Ô²×¶µ×µÄ°ë¾¶£º" << endl;
	cin >> r;
	cout << "×¶¸ß£º" << endl;
	cin >> h;
	v = Pi * r * r * h / 3;
	cout << "Ô²×¶Ìå»ý£º" << v << endl;
	return 0;
}