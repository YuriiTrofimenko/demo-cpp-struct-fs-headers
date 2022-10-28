#include <iostream>

#include "structures.h"
#include "fsutils.h"

using namespace std;
using namespace tyaa;

int main() {

    department d1 = { 1, "Design" };
    department d2 = { 2, "Development" };
    employee e1 = { 1, "John", "Doe", 1, 60000.0 };
    employee e2 = { 2, "Bill", "Gates", 2, 1000000000.0 };
    employee e3 = { 3, "Vasilii", "Pupkin", 1, 50000.0 };
    employee e4 = { 4, "Ivan", "Ivanoff", 1, 60000.0 };
    cout << e2.firstName << " " << e2.lastName << endl;
    printf("salary: $%10.2f\n\n", e2.salary);

    employee* currentEmployee = &e1;
    const employee* const constantCurrentEmployee = &e2;
    currentEmployee->firstName += "y";
    // constantCurrentEmployee->firstName += "y"; // forbidden operation
    cout << currentEmployee->firstName << " " << currentEmployee->lastName << endl;
    printf("salary: $%10.2f\n", currentEmployee->salary);

    persistEmployee(e1, "employees.dat", "w");
    persistEmployee(e2, "employees.dat", "a");
    persistEmployee(e3, "employees.dat", "a");

    listEmployees("employees.dat");

    return 0;
}