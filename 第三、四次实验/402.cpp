#include <iostream>
#include <algorithm> 
using namespace std;
void bubble_sort(double list[],int Size) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < Size-1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main() {
	double arr[10] = { 1.1, 3.3, 8.8, 2.2, 10.0, 5.5, 4.4, 7.7, 6.6, 9.9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,n);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ',';
	}
	cout << endl;
	return 0;
}