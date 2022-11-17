#include <iostream>
using namespace std ;

int main() {

int arr[] = {1,9,4,8,7,5} ;
int i ;
int val = 81 ;
bool found = false;

for(i= 0 ; i<=5 ; i++)
{

    if( arr[i] == val)
    {
     cout << "Number found at: " << i <<endl ;
     found = 1 ;
     break ;
    }

}

if (found == false ) 
{

cout << "Number not found "   ;
}
}