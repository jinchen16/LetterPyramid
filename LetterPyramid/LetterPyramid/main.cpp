/*
* Made by Jin Chen for the Udemy course taught by  Frank J. Mitropoulos.
* Letter Pyramid challenge.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sequence{};
	cout << "Enter the text you want to make the pyramid with (Note: don't leave spaces): ";
	cin >> sequence;

	size_t innerCounter = 1;
	size_t id = 0;
	string line(sequence.size() - 1, ' ');

	for (size_t i = 0; i < sequence.size(); i++)
	{
		cout << line;
		for (size_t j = 0; j < innerCounter; j++)
		{
			id = (j <= i) ? j : id -= 1;
			cout << sequence.at(id);
		}
		line.erase(0, 1);
		innerCounter += 2;
		cout << endl;
	}
	return 0;
}