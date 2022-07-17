#pragma once

class Time
{
	int h, m, s;

public:
	Time() :Time(0) {}
	Time(int sec) :Time(0, sec) {}
	Time(int min, int sec) :Time(0, min, sec) {}
	Time(int ho, int min, int sec) : h{ho}, m(min), s(sec)
	{

	}
};
