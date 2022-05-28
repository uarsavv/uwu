#include "integer.h"
#include <iostream>
#include <cmath>

using namespace std;

void plenty::input()
{
	cout << "Enter size: " << endl;
	cin >> size;
	arr = new int[size];
	cout << "Elements: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void plenty::print()
{
	cout << "Input sets: " << endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void plenty::Union(plenty a, plenty b)
{
	this->size = a.size + b.size;
	this->arr = new int[size];
	int i, j, count = 0;
	int n = a.size;


	for (i = 0; i < a.size; i++)
		arr[i] = a.arr[i];

	for (i = 0; i < b.size; i++)
	{
		for (j = 0; j < a.size; j++)
			if (b.arr[i] == a.arr[j])
				continue;
			else
				count++;
		if (count == a.size)
			arr[n++] = b.arr[i];
		count = 0;
	}
	size = n;
}

void plenty::intersection(plenty a, plenty b)
{
	size = a.size + b.size;
	arr = new int[size];
	int i, j, n = 0;

	for (i = 0; i < a.size; i++)
		for (j = 0; j < b.size; j++)
		{
			if (a.arr[i] == b.arr[j])
			{
				arr[n++] = a.arr[i];
				continue;
			}
		}
	size = n;
}

void plenty::add()
{
	int a[100];
	int i;
	int element;
	for (i = 0; i < size; i++)
		a[i] = arr[i];
	delete[] arr;
	size = size + 1;

	cout << "Enter the element to add: " << endl;
	cin >> element;
	a[i] = element;

	arr = new int[size];
	for (i = 0; i < size; i++)
		arr[i] = a[i];
}

void plenty::remove()
{
	int number, n, i, j;
	n = size;
	cout << size - 1 << endl;
	cin >> number;

	if (number < 0 || number > size)
		cout << "Error " << endl;
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == number)
			{
				for (j = i; j < n - 1; j++)
					arr[j] = arr[j + 1];
				n--;
			}

		}
		size--;
	}
}

void plenty::check()
{
	int value;
	cout << "Enter number to check " << endl;
	cin >> value;
	int i, count = 0;
	for (i = 0; i < size; i++)
		if (arr[i] == value)
			cout << "True " << endl;
		else
			count++;
	if (count == size)
		cout << "False" << endl;
}