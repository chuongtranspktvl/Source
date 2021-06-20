#include"Person.cpp"
#include "Teacher.cpp"
#include"Student.cpp"
int main() {
	Teacher t("Chuong", 23, "HCM", 5000000);
	t.display();
	Student s("CHUONG", 23, "HCM", 7.9);
	s.display();
	return 0;
}