#include<iostream>
using namespace std;
int main()
{
	double num1, num2, result;
	char op;
	cin >> num1;
	cin >> op;
	cin >> num2;
	switch (op) {
	case '+':
		result = num1 + num2;
		cout << "=" << result << endl;
		break;
	case'-':
		result = num1 - num2;
		cout << "=" << result << endl;
		break;
	case'*':
		result = num1 * num2;
		cout << "=" << result << endl;
		break;
	case'/':
		if (num2 != 0) {
			result = num1 / num2;
			cout << "=" << result << endl;
		}
		else cout << "Math Error" << endl;
		break;
	case'%':
		if (num2 != 0 && static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2) {
			result = static_cast<int>(num1) % static_cast<int>(num2);
			cout << "=" << result << endl;
		}
		else cout << "Math Error" << endl;
		break;
	default:
		cout << "Invalid Operator" << endl;
		break;
	}
	return 0;
}
