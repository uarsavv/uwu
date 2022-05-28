#pragma once

#include <iostream>

class plenty
{
private:

	int size;
	int* arr;

public:
	plenty() = default;

	plenty(int s)
	{
		size = s; arr = new int[size];
	}

	plenty(const plenty& other)
	{
		this->size = other.size;
		this->arr = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->arr[i] = other.arr[i];
		}
	}

	~plenty() { delete[] arr; }
	void input();
	void print();
	void Union(plenty, plenty);
	void intersection(plenty, plenty);
	void add();
	void remove();
	void check();

};
