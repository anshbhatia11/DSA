/*
Problem Statement
You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now, your task is to find the first and last occurrence of ‘K’ in ARR.
Note :

1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
2. ARR may contain duplicate elements.


*/



#include <iostream>

using namespace std;

int firstOcc(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    int mid = start+(end-start)/2; 
    
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        
        if(key>arr[mid]){ //key is bigger, ergo move to right part
            start = mid + 1;
            
        } else if(key<arr[mid]){ //key is smaller, ergo move to left
            end = mid - 1;
        }
        
        mid = start+(end-start)/2; 
    }
    
    return ans;
}


int lastOcc(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    int mid = start+(end-start)/2; 
    
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        
        if(key>arr[mid]){ //key is bigger, ergo move to right part
            start = mid + 1;
            
        } else if(key<arr[mid]){ //key is smaller, ergo move to left
            end = mid - 1;
        }
        
        mid = start+(end-start)/2;
    }
    
    return ans;
}


int main()
{
    int odd[7] = {2,6,6,6,6,6};
    int even[6] = {1,3,4,5,6,8};
    
    int a = firstOcc(odd,7,6);
    int b = lastOcc(odd,7,6);    
    cout<<"Element First found at index: "<< a<<" and finally at "<< b;
    
    return 0;
}
