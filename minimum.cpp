// Jordan Brown - Minimum Finder - 9/10/19

//Setup
#include <iostream>
using namespace std;

//Main Routine
int main ()

{
	//Initialize Variables
	int num1,num2,num3,min;
	
	//Gather Values
	cout << "\nEnter the first integer: ";
	cin >> num1;
		cout << "Enter the second integer: ";
	cin >> num2;
		cout << "Enter the third integer: ";
	cin >> num3;
	
	
	//Compare
	if(num1 <= num2 && num1 <= num3)
		min = num1;
	else if (num2 <= num1 && num2 <= num3)
		min = num2;	
	else if (num3 <= num1 && num3 <= num2)
		min = num3;
	
	//Output
	cout << "\nGiven the numbers " << num1 << ", " << num2 << ", and " << num3 << endl;
	cout << "\nThe smallest number is: " << min << "\n" << endl;

}