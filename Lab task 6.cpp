//// Task-6 
//
//
//#include <iostream>
//
//
//
//using namespace std;
//
//
//int main()
//{
//
//
//	int price;
//	int quantity;
//
//	cout << "Please enter the price of the product: ";
//	cin >> price;
//
//	cout << "Please enter the quanitity of the product: ";
//	cin >> quantity;
//
//
//	int totalprice = price * quantity;
//	int tax = totalprice * 5 / 100;
//	int grandtotal = totalprice + tax;
//
//	cout << "The total price of the product exclusive of tax is: " << totalprice << endl;
//	cout << "The tax on the product is: " << tax << endl;
//	cout << "This makes the grand total of your bill: " << grandtotal << endl;
//
//
//
//
//	/*3. Run the program again with price = 99 and quantity = 7. A calculator gives a tax of 34.65. What
//	does your program print, and why is it different? Answer in a comment.
//
//	Ans: The program prints 34 because int variable value only stores integers not decimal values.
//	     The decimal values are ignored when the variable int is used
//	*/
//
//
//
//
//	}