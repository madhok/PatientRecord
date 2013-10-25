#include <iostream>
#include "patientRecord.h"

using namespace std;

int main()
{
	patientRecord obj;
	cout << "Press 1 - to search patient records" << endl;
	cout << "Press 2 - to add new patient" << endl;

	int val = 0;;
	cin >> val;

	if(val < 1 && val >2)
	{
		cout << "Wrong entry" << endl;
		return 0;
	}

	string patientName;
	cout << "Enter patient's First name and last name" << endl;

	switch (val)
	{
		case 1:
			cin >> obj.patientName;
			obj.printName();
			obj.writePatientRecords();
			break;
		case 2:
			cin >> obj.patientName;
			obj.printName();
			obj.getPatientRecords();
			break;

	}
	string s;
	cin >> s;
	return 0;
};