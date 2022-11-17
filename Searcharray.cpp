#include <iostream>
using namespace std ;

int main() {

int arr[] = {1,9,4,8,7,5} ;
int i ;
int val = 9 ;

for(i= 0 ; i<=5 ; i++)
{

    if( arr[i] == val)
    {
     cout << "Number found at: " << i <<endl ;
     break ;
    }

}

if (i == 6) 
{

cout << "Number not found "   ;
}
}
