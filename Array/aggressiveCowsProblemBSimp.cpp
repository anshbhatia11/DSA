/*
    Similar to Book Allocation Problem
    Difference: Book allocation was "returning minimum larget value"
    whereas this returns "maximum smallest value"


    Problem Statement
Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ 
stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, 
you need to assign the cows to the stalls, 
such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.
*/


bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1; //first cow
    int lastPos = stalls[0]; //simply means placing first cow at zeroth position
    for(int i=0;i<stalls.size();i++){
        //try placing other cow i.e. 2nd and every other position and check for minimum distance
        if(stalls[i]-lastPos>=mid){
            //Distance bigger than mid value
            cowCount++;
            if(cowCount == k){
                return true; //cow placed successfully 
            }
            lastPos = stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i=0;i<stalls.size();i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(isPossible(stalls,k,mid)){ //possible solution exist, since we need max solution here we move right
            ans = mid;
            s = mid+1;
        }else{
            e = mid -1; //no possible solution ergo move left
        }
        mid = s + (e-s)/2;
    }
    return ans;
}