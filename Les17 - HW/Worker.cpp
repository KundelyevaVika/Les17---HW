#include "Worker.h"

Worker::Worker()
{
	name = "Undefined";
	birthYear = 0;
	poition = "Undefined";
	salary = 0;
	background = "Undefined";
}

Worker::Worker(string name_, int birthYear_, string poition_, float salary_, string background_)
{
	name = name_;
	birthYear = birthYear_;
	poition = poition_;
	salary = salary_;
	background = background_;
}

int Worker::getBirthYear() const
{
	return birthYear;
}

void Worker::show() const
{
	cout << "Name: " << name << endl;
	cout << "Birth year: " << birthYear << endl;
	cout << "Position: " << poition << endl;
	cout << "Salary per month: " << salary << "$\n";
	cout << "Background: " << background << endl;
}