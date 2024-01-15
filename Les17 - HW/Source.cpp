#include"Worker.h"
#include<vector>

int main() {
	vector<Worker> arr;
	arr.push_back(Worker("Summer Wall", 1989, "Professional cuddler", 12800, "University of Oxford"));
	arr.push_back(Worker("Dean Schultz", 2001, "Waterslide tester", 2833, "Harvard University"));
	arr.push_back(Worker("Jimena Calhoun", 1992, "Golf ball diver", 8000, "University of Cambridge"));
	arr.push_back(Worker("Declan Terry", 1980, "Professional sleeper", 4000, "California Institute of Technology"));
	arr.push_back(Worker("Kelvin Wilkinson", 2003, "Snake milker", 2500, "Stanford University"));
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "#" << i + 1 << endl;
		arr[i].show();
		cout << endl;
	}
	return 0;
}