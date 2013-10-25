#include "patientRecord.h"



void patientRecord::printName()
{
	cout << patientName << endl;
}

void patientRecord::getPatientRecords()
{
	cout << "Records will be printed" << endl;
	map<string,string>::iterator it;

	for(int count = 0,it = rogaObj.rogas.begin(); it != rogaObj.rogas.end(); ++it, ++count)
	{
		cout << count  << it->first << "==>" << it->second <<endl;
	}
}

void patientRecord::writePatientRecords()
{
	ofstream recordFile;
	recordFile.open("Records.csv", ios::out | ios::ate |ios::app |ios::binary);
	cout << patientName << endl;
	cout << "How many rogas u want to enter" << endl;
	cin >> rogaObj.nRogas;
	for(int i = 0; i < rogaObj.nRogas; i++)
	{
		string rogaName;
		string value;
		cout << "Name of the roga" << endl;
		cin >> rogaName;
		cout << "Value" << endl;
		cin >> value;
		rogaObj.rogas.insert(pair<string,string>(rogaName, value)); 
	}
}