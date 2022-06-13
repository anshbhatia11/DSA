
#include <iostream>

using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end - start)/2; //mathematically same as (start+end)/2 but written this way so that value doesn't go out of int range
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        
        if(key>arr[mid]){ //key is bigger, ergo move to right part
            start = mid + 1;
            
        } else if(key<arr[mid]){ //key is smaller, ergo move to left
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    
    return -1;
}


int main()
{
    int odd[5] = {2,4,6,8,19};
    int even[6] = {1,3,4,5,6,8};
    
    int a = binarySearch(even,6,6);
    cout<<"Element found at index: "<< a;
    
    return 0;
}
