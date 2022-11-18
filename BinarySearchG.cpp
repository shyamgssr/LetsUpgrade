#include <iostream>
using namespace std;


int binarySearch(int arr[], int wk_start, int wk_end, int wk_item)
{
    int wk_mid = 0  ;

     cout << wk_start << endl;
      cout << wk_end << endl;

       
    
    while (wk_start <= wk_end ) {
        //int mid = wk_start + (wk_end - wk_start) / 2;
        int wk_mid = (wk_start + wk_end)  / 2;
  
        if (arr[wk_mid] == wk_item)
            return wk_mid;
            cout << wk_mid ;
  
        if (arr[wk_mid] < wk_item)
            wk_start = wk_mid + 1;
          
        else
            wk_end = wk_mid - 1;
    }
  
        cout << wk_mid ;
        return -1;
}
  
int main()
{
    // array needs to be sorted to impliment binary search
    int arr[] = {3, 5, 7, 9, 12, 15, 16, 18, 19, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int noelements = n -1 ;
    int wk_start = 0 ;
    int wk_item = 9;
    
    int position = binarySearch(arr,wk_start, noelements, wk_item);
    
    if(position == -1)
        cout << wk_item << " Not Found";
    else
        cout << wk_item << " Found at index " << position;
        
    return 0;
}