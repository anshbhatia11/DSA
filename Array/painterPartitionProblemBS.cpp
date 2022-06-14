/*
Concept based on Book Allocation Problem

Problem Statement
Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given
 array/list represents the length of each board. Some ‘K’ numbers of painters are available to paint these boards. 
 Consider that each unit of a board takes 1 unit of time to paint.


You are supposed to return the area of the minimum time to get this job done of painting
 all the ‘N’ boards under a constraint that any painter will only paint the continuous sections of boards.

*/


bool isPossible(vector<int> arr,int n,int k,int mid){
    int painterCount = 1; //current painter
    int totalBoardL = 0; //targets the boardlength given to current painter
    
    for(int i=0;i<n;i++){
        if(totalBoardL+arr[i]<=mid){
            totalBoardL+=arr[i];
        }else{
            painterCount++;
            if(painterCount>k || arr[i]>mid){
                return false;
            }
            totalBoardL = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //book allocation problem approach
    int n = boards.size(); //length of board array;
    int s = 0;
    int e = 0;
    for(int i=0;i<n;i++){
        e+=boards[i];
    }
    
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(isPossible(boards,n,k,mid)){
            //possible solution exist, move left
            ans = mid;
            e = mid-1;
        }else{
            //no possible solution, move right
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    
    return ans;
}