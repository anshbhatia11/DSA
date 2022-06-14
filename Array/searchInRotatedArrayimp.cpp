/*
Problem Statement
You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘K’ is present in ARR.
Note :

1. If ‘K’ is not present in ARR then print -1.
2. There are no duplicate elements present in ARR. 
3. ARR can be rotated only in the right direction.


*/


int getPivot(vector<int>& arr,int n){
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

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr,n);
    if(arr[pivot]==k){
        return pivot;
    }
    int s,e; 
    
    //splitting array based on pivot element
    if(k>=arr[0]){
        e = pivot-1;
        s = 0;
    }
    else{
        e = n-1;
        s = pivot;
    }
    
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]>k){
            e = mid-1; //move left
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

