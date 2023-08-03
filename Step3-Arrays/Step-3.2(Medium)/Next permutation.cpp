#LEETCODE Q31(Medium)

class Solution {
    // private:
    // void reverse(vector<int>& nums, int s, int e) {
    //     while(s < e) {
    //         swap(nums[s++], nums[e--]);
    //     }
    // }
    
    public:
    void nextPermutation(vector<int>& nums) {
//         int n = nums.size();

//         int index = -1;
//         for(int i = n-2; i >= 0; i--) { // TC: O(n)
//             if(nums[i] < nums[i+1]) {
//                 index = i;
//                 break;
//             }
//         }
        
//         if(index != -1) {
//             for(int i=n-1;i>index;i--){ // TC: O(n)
//                 if(nums[i]>nums[index]){
//                     swap(nums[i],nums[index]);
//                     break;
//                 }
//             }
            
//         }

//         reverse(nums, index+1, n-1); // TC: O(n)
        

        int index=-1;
        int n= nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        
        }
        
         if (index == -1) {
            // If there is no next permutation, reverse the entire vector
            reverse(nums.begin(), nums.end());
            return ;
        }
      
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
              swap(nums[i],nums[index]);
              break;
        }}
        
       reverse(nums.begin()+index+1,nums.end()); 
        
        
        
        
        
        
        
    }
};


// GFG Medium(Next Permutation)
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        
        
    
    int index=-1;
    // finding break point
    for(int i=N-2;i>=0;i--){
        if(arr[i]<arr[i+1]){index=i;
        break;
    }}
    if(index!=-1){
    for(int i=N-1;i>index;i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
    } 
}
 reverse(arr.begin()+index+1,arr.end());
 return arr;
    }
};
