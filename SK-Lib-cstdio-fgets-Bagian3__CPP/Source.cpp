#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int count = 10;
    char str[10];
    FILE* fp;

    fp = fopen("file.txt", "w+");

    fputs("An example file\n", fp);
    fputs("Filename is file.txt\n", fp);

    rewind(fp);

    while (feof(fp) == 0) {
        fgets(str, count, fp);
        cout << str << endl;
    }

    fclose(fp);

    _getch();
    return 0;
}