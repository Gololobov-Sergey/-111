#include<iostream>
#include"Point.h"
#include"Friend.h"
#include"Array.h"

using namespace std;

void foo(Student s)
{
	s.print();
}

Student foo1()
{
	Student s;
	return s;
}

int main()
{

	//// 17.07.2022  /////

	/*Temp t(25);
	Humidity h(760);

	Informer i;
	i.Print(t,h);*/

	// :: ,  .  , ?;  , coma , 
	// +, -, ++, --, +, -, *, /, %, +=, -=, ... %=,
	// !, <, >, ==, <=, >=, != 
	// (), type, [], << , >> , =

	

	Array arr(10);
	Array arr2(10);
	arr.set();
	arr.print();
	cout << arr.at(2) << endl;
	cout << arr[2] << endl;
	arr["one"] = 100;
	arr.print();

	arr2 = arr;
	arr2.print();

	Drib d(1, 5);
	d(2,3);
	d.print();

	float f = d;
	cout << f << endl;

	Drib d1(1,2);
	Drib d2(1,4);
	Drib d3 = d1; //d1.operator-();
	d3 = d1 = d2;
	//(d1++).print();
	//d1.print();
	//d3 = d1 + d2; // op+(d1, d2);  // d1.op+(d2)
	//d3.print();
	d1 += d2; // d1.op+=(d2)
	cin >> d1;
	cout << d1 << endl;
	//d3 = d1 + 10;
	//d3.print();
	//d3 = 10 + d1; // 10.op+(d1)

	if (d1 > d2)
	{

	}

	//Point p(10, 45);
	//p.setX(10);
	//p.setY(45);
	////p.x = 10;
	////p.y = 45;

	//cout << p.getX() << endl;


	//Point p1; // = { 23,45 };

	////printPoint(p);
	//p1.print(); // print(this);

	//Point p2[2];
	//p2[0].print();

	//Point* pt = new Point;
	//pt->print();

	//Student s("Alex", 26);
	//s.print();
	{
		//1
		//Student s1(s);
		//s1.print();

		//2
		//foo(s);

		//3
		//Student s1 = foo1();
		//s1.print();
	}

	//s.print();

	/*Point p(12, 15, 99);
	p.print();
	

	Drib d1;
	Drib d2;
	Drib d3 = d1.sum(d2);

	PhoneBook pb;
	pb.menu();*/



	//cout << Point::getCount() << endl;
	//Point p1;
	//cout << p1.getCount() << endl;

	system("pause");
}