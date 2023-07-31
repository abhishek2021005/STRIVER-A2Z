// LEETCODE EASY Q169
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ele=nums[0];
        for(int i=0;i<nums.size();i++){
            if(count==0){
            count=1;
                ele=nums[i];
            }
            else if(ele==nums[i])count++;
            else count--; 
        }
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele)count2++;
            
        }
        if(count2>nums.size()/2)return ele;
        else return -1;
    }
};



// GFG MEDIUM
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
       int count=0,ele;
       for (int i=0;i<size;i++){
           if(count==0){
               count=1;
               ele=a[i];
           }else if(a[i]==ele)count++;
           else count--;
    }
    int count2=0;
    for(int i=0;i<size;i++){
        if(a[i]==ele)count2++;
    }
    if(count2>size/2)return ele;
    else return -1;}
};
