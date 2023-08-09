#include <iostream>

using namespace std;

int main () {
cout << "\n\n This is the second day of C++\n\n ";

//This is meant to organize todays project

int num1 = 0;
int num2 = 0;
int theSum = 0;
int theProduct = 0;

//Get the first number from the user
cout<< "\n Please enter the first number...";
cin>> num1;

//Get the second number from the user
    cout << "\n Please enter the second number...";
    cin>> num2;
//Add the two numbers...
 theSum= num1+num2;

 //OutPut the sum

 cout<< "\n\n The sum is " << theSum<<"!";

 //Processing
 theProduct = num1 * num2;

 //Output the product
 cout<< "\n\n The product is "<< theProduct << "! \n\n";
 return 0;
}
