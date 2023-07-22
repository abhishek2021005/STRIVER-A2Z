#LEETCODE Q485(EASY)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0,count2=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else {
                count=0;
            }
            count2=max(count,count2);
            
        }
        return count2;
    }
};



// #GFG(MEDIUM)
// MAXIMIZE NUMBER OF 1'S
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        
    //     int count = 0;  // Count of zeros within the window
    // int left = 0;   // Left pointer of the window
    // int maxLen = 0; // Maximum length of subarray with at most 'm' zeros

    // for (int right = 0; right < n; right++) {
    //     if (arr[right] == 0) {
    //         count++;
    //     }

    //     while (count > m) {
    //         if (arr[left] == 0) {
    //             count--;
    //         }
    //         left++;
    //     }

    //     maxLen = max(maxLen, right - left + 1);
    // }

    // return maxLen;
    
    
    
    
//     int ans=0;
//   for(int i=0; i<n;i++){
//         int countz=0;int j=i;
//       for(;j<n;j++){
//           if(arr[j]==0)countz++;
//           if(countz>m)break;
//       }ans=max(ans,j-i);
//   }
//     return ans;




int left=0,right=0,count=0,count2=0;
while(right<n ){
  
  if(count2<=m){
      if(arr[right]==0)count2++;right++;
 }
  if(count2>m){
      if(arr[left]==0)count2--;
      left++;
  }
   count=max(count,right-left);
}
return count;
    }  
};
