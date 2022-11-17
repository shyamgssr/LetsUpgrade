#include <iostream>
using namespace std ;

int main()

{
    
int i  ; 
int n   ; 
int result = 1 ; 

cout << "Enter the number to check the factorial of the number" ;
cin >> i ;
n = i ;

 while (i != 1){

 result = result * i ;
 i = i-1 ;

}

cout << "Factorial of " << n  << " is : " << result ;











}