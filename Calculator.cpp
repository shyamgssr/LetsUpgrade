#include <iostream>
using namespace std ;

char choice = ' ' ;
int a = 0 ;
int b = 0 ;
int c = 0 ; 
char Countiue = 'Y'; 
int main() ;

int addfun(int a , int b  )

{   int c = 0 ; 
    c = a + b ;
    Countiue = 'N'  ;
    cout << "Sum of Two Numbers is : " << c <<endl;
    cout << "Do you want to Continue 'Y/N' " ;
    cin  >> Countiue ;
    //cout << Countiue ;
     if(Countiue == 'Y') 
     //{
       main() ;
    // }
     //if(Countiue == 'N')
     //{
        //Countiue = 'N'  ;
        else 
        return 0 ;
     //} 

}

int multfun(int a , int b  )

{   int c = 0 ; 
    c = a * b ;
    Countiue = 'N'  ;
    cout << "Multiplication  of Two Numbers is : " << c <<endl;
    cout <<"Do you want to Continue 'Y/N' " ;
    cin >> Countiue ;
    if(Countiue == 'Y') 
     {
       main() ;
     }
     else
     {
        Countiue = 'N'  ;
        return 0 ; 

     }
   

}
int divfun(int a , int b  )

{   int c = 0 ; 
   if(b == 0)
    {
        cout  << "Can't divide by 0 " ;
        
     }
     else
     {
          c = a / b ;
          Countiue = 'N'  ;
          cout << "Division of a and b , Quotient is:  " << c <<endl;     
          cout <<"Do you want to Continue 'Y/N' " ;
         cin >> Countiue ;
         if(Countiue == 'Y') 
         {
            main() ;
         }
          else 
        {
          Countiue = 'N'  ;
          return 0 ; 
        }
    
     }
    
    

}
int subfun(int a , int b  )

{   
     int c = 0 ; 
    c = a - b ;
    Countiue = 'N'  ;
    cout << "Difference of Two Numbers is : " << c <<endl;
    cout << "Do you want to Continue 'Y/N' " ;
    cin >> Countiue ;
    cout << Countiue ;
     if(Countiue == 'Y') 
      {
        main() ;
      }
        else 
      {
              return 0 ; 
      }
}

int main() 
{
    

do {
    if(Countiue == 'Y') 
    {
    cout << "Take option '+' ,'-', '*' ,'/'  " <<endl ;
    cin >> choice ; 
    cout << "Please enter two numbers " <<endl ;
    cin >> a  ,
    cin >> b  ; 

if (choice == '+')
{
   addfun(a,b) ;   
}
if (choice == '*')
{
    multfun(a,b) ;
    
}
if (choice == '/')
{
    divfun(a,b) ;
}
if (choice == '-')
{
    subfun(a,b) ;   
    
}
if (Countiue == 'Y')
{
if (choice != '+' || choice != '-' ||choice != '/' || choice != '*' )
{
    cout << "Please enter correct choice" <<endl;
    main() ;
}
}

else 
{
Countiue = 'N' ;
}
    }
} while(Countiue == 'Y') ;
return 0;
}
