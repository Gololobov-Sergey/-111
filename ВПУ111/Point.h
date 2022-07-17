#pragma once
#include<iostream>

using namespace std;

class Point
{

	int x = 0;
	int y = 0;
	const int z;
	static int count;

public:
	Point() : z(0)
	{
		this->x = 0;
		this->y = 0;
		cout << "Constructor" << endl;
	}
	Point(int x, int y, int z) : z(z)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor" << endl;
	}

	void setX(int x1)
	{
		x = x1;
	}

	int getX() const
	{
		return x;
	}

	void setY(int y1)
	{
		y = y1;
	}

	void print() const
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	static int getCount() 
	{ 
		return count; 
	}

	void fooooo();

};


void Point::fooooo()
{

}

int Point::count = 0;



class Student
{
	char* name;
	int age;

public:
	Student() : Student("No name", 0) { cout << "Constructor" << endl; }

	Student(const char* n, int a)
	{
		setName(n);
		setAge(a);
		cout << "Constructor 2 param" << endl;
	}

	~Student()
	{
		delete[] name;
		cout << "Destructor" << endl;
	}

	Student(const Student& obj)
	{
		setName(obj.name);
		age = obj.age;
		cout << "Constructor copy" << endl;
	}

	void setName(const char* n)
	{
		int len = strlen(n) + 1;
		name = new char[len];
		strcpy_s(name, len, n);
	}

	char* getName() { return name; }

	void setAge(int a)
	{
		if (a > 99)
			age = 0;
		else
			age = a;
	}

	void print()
	{
		cout << "Name: " << name << ", Age: " << age << endl;
	}

	friend void PrintStudent(Student st);
};


void PrintStudent(Student st)
{
	cout << st.name;
}


class Drib
{
	int c, z;
public:
	Drib(int c) :Drib(c, 1) {}
	Drib(int c, int z) :c(c), z(z) {}
	void print() const
	{
		cout << c << "/" << z << endl;
	}
	Drib sum(Drib d);
	Drib operator-()
	{
		return Drib(-c, z);
	}
	Drib operator++() // prefix
	{
		return Drib(c += z, z);
	}
	Drib operator++(int) // postfix
	{
		Drib temp(c, z);
		c += z;
		return temp;
	}

	Drib operator+(const Drib& d1) const
	{
		int c_n = c * d1.z + z * d1.c;
		int z_n = z * d1.z;
		return Drib(c_n, z_n);
	}

	Drib operator+(int n) const
	{
		return Drib(c + n * z, z);
	}

	void operator+=(const Drib& d2)
	{
		*this = *this + d2;
	}

	bool operator>(const Drib& d)
	{
		return (float)c / z > (float)d.c / d.z;
	}

	//C++20
	/*auto operator<=>(const Drib& d)
	{
		return (float)c / z <=> (float)d.c / d.z;
	}*/

	void operator()(int c, int z)
	{
		this->c = c;
		this->z = z;
	}

	operator float()
	{
		return (float)c / z;
	}

	friend ostream& operator<<(ostream& out, const Drib& d);
	friend istream& operator>>(istream& in, Drib& d);
};

istream& operator>>(istream& in, Drib& d)
{
	in >> d.c >> d.z;
	return in;
}

ostream& operator<<(ostream& out, const Drib& d)
{
	out << d.c << "/" << d.z << endl;
	return out;
}

Drib operator+(int n, const Drib& d2)
{
	return d2 + n;
}

//Drib operator+(const Drib& d1, const Drib& d2)
//{
//	12 + 2;
//}


class Abonent
{
	char* name;
	char* phone;
};

class PhoneBook
{
	Abonent* abonents;
	int size;
	void addAbonent();
	void delAbonent();
public:

	void menu();
};