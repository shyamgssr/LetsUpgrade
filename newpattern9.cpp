//      1
//      12
//      123
//      1234
//      12345


#include  <iostream>
using namespace std ;

int main() 
{
    int i ; 
    int j ;
    int k ;
    int z ;
    int m = 9 ;
    int n = 5 ;


for (int i=1; i<=5; i++)
        {
 
            // inner loop to handle number spaces
            // First blanks needs to e printed , so that cursor moves till that point .
             for (int j= 1; j <= i; j++)
            {
               
                cout << j  ;
            }
           
              // ending line after each row
                 cout << endl ;
           
 
        }
}
