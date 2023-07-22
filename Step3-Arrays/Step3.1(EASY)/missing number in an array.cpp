// #LEETCODE Q268(EASY) 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     int n= nums.size();
    //     int x=0,y=0;
    //     for(int i=0;i<n;i++){
    //         x=x^nums[i];
    //         y=y^i;
    //     }
    //     y=y^n;
    //     return (x^y);
        
        
        int N=nums.size();
        vector<int> hash(N+1,0);
    for(int i=0;i<N;i++){
        hash[nums[i]]=1;
    }
    for(int i=0;i<N+1;i++){
        if(hash[i]==0)return i;
    }
        return -1;
    }

};



// GFG (EASY)
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int xor1 = 0;
        
        for(int i=0;i<n-1;i++) xor1 ^= (i+1)^array[i];
        
        return xor1^n;
    }
};
