#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int l = strlen(hexString);
	int ans = 0;
	for(int i = 0;i<l;i++){
		ans *= 16;
		char c = hexString[i];
		if(c<='9'&&c>='0')ans += int(c)-'0';
		if(c<='F'&&c>='A')ans += int(c)-'A'+10;
		if(c<='f'&&c>='a')ans += int(c)-'a'+10;
	}
	return ans;
};
int main() {
	cout << parseHex("A5") << endl;;
	return 0;
}