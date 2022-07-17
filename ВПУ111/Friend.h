#pragma once
#include<iostream>

using namespace std;

class Humidity;
class Temp;

class Informer
{
public:
	void Print(Temp t, Humidity h);
	void foo(Temp t);
	
};

class Temp
{
	int temp;

public:
	Temp(int t) :temp(t) {}
	friend void Informer::Print(Temp t, Humidity h);
	//friend class Informer;
	//friend void Informer(Temp t, Humidity h);
};

class Humidity
{
	int hum;

public:
	Humidity(int h) :hum(h) {}
	friend void Informer::Print(Temp t, Humidity h);
	//friend class Informer;
	//friend void Informer(Temp t, Humidity h);
};

//void Informer(Temp t, Humidity h)
//{
//	cout << "Temp: " << t.temp << (char)248 << "C" << endl;
//	cout << "Humid: " << h.hum << "mm.Hg" << endl;
//}



void Informer::Print(Temp t, Humidity h)
{
	cout << "Temp: " << t.temp << (char)248 << "C" << endl;
	cout << "Humid: " << h.hum << "mm.Hg" << endl;

}

void Informer::foo(Temp t)
{
	
}