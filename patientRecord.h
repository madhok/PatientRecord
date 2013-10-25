#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "roga.h"

using namespace std;

class patientRecord
{
public:
	string patientName;
	Roga rogaObj;
	void printName();
	void getPatientRecords();
	void writePatientRecords();

};

