#include <iostream>
using namespace std ;

int main()

{
int num ;
int twoo = 2 ;
int three = 3 ;
int five = 5 ;
int seven = 7 ;
bool primechk = true ;

cout << "Enter a number to check wheather it's Prime or not " << endl ;

cin >> num ; 

if  (num == 0 || num == 1)
{
 cout << "Not a Prime Number1 " ;
 primechk = false ;

}

if (num == twoo)
{
    cout << "Prime Number2" ;
    primechk = true ;
}

if (num%twoo == 0 )
{
    cout << "Not a Prime Number divisible 2 " ;
    primechk = false ;
}

if (num%three == 0 )
{
    cout << " Not a Prime Number divisible by 3 " ;
    primechk = false ;
}

if (num%five == 0 )
{
    cout << "Not a Prime Number divisible by 5" ;
    primechk = false ;
}
if (num%seven == 0 )
{
    cout << "Not a Prime Number divisible by 7 " ;
    primechk = false ;
}


if (primechk == true ) 
{
    cout << "Prime Number99" ;
}

if (primechk == false ) 
{
    cout << "Not a Prime Number98" ;
}

}