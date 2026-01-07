#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
void Student::display()
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num1, const char* name1, char sex1) {
	num = num1;
	strcpy(name, name1);
	sex = sex1;
};