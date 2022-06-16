/*
Time complexity - O(N^2), Best case - O(N)
Space complexity - O(1)

Stable algorithm, adaptive(takes already sorted element into account and doesn't reorder it)

*/


#include <iostream>

using namespace std;


void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){ //assuming first element to be sorted and sorting rest array
        
        int temp = arr[i]; //storing current element
        int j = i-1; //every element is compared with all elements to its left  
        
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j]; //push right
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    //printing the output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    
    int arr[6] = {18,10,7,11,9,17};
    int n = 6;
    
    insertionSort(arr,n);
    
    

    return 0;
}