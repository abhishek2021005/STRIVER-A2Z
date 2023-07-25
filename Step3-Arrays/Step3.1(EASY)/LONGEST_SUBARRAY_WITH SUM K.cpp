// #GFG (MEDIUM)
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<long long, int> presum;
        long long sum=0;
        int maxlen=0;
        for(int i=0; i<N;i++){
            sum+=A[i];
            if(sum==K){
            maxlen=max(maxlen, i+1);
            }
            long long rem=sum-K;
            if(presum.find(rem)!=presum.end()){
                maxlen=max(maxlen,i-presum[rem]);
            }
            if(presum.find(sum)==presum.end()){
  presum[sum]=i;            }
          
        
        }
        
        return maxlen;






// int count =0;
// for(int i=0; i<N; i++){
//     int sum=0;
//     for(int j=i; j<N; j++){
//         sum+=A[j];
//         if(sum==K)count=max(count,j-i+1);
        
//     }
// }return count;
        
        
        
    //     int left=0; int right =0;
    //     int count=0;
    //     int sum=A[0];
    //     while(right<N){
           
    //         while(sum>K&&left<=right){
            
    //         sum-=A[left];
    //             left++;
    //         }
            
    //          if(sum==K){
    //             count=max(count,right-left+1);
    //         }
    //         right++;
    //         if(right<N)sum+=A[right];
    //     }
    //  return count;   
    } 

};

#LEETCODE (MEDIUM) Q560 (SUBARRAY SUM EQUALS K)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m; int temp = 0, count = 0; 
        m[0] = 1; 
        for(int i=0; i<nums.size(); i++){
            temp += nums[i]; 
            if(m.find(temp-k) != m.end()) count += m[temp-k]; 
            m[temp]++; 
        }
        return count; 

    }
};
