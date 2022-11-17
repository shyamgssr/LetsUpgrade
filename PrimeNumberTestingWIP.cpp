#include <iostream>
using namespace std ;

int main()

{
int num = 27 ;
int twoo = 2 ;

if  (num == 0 || num == 1)
{
 cout << "Not a Prime Number " ;
}

if (num == twoo)
{
    cout << "Prime Number" ;
}

if (num%twoo == 0 )
{
    cout << "Not a Prime Number " ;
}
else if (num%twoo != 0 )
{
    cout << "Prime Number" ;
}

twoo = twoo + 1 ;

}