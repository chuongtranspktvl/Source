#include"Person.cpp"
class Student :public Person {
private:
	double gpa;
public:
	Student(string name, int age, string address, double gpa) :Person(name, age, address) {
		this->gpa = gpa;
	}
	void getGpa(double gpa) {
		this->gpa = gpa;
	}
	int getGpa() {
		return gpa;
	}
	void display() {
		Person::dissplay();
		cout << "GPA : " << gpa << endl;
	}
};