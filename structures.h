#ifndef MY_STRUCTURES_H
#define MY_STRUCTURES_H

#include <string>
using namespace std;

namespace tyaa
{
    struct department {
        int id;
        string name;
    };
    struct employee {
        int id;
        string firstName;
        string lastName;
        int departmentId;
        double salary;
    };
}

#endif