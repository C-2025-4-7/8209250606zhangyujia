#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int count = 0;     
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        int input;
        cin >> input;
        bool isNew = true;
        for (int j = 0; j < count; j++) {
            if (numbers[j] == input) {
                isNew = false;
                break;
            }
        }
        if (isNew) {
            numbers[count] = input;
            count++;
        }
    }
    cout << "The distinct numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}