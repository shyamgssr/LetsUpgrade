//       *
//      ***
//     *****
//    *******
//   *********

#include  <iostream>
using namespace std ;

int main() 
{
    int i ; 
    int j ;
    int k ;
    int z ;
    int m = 5 ;
    int n = 6 ;


for (int i=1; i<n; i++)
        {
 
            // inner loop to handle number spaces
            // First blanks needs to e printed , so that cursor moves till that point .
             for (int j= n-i; j> 1; j--)
            {
                // printing spaces
                cout << ' ' ;
            }
  
            //  inner loop to handle number of columns
            //  values changing acc. to outer loop
            for (int j= 1 ; j<= 2*i -1 ; j++ )
            {
                // printing stars
                 cout << "*" ;
            }
  
            // ending line after each row
                 cout << endl ;
 
        }
}