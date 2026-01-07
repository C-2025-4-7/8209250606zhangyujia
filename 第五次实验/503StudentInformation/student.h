#define _CRT_SECURE_NO_WARNINGS
class Student              
{
public:
	Student(int num1 = 0, const char* name1 = "\0", char sex1 = '\0') {
		num = num1;
		strcpy(name, name1);
		sex = sex1;
	}
	void display();
	void set_value(int n, const char* na, char s);

private:
	int num;
	char name[20] = {0};
	char sex;
};
