#include <iostream>
#include <cstring>
using namespace std;

typedef struct information_of_all_Employee {
    int id;
    char name[100];
    double salary;
} Employee;

int main() {
    Employee e1;
    e1.id = 2602050;
    e1.salary = 950000.65;
    strcpy(e1.name, "Zihad");

    Employee e2;
    e2.id = 2002050;
    e2.salary = 95000.65;
    strcpy(e2.name, "Elon musk");

    Employee e3;
    e3.id = 2102050;
    e3.salary = 95000.65;
    strcpy(e3.name, "tony stark");

    Employee e4;
    e4.id = 1002050;
    e4.salary = 950000.65;
    strcpy(e4.name, "captain");

    Employee e5;
    e5.id = 1602050;
    e5.salary = 9500000.65;
    strcpy(e5.name, "bil");

    cout << e1.id << "  " << e1.name << "  " << e1.salary << '\n';
    cout << e2.id << "  " << e2.name << "  " << e2.salary << '\n';
    cout << e3.id << "  " << e3.name << "  " << e3.salary << '\n';
    cout << e4.id << "  " << e4.name << "  " << e4.salary << '\n';
    cout << e5.id << "  " << e5.name << "  " << e5.salary << '\n';

    return 0;
}
