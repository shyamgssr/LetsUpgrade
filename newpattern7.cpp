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
    int n = 5 ;


for (int i=1; i<6; i++)
        {
 
            // inner loop to handle number spaces
            // First blanks needs to e printed , so that cursor moves till that point .
             for (int j= 1; j <= i-1; j++)
            {
                // printing spaces
                cout << ' ' ;
            }
  
            //  inner loop to handle number of columns
            //  values changing acc. to outer loop
            for (int j= 1 ; j<= n+1-i ; j++ )
            {
                // printing stars
                 cout << "*" ;
            }
  
            // ending line after each row
                 cout << endl ;
                 //n = n - 1 ;
 
        }
}