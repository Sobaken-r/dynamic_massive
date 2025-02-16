#pragma once
class Array
{
	double* arr;
	int size;
public:
	Array();

	void Dinamic(int size);
	void Completion();

	void Print();
	~Array();
};

