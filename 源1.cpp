#include<iostream>
#include<vector>
#include"Project1/Project1/\Student.h"
using namespace std;
void menu() {
    cout << "1.����ѧ����Ϣ." << endl;
    cout << "2.�޸�ѧ����Ϣ." << endl;
    cout << "3.�鿴ѧ����Ϣ." << endl;
    cout << "4.ɾ��ѧ����Ϣ." << endl;
    cout << "5.���ɼ��鿴ѧ����Ϣ." << endl;
    cout << "6.�˳�����." << endl;
}
void sortMenu() {
    cout << "1.�����ĳɼ��鿴." << endl;
    cout << "2.����ѧ�ɼ��鿴." << endl;
    cout << "3.��Ӣ��ɼ��鿴." << endl;
    cout << "4.���ܳɼ��鿴." << endl;
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
                cout << "��������Ч���֣�" << endl;
                break;
            }
            break;
        case 6:
            system("pause");
            return 0;
        default:
            cout << "��������Ч���֣�" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
