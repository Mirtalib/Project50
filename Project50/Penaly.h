#pragma once



namespace HearderFiles {

	class Penaly
	{
	private:
		int static _globalIdP;
		int _id;
		string _text;
		string _dateTime;
		double _price;
	public:
		Penaly(string text,string dateTime,double price);

		string getText() { return _text; }
		string getDataTime() { return _dateTime; }
		double getPrice() { return _price; }
		int getId() { return _id; }
	
		friend ostream& operator<<(ostream& output, Penaly s);
	
	};


	int Penaly::_globalIdP = 0;

	Penaly::Penaly(string text, string dateTime, double price)
		:_id(++_globalIdP)
	{
		_text = text;
		_dateTime = dateTime;
		_price = price;
	}

	ostream& operator<<(ostream& output, Penaly s) {

		output << "Text Penaly=>" << s._text << endl
			<< "Price Penaly=>" << s._price << endl
			<< "Date Time Penaly=>" << s._dateTime << endl;

		return output;
	}

}
