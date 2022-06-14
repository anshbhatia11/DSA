/*
The main idea for finding a pivot is – for a sorted (in increasing order) and pivoted array, 
the pivot element is the only element for which the next element to it is smaller than it. 
*/

#include <iostream>

using namespace std;

int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
    
}


int main()
{
    int arr[7] = {7,8,-11,-1,0,4,5};
    
    cout<<"Pivot Index "<<getPivot(arr,5)<<endl;
    
    return 0;
}
