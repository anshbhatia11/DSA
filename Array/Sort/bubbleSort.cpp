/******************************************************************************

Time complexity = O(N^2), space complexity = O(1)
Stable algorithm i.e. order is preserved

*******************************************************************************/

#include <iostream>

using namespace std;

void bubbleSort(int arr[],int n){
    bool swapCheck=false; //swapCheck to optimise the solution more
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swapCheck= true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swapCheck){
            return break;
        }
    }
}

int main()
{
    
    int arr[5] = {2,3,4,6,0};
    
    int n = 5;
    
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
