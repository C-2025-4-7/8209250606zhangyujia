#include <iostream>
using namespace std;
int main() {
	bool Cabinet[100]{0};
	for (int i = 1; i <= 100; i++) for (int j = i; j <= 100; j += i)Cabinet[j-1] = !Cabinet[j-1];
	for (int i = 0; i < 100; i++) if (Cabinet[i])cout << i + 1 << ' ';
	cout << endl;
	return 0;
}