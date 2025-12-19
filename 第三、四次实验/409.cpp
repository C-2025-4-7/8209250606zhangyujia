#include <iostream>
using namespace std;
void bubble_sort(int list[], int Size) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < Size - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}

int main() {
	int size;
	cout << "输入数组元素个数：";
	cin >> size;
	int* arr = new int[size];
	cout << "请输入数组元素：";
	for (int i = 0; i < size; i++)cin >> arr[i];
	bubble_sort(arr,size);
	cout << "";
	for (int i = 0; i < size; i++)cout<< arr[i]<<' ';
	delete[] arr;
	return 0;
}