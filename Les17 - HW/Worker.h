#pragma once

#include<iostream>
#include<string>
using namespace std;

class Worker
{
	string surname;
	int birthYear;
	string poition;
	float salary;
	string background;
public:
	Worker();
	Worker(string surname_, int birthYear_, string poition_, float salary_, string background_);
	void show()const;
};