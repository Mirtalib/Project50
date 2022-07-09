#include<iostream>
#include<map>


using namespace std;
#include"Penaly.h"
#include"CarNumber.h"
using namespace HearderFiles;

int main() {

	Penaly s("Qirmizi Ishiqdan Kecmek", __TIME__, 60);
	Penaly s1("Qosha xetti Taptalamaq", __TIME__, 45);
	Penaly s3("Suret Heddi Ashmaq", __TIME__, 80);


	CarNumber car(12345, "90-RP-861", "Ziya Huseynzade");

	car.addPenaly(s);
	car.addPenaly(s1);
	car.addPenaly(s3);

	cout << car << endl;
}