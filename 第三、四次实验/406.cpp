#include <iostream>
#include <string>
using namespace std;
void count(const char s[], int counts[]) {
	int l = strlen(s);
	for (int i = 0; i < l; i++) {
		if (s[i] <= 90&&s[i]>=65)counts[s[i] - 65] += 1;
		if (s[i] <= 122&&s[i]>=97)counts[s[i] - 97] += 1;
	}
}
int main() {
	int counts[26]{ 0 };
	char s[100];
	cout << "Enter a string: ";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0)cout << char(i + 97) << ':' << counts[i] << " times" << endl;
	}
	return 0;
}