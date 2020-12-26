//Calculating School Report Average with C++
//Created by = Samet Coşacak
//Github : https://github.com/sametdev10

#include <iostream>
using namespace std;

int main() {

	
	double english1 , english2 , math1 , math2 , science1 , science2  , music1 , music2 ,  physc1 , physc2 , total;

	//English
	cout << "English - 1:" << "  ";
	cin >> english1;

	cout << "\nEnglish - 2" << "  ";
	cin >> english2;

	//Math
	cout << "\n\n\n\nMath - 1:" << "  ";
	cin >> math1;

	cout << "\nMath - 2:" << "  ";
	cin >> math2;

	//Science
	cout << "\n\n\n\nScience - 1" << "  ";
	cin >> science1;

	cout << "\nScience - 2:" << "  ";
	cin >> science2;

	//Music
	cout << "\n\n\n\nMusic - 1:" << "  ";
	cin >> music1;

	cout << "\nMusic - 2:" << "  ";
	cin >> music2;

	//Physical Education
	cout << "\n\n\n\nPhysical Education - 1:" << "  ";
	cin >> physc1;

	cout << "\nPhysical Education - 2:" << "  ";
	cin >> physc2;

	//Total
	total = (english1 + english2 + math1 + math2 + science1 + science2 + music1 + music2 + physc1 + physc2) / 10;

	cout << "\n\n\n\n\n\n\n Your average:" << "  " << total << endl;

	if (total < 50)
	{
		cout << "You failed :(" << endl;
	}
	else
	{
		cout << "Completed :)" << endl;
	}

	system("Pause");

	return 0;

	/*
			The system in the UK may be different. Excuse me.
	*/

	/*
			In Turkey, the best score = 100 :)
	*/
}