#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Array.h"
using namespace std;

int main()
{
    setlocale(0, "");

    int size;
    char chek;

    Array array;
    do
    {
        cout << "Введите размер масива: ";
        cin >> size;
        array.Dinamic(size);
        array.Completion();

        cout << "Масив: ";
        array.Print();

        cout << "Пересоздать масив (Y/N)" << endl;
        chek = _getch();

        if (chek == 'N' || chek == 'n') { break; }
    } while (true);
}