#pragma once // Microsoft specific directive

#include <iostream>
#include <string>
#include <stdlib.h>
#include "structures.h"

#define __CRT_SECURE_NO_WARNINGS

using namespace std;

namespace tyaa
{
    void persistEmployee(employee emp, const char* fileName, const char* mode);
    void listEmployees(const char* fileName);
}