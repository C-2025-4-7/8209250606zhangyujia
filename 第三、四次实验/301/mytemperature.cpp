#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main() {
	cout << "Celsius"<<'\t' << "Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
	for (int i = 0; i < 10; i++) {
		cout << fixed << setprecision(1)<< 40.0 - i << '\t' << celsius_to_fah(40.0 - i) << '\t' << '\t' << '|' << '\t';
		cout<< 120.0-10*i <<'\t' << '\t' << fixed << setprecision(2)<<fahrenheit_to_cels(120 - 10 * i) << endl;
	}
	return 0;
}
