#include <iostream>
using namespace std;
int main() {
   int a = 7, b = 8 , c = 9;
   int maximum  = max(a, b) ;
       maximum  = max(maximum ,c) ;
   while (true) {
      if (maximum % a == 0 && maximum % b == 0 && maximum % c == 0) {
         cout << "LCM: " << maximum << endl;
         break;
      }
      maximum++;
   }
}