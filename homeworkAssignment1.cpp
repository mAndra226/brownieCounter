/*****************************************************************************************
Homework name: Brownie Counter
Name: Marco Andrade
Compiler: Visual Studio 2017
Description: This program calculates how many 1-inch brownies would fit inside of a pan
Due Date: 2/28/19
*****************************************************************************************/
#include <iostream>
using namespace std;

int main() {
	short length = 0;
	short width = 0;
	short totalBrownies = 0;

	//Promps the user to input the length of the pan
	cout << "Enter the length of your pan: " << endl;
	cin >> length;

	//Promps the user to input the width of the pan
	cout << "Enter the width of your pan: " << endl;
	cin >> width;

	//Calculates the width and length of the pan
	totalBrownies = length * width;

	//Outputs the amount of brownies being made after calculating 
	cout << "You are making " << totalBrownies << " brownies." << endl;

	system("pause");
	return 0;
}