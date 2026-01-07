#include <iostream>
using namespace std;
class Student {
private:
	int ID;
	int score;
public:
	Student(int id = 0, int s = 0) {
		ID = id;
		score = s;
	}
	friend int max(Student s1[], int n);
};
int max(Student s1[],int n) {
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (s1[t].score < s1[i].score)t = i;
	}
	return s1[t].ID;
}
int main() {
	Student s1[5] = { Student(4,65),Student(5,98),Student(6,58),Student(7,85),Student(8,74) };
	int num = 5;
	cout << "5个学生的最高成绩者的学号为" << max(s1, num) << endl;
	return 0;
};