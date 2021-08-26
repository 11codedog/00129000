#pragma once
#include<iostream>
#include<string>
#include<typeinfo>
class Student {

public:
	Student()=default;
	~Student() {};
	unsigned ID = 0;
	std::string name;
    int Chinese_score = 0;
	int Math_score = 0;
	int English_score = 0;
	int Total_score = 0;

	Student& addInfo(Student&);
	void printInfo();
	void changeInfo();
	void deleteInfo();
	void ChineseSort();
	void MathSort();
	void EnglishSort();
	void TotalSort();
	
};
std::vector<Student>students{};
void swap(Student& s1, Student& s2) {
	Student temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
}
Student& Student::addInfo(Student& student) {
	std::cout << "请依次输入学生的姓名，学号和语数外成绩." << std::endl;
	std::cin >> student.name >> student.ID >> student.Chinese_score
			>> student.Math_score >> student.English_score;
	student.Total_score=student.Chinese_score+student.Math_score
			+student.English_score;
	return *this;
}
void Student::printInfo() {
	for (auto i : students) {
		std::cout << i.name << "\t\t";
		std::cout << i.ID << "\t\t";
		std::cout << i.Chinese_score << "\t\t";
		std::cout << i.Math_score << "\t\t";
		std::cout << i.English_score << "\t\t";
		std::cout << i.Total_score << std::endl;
	}
}
void Student::changeInfo() {
	unsigned flag = 0;
	std::cout << "Please input the student's ID" << std::endl;
	std::cin >> flag;
	for (auto i = students.begin(); i != students.end();++i ) {
		if (flag == (*i).ID) {
			(*i).addInfo(*i);
			break;
		}
		else if (i == students.end()) {
			std::cout << "没有该学生的信息." << std::endl;
			system("pause");
		}
	}

}
void Student::deleteInfo() {
	unsigned flag = 0;
	std::cout << "Please input the student's ID" << std::endl;
	std::cin >> flag;
	for (auto i = students.begin(); i != students.end(); ++i) {
		if (flag == (*i).ID) {
			i = students.erase(i);
			break;
		}
		else if (i == students.end()) {
			std::cout << "没有该学生的信息." << std::endl;
			system("pause");
		}
	}
}
void Student::ChineseSort() {
	int len = students.size(), i, j;
	for (i = 0; i < len - 1; ++i) {
		for (j = 0; j < len - 1; ++j) {
			if (students[j].Chinese_score < students[j + 1].Chinese_score)
				swap(students[j], students[j + 1]);
		}
	}
}
void Student::MathSort() {
	int len = students.size(), i, j;
	for (i = 0; i < len - 1; ++i) {
		for (j = 0; j < len - 1; ++j) {
			if (students[j].Math_score < students[j + 1].Math_score)
				swap(students[j], students[j + 1]);
		}
	}
}
void Student::EnglishSort() {
	int len = students.size(), i, j;
	for (i = 0; i < len - 1; ++i) {
		for (j = 0; j < len - 1; ++j) {
			if (students[j].English_score < students[j + 1].English_score)
				swap(students[j], students[j + 1]);
		}
	}
}
void Student::TotalSort() {
	int len = students.size(), i, j;
	for (i = 0; i < len - 1; ++i) {
		for (j = 0; j < len - 1; ++j) {
			if (students[j].Total_score < students[j + 1].Total_score)
				swap(students[j], students[j + 1]);
		}
	}
}