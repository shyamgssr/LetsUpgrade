#include <iostream>
using namespace std;


int findCube(int num)
{
    return num * num * num;
}

int main()
{
    
    int number;
    int sum = 0;
    int remainder;

    
    cout << "Enter a number : "; cin >> number;

        remainder = number;

    
    while (remainder != 0)
    {
        sum = sum + findCube(remainder % 10);
        //cout << "Remainder1 :" << remainder << endl;
        remainder = remainder / 10;
        //cout <<  "Remainder2 :" << remainder << endl;
    }

    
    if (sum == number)
    {
        cout << number << " is an Armstrong number" << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number" << endl;
    }

    return 0;
}
