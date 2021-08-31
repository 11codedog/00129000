#include<iostream>
#include<vector>
#include"Project1/Project1/\Student.h"
using namespace std;
void menu() {
    cout << "1.输入学生信息." << endl;
    cout << "2.修改学生信息." << endl;
    cout << "3.查看学生信息." << endl;
    cout << "4.删除学生信息." << endl;
    cout << "5.按成绩查看学生信息." << endl;
    cout << "6.退出程序." << endl;
}
void sortMenu() {
    cout << "1.按语文成绩查看." << endl;
    cout << "2.按数学成绩查看." << endl;
    cout << "3.按英语成绩查看." << endl;
    cout << "4.按总成绩查看." << endl;
}
int main() {
    Student student;
    menu();

    int sign = 0;
    while (cin >> sign) {
        switch (sign)
        {
        case 1:
            student.addInfo(student);
            students.push_back(student);
            system("cls");
            menu();
            break;
        case 2:
            student.changeInfo();
            system("pause");
            system("cls");
            menu();
            break;
        case 3:
            student.printInfo();
            system("pause");
            system("cls");
            menu();
            break;
        case 4:
            student.deleteInfo();
            system("pause");
            system("cls");
            menu();
            break;
        case 5:
            system("cls");
            sortMenu();
            {int sign = 0; }
            cin >> sign;
            switch (sign)
            {
            case 1:
                student.ChineseSort();
                system("cls");
                student.printInfo();
                system("pause");
                system("cls");
                menu();
                break;
            case 2:
                student.MathSort();
                system("cls");
                student.printInfo();
                system("pause");
                system("cls");
                menu();
                break;
            case 3:
                student.EnglishSort();
                system("cls");
                student.printInfo();
                system("pause");
                system("cls");
                menu();
                break;
            case 4:
                student.TotalSort();
                system("cls");
                student.printInfo();
                system("pause");
                system("cls");
                menu();
                break;
            default:
                cout << "请输入有效数字！" << endl;
                break;
            }
            break;
        case 6:
            system("pause");
            return 0;
        default:
            cout << "请输入有效数字！" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
