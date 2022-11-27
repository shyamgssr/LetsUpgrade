#include <iostream>
using namespace std ;

int main() 
{
int arr[] = {1,2,3,4,5,6,7,8} ;
int start = 0 ; 
int n = sizeof(arr)/sizeof(int) ;
int end = n-1  ;  
int temp ;
int i ; 

for(i= 0 ; i <= n-1 ; i++) 
{

cout << arr[i] ;

}

cout << endl ;
do
{
    int temp   = arr[start] ;
    arr[start] = arr[end] ;
    arr[end]   = temp ;
    start = start + 1 ;
    end   = end   - 1   ;
} while (end <= start);

for(i= 0 ; i <= n-1 ; i++) 
{

cout << arr[i] ;

}
}



 