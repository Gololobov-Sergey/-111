#pragma once
#include<iostream>
#include<cassert>

using namespace std;

class Array
{
	int* arr = nullptr;
	int size = 0;

public:
	Array(int s)
	{
		size = s;
		arr = new int[size];
	}

	~Array()
	{
		delete[] arr;
	}

	Array(const Array& obj)
	{
		this->size = obj.size;
		this->arr = new int[this->size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}

	Array& operator=(const Array& obj)
	{
		if (this == &obj)
			return *this;

		if (arr) delete[] arr;

		this->size = obj.size;
		this->arr = new int[this->size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}

		return *this;
	}

	void set(int min = 0, int max = 9) const
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % (max - min + 1) + min;
		}
	}

	void print() const
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	int at(int ind)
	{
		assert(ind >= 0 && ind < size);
		return arr[ind];
	}

	int& operator[](int ind)
	{
		assert(ind >= 0 && ind < size);
		return arr[ind];
	}

	int& operator[](const char* str)
	{
		if(strcmp(str, "one") == 0)
			return arr[0];
		if (strcmp(str, "two") == 0)
			return arr[1];
	}
};

