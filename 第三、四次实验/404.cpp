#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int j = 0;
	int i = 0;
	int t = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) list3[t++] = list1[i++];
		else if (list1[i] > list2[j]) list3[t++] = list2[j++];
		else{
			list3[t++] = list1[i++];
			list3[t++] = list2[j++];
		}
	}
	while (i < size1) list3[t++] = list1[i++];
	while (j < size2) list3[t++] = list2[j++];
}
int main() {
	int arr1[80]{0};
	int arr2[80]{0};
	int arr3[160]{0};
	int size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++) cin >> arr1[i];
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++) cin >> arr2[i];
	merge(arr1, size1, arr2, size2, arr3);
	cout << "The merged list is ";
	for (int k = 0; k < size1 + size2; k++) cout << arr3[k] << ' ';
	cout << endl;
	return 0;
}