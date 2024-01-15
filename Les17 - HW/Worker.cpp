#include "Worker.h"

Worker::Worker()
{
	surname = "Undefined";
	birthYear = 0;
	poition = "Undefined";
	salary = 0;
	background = "Undefined";
}

Worker::Worker(string surname_, int birthYear_, string poition_, float salary_, string background_)
{
	surname = surname_;
	birthYear = birthYear_;
	poition = poition_;
	salary = salary_;
	background = background_;
}

void Worker::show() const
{
	cout << "Surname: " << surname << endl;
	cout << "Birth year: " << birthYear << endl;
	cout << "Position: " << poition << endl;
	cout << "Salary: " << salary << endl;
	cout << "Background: " << background << endl;
}
