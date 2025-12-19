#include <iostream>
using namespace std;
int peachnum(int day){
	if (day == 10)return 1;
	return (peachnum(day+1) + 1) * 2;
}
int main() {
	cout << "第一天猴子共摘" << peachnum(1) << "个桃子" << endl;
	return 0;
}