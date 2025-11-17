// huffconnorassignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // input and output 

using namespace std;

int main()
{

	// declaration of variables

	const int sizearray = 10;
	int numbers[sizearray];

	int minimumValue;
	int maximumValue;
	int minIndex;
	int maxIndex;

	double total = 0.0;
	double average;

	// input from user 

	cout << "Enter" << sizearray << " numbers:" << endl;

	for (int i = 0; i < sizearray; i++) {
		cin >> numbers[i];
	}

	//data processing 

	minimumValue = numbers[0];
	maximumValue = numbers[0];
	minIndex = 0;
	maxIndex = 0;

	for (int i = 0; i < sizearray; i++) {

		if (numbers[i] < minimumValue) {
			minimumValue = numbers[i];
			minIndex = i;
		}
		if (numbers[i] > maximumValue) {
			maximumValue = numbers[i];
			maxIndex = i;
		}
		total = total + numbers[i];
	}

	//calculations
	average = total / double(sizearray);

	//output

	cout << "Max value:  " << maximumValue << "  at index  " << maxIndex << endl;
	cout << "Min value:  " << minimumValue << "  at index  " << minIndex << endl;
	cout << "Average value:  " << average << endl;

	return 0;
}
   