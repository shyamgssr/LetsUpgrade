#include <iostream>
using namespace std ;

void  MenuInput(int choice , char exitmenu)
{
    
   do 
   {
    if (exitmenu == 'Y')
        
        {
         cout << "Enter 1 for Tea : "   << endl ;
         cout << "Enter 2 for Coffee : " << endl ;
         cin >> choice ;
        } 

        

       if (choice == 1) 
    
            { 
                  cout << "Take your Tea and Enjoy" << endl ;
                  cout << "Do you want to continue ,Take Y else N" << endl ;
                  cin  >>  exitmenu  ;
            }
       

       if (choice == 2) 
              { 
                  cout << "Take your Coffee and Enjoy" << endl ;
                  cout << "Do you want to continue ,Take Y else N" << endl ;
                  cin  >>  exitmenu  ;
              }

      if (choice != 1 & choice != 2)   
             {
                cout << "Enter correct choice" << endl ;
                cin >> choice ;
                // Function calling for exitmenu
                exitmenu = 'N' ;
                MenuInput(choice ,exitmenu);
             } 
    
} while (exitmenu == 'Y') ;
}


// Driver code
int main()
{
    int choice ;
    char exitmenu = 'N';
    cout << "Enter 1 for Tea : "   << endl ;
    cout << "Enter 2 for Coffee : " << endl ;

    cin >> choice ;
 
    // Function calling
    MenuInput(choice, exitmenu);
     
    return 0;
}
