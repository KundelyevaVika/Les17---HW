#include"Worker.h"
#include<vector>
#include<ctime>

int main() {
	time_t t = time(0);
	tm now;
	localtime_s(&now, &t);
	vector<Worker> arr;
	arr.push_back(Worker("Summer Wall", 1989, "Professional cuddler", 12800, "University of Oxford"));
	arr.push_back(Worker("Dean Schultz", 2001, "Waterslide tester", 2833, "Harvard University"));
	arr.push_back(Worker("Jimena Calhoun", 1960, "Golf ball diver", 8000, "University of Cambridge"));
	arr.push_back(Worker("Declan Terry", 1962, "Professional sleeper", 4000, "California Institute of Technology"));
	arr.push_back(Worker("Kelvin Wilkinson", 2003, "Snake milker", 2500, "Stanford University"));
	for (int i = 0, n = 1; i < arr.size(); i++)
	{
		if (now.tm_year + 1900 - arr[i].getBirthYear() >= 60) {
			cout << "#" << n << endl;
			arr[i].show();
			cout << endl;
			n++;
		}
	}
	return 0;
}