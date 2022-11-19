//Write a Program to check a given number representation is in binary or not?
//User input will contain a single integer n. 0≤n≤30,000


#include <iostream>
using namespace std ;


 int main() {

	  int number;
      int j ;
    cout << "Enter a positive number : "; cin >> number;

    if (number <= 0 || number > 30000)
    {
        cout << "Please enter a valid number.";
    }
    else
    {
        while(number>0)
    {
        j=number%10;
        cout  << "Fist run" << j <<endl; 
        if( j!=0 && j!=1 )
        {
           cout  << "Entered number is not a Binary";
           break;
        }
        number=number/10;
        cout  << "Number/10 : " << number << endl ;
        if(number==0)
        {
            cout  << "Entered number  is Binary";
        }
    }

    return 0;
}
 }
 