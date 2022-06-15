/* Problem Statement
// Ninja has an array 'ARR' consisting of 'N' integers. 
Your primary work is to split it into three parts so that each integer is a component of a single part only. 
Each part must be a consecutive contiguous subsegment of the original array and can also be empty.
 So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. 
 Ninja made the problem even harder by declaring a condition that 'S1' must be equal to 'S3' and 'S1'
  must be the maximum possible amongst all possible ways.
// The sum of the empty subsegment is 0.
*/
long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    long long ans=0,sumi=0,sumj=0,i=0,j=n-1;
    sumi+=arr[i];
    sumj+=arr[j];
    
    while(i<j){
        if(sumi==sumj){

            i++;

            j--;

            ans=sumi;

        }

        if (sumi>sumj){

            j=j-1;

            sumj+=arr[j];

        }

        if (sumi<sumj){

            i=i+1;

            sumi+=arr[i];

        }

    }

    return ans; 
}