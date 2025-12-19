#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num < 2)return false;
	if (num == 2)return true;
	if (num % 2 == 0)return false;
    for (int i = 3; i * i <= num; i += 2)
		if (num % i == 0) return false;
    return true;
}
int main() {
	int temp = 0;
	int cnt = 0;
	for (int i = 1; cnt < 20; i++) {
		if (is_prime(i)) {
			cout << i << '\t';
			temp += 1;
		}
		if (temp == 10) {
			cout << endl;
			temp = 0;
			cnt++;
		}
	}
	return 0;
}