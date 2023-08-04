#LEETCODE Q128(MEDIUM)

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
        
        
//         set<int> st;
//         for(int num: nums){
//                 st.insert(num);
//         }
        
//         int longest=0;
//         for(int num: nums){
//             if(!st.count(num-1)){
//                 int cnt=1;
//                 int ele=num;
                
//                 while(st.count(ele+1)!=0){
//                     cnt++;
//                     ele=ele+1;
//                 }
//                 longest=max(cnt,longest);
//             }
//         }
//         return longest;
//     }
// };



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> st;
        for( int num : nums){
            st.insert(num);
        }
             int longest =0;
        for( int num : nums){
            if(!st.count(num-1)){
                int cnt=1;
                int ele = num;
                while(st.count(ele+1)){
                    cnt+=1;
                    ele+=1;
                }
                longest=max(cnt,longest);
            }
        }

        return longest;
    }
};


#GFG (MEDIUM)

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int> st;
      for(int i=0;i<N;i++){
          st.insert(arr[i]);
      }
      
      int longest=0;
      for(int i=0;i<N;i++){
          int ele=arr[0];
          int cnt=1;
          if(!st.count(arr[i]-1)){
              cnt = 1;
              ele = arr[i];
          }
          while(st.count(ele+1)){
              cnt+=1;
              ele+=1;
          }
        longest=max(cnt,longest);  
      }
      
      return longest;
      
    }
};
