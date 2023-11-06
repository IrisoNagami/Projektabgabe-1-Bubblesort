//Implementierung der Bibliothek unseres Profs
#include "std_lib_inc.h"

int main()
{
	cout << "Bitte gib drei Zahlen ein:\n";
	int first_number;
	int second_number;
	int third_number;
	int temp;									//für später zum zwischenspeichern von Nummern
	cin >> first_number >> second_number >> third_number;
	if (!cin)									//Abfangen von fehlerhaften Eingaben
	{
		simple_error("Die Eingabe ist falsch");
	}
	vector<int> numbers(3);						//Vector bzw. Array mit der Größe 3
	for (int i = 0; i < numbers.size(); ++i)
	{
		for (int j = i + 1; j < numbers.size(); ++j)
		{
			if (numbers[j] < numbers[i])		//Index i wird mit Index i+1 bzw. j verglichen, wenn i größer ist wird es nach "rechts" verschoben
			{
				temp = numbers[i];				//größere Zahl wird zwischengespeichert
				numbers[i] = numbers[j];		//kleinere Zahl wird nach "links" geschoben
				numbers[j] = temp;				//größere Zahl wird nach "rechts" verschoben
			}
		}
	}
	cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << '\n';
}