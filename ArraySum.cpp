
#include <iostream>
using namespace std ;


int sumarr()
{

int i ; 
int sum = 0 ;
int arr[5] = {1,2,3,4,5} ;

for(i= 0 ; i<= 4 ; i++ )

{
sum = sum + arr[i] ;
}
cout << "Sum of the Array Elements:  " << sum ;
return 0 ;

}
int main() 
{

sumarr() ;

}