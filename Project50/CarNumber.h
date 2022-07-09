#pragma once


namespace HearderFiles {

	class CarNumber
	{
	private:

		int _idCar;
		string _numberCar;
		string _owner;
		map<int, Penaly> _penaly;

	public:

		CarNumber(int id , string numberCar , string owen);
		
		void addPenaly(Penaly p) {
			_penaly.insert({ p.getId(), p });
		} 

		friend ostream& operator<<(ostream& output, CarNumber s);
	};

	CarNumber::CarNumber(int id, string numberCar, string owner)
	{
		_idCar = id;
		_numberCar = numberCar;
		_owner = owner;
	}


	ostream& operator<<(ostream& output, CarNumber s) {

		output << "Id Car Number=>" << s._idCar << endl
			<< "Car Number=>" << s._numberCar << endl
			<< "Car Owner=>" << s._owner << endl
			<< "Penaly:" << endl;

		for (auto& i : s._penaly)
		{
			cout <<"Id Penaly=>" << i.first << endl << i.second << endl;
		}
		return output;
	}
}
