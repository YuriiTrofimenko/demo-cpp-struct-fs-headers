#include "fsutils.h"

using namespace tyaa;

void tyaa::persistEmployee(employee emp, const char* fileName, const char* mode)
{
    FILE* outfile;
    fopen_s(&outfile, fileName, mode);
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit(-1);
    }
    fwrite(&emp, sizeof(struct employee), 1, outfile);
    if (fwrite != 0)
    printf("contents to file written successfully !\n");
    else
    printf("error writing file !\n");
    fclose(outfile);
}

void tyaa::listEmployees(const char* fileName)
{
    FILE* infile;
    struct employee inputEmployee;
    fopen_s(&infile, fileName, "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit(-1);
    }
    cout << endl;
    while (fread(&inputEmployee, sizeof(struct employee), 1, infile))
        // printf("id = %d name = %s %s\n", inputEmployee.id, inputEmployee.firstName, inputEmployee.lastName); // wrong string interpolation result
        cout << "id = " << inputEmployee.id << " name = " << inputEmployee.firstName << " " << inputEmployee.lastName << "\n" << endl;
    fclose(infile);
}