// #LEETCODE (Q53 MEDIUM)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max)max=sum;
            if(sum<0)sum=0;
        
        }return max;
    }
};

//#KADANE'S ALGORITHM (MEDIUM)
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long sum=0,max=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>max)max=sum;
            if(sum<0)sum=0;
            
        }return max;
        // Your code here
        
    }
};
