#include<iostream>
using namespace std;

int main()
{
	int number, remainder, digitProduct = 1;
	
	cout << "\nPlease Enter the Number to find the Digits Product =  ";
	cin >> number;
	
	while (number > 0)
	{
    	remainder = number % 10;
    	digitProduct = digitProduct * remainder;
    	number = number / 10;
    	
    	cout << "\nDigit = " << remainder << " and the Digit Product = " << digitProduct;
	}
	cout << "\n\nThe Product of all Digits in a given Number = " << digitProduct;
		
 	return 0;
} 
