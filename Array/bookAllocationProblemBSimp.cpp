/*

Important Concept!!!!

Problem Statement
Given an array ‘arr’ of integer numbers . where ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students and the task is to allocate all the books to their students. Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.

*/


bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount = 1;
    int pageSum = 0; //pageSum tells total pages for current Student(from pageCount)
    for(int i=0;i<n;i++){
        if(pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
              //exceeded student limit  or current book page>mid
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(isPossible(arr,n,m,mid)){ 
            //possible solution exist hence move left
            ans = mid;
            e = mid - 1;
        } else {
            //no possible solution, move right
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}