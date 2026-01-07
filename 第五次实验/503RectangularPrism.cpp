#include <iostream>
using namespace std;
class RectangularPrism {
private:
	double length;
	double width;
	double hight;
public:
	RectangularPrism(double l = 0, double w = 0, double h = 0) {
		length = l;
		width = w;
		hight = h;
	}
	void SetRectangularPrism();
	double Volume();
	void ShowVolume();
};
void RectangularPrism::SetRectangularPrism() {
	cout << "Please input the length:";
	cin >> length;
	cout << "Please input the width:" ;
	cin >> width;
	cout << "Please input the hight:" ;
	cin >> hight;
};
double RectangularPrism::Volume() {
	return length * width * hight;
};
void RectangularPrism::ShowVolume() {
	cout <<"The volume is:" << Volume() << endl;
};
int main() {
	RectangularPrism rp1;
	RectangularPrism rp2;
	RectangularPrism rp3;
	cout << "The first RectangularPrism:" << endl;
	rp1.SetRectangularPrism();
	cout << "The second RectangularPrism:" << endl;
	rp2.SetRectangularPrism();
	cout << "The third RectangularPrism:" << endl;
	rp3.SetRectangularPrism();
	cout << "The first RectangularPrism:" << endl;
	rp1.ShowVolume();
	cout << "The second RectangularPrism:" << endl;
	rp2.ShowVolume();
	cout << "The third RectangularPrism:" << endl;
	rp3.ShowVolume();
	return 0;
}