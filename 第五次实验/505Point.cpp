#include <iostream>
using namespace std;
class Point {
private:
	double x;
	double y;
public:
	Point(double x1,double y1){
		x = x1;
		y = y1;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << '(' << x << ',' << y << ')' << endl;
	}
};
int main() {
	Point p(60, 80);
	p.setPoint(20, 1);
	p.display();
	return 0;
}