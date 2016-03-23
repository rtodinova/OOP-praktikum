#include "DArray.h"
#include <iostream>

using namespace std;

DArray::DArray()
{
	size = 0;
	capacity = 0;
	array = NULL;
}

DArray::DArray(DArray const& d)
{
	size = d.size;
	capacity = d.capacity;
	array = new int[capacity];
	for (int i = 0; i < size; i++)
		array[i] = d.array[i];
}

DArray::~DArray()
{
	delete[]array;
}

void DArray::resize()
{
	
		capacity = capacity*1.5 +1;
		int* array1 = new int[capacity];
		for (int i = 0; i < size; i++)
			array1[i] = array[i];

	delete[]array;
	array = array1;
	
}

void DArray::setValue(int index, int num)
{
	if (index >= capacity)
	{
		resize();
		for (int i = size; i < index; i++)
			array[i] = 0;
	}
	else array[index] = num;

}

void DArray::pushBack(int num1)
{
	array[size] = num1;
	size++;
}

void DArray::popBack()
{
	if (size>0)
	size--;
}

void DArray::deleteAt(int index1)
{
	for (int i = index1; i < size; i++)
		array[i] = array[i + 1];
}

int DArray::getValue(int index2) const
{
	return array[index2];
}

int DArray::getSize() const
{
	return size;
}

void DArray::print() const
{
	for (int i = 0; i < size; i++)
		cout << "array[" << i << "]= " << array[i] << endl;
}
