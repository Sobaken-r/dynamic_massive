#include <iostream>
#include <Windows.h>
#include "Array.h"
using namespace std;

Array::Array() : arr{ nullptr }, size{ 0 } {};

void Array::Dinamic(int size)
{
    this->size = size;
	arr = new double[size];
}

void Array::Completion()
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        arr[i] += static_cast<double>(rand() % 10) / 10;
    }
}

void Array::Print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

Array::~Array()
{
    delete[]arr;
}


