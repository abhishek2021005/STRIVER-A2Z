//#LEETCODE Q509(EASY)


class Solution {
//     private:
  
//     int fibb(vector<int>&dp,int n){
//             if(n<=1) return n;
//         if(dp[n]!=-1)return dp[n];
        
//         return dp[n]=fibb(dp,n-1) +fibb(dp,n-2);
//     }
    
    
    
//     private: 
//     int fibb(vector<int>&dp,int n){
//         dp[0]=0;dp[1]=1;
//         for(int i=2;i<=n;i++){
//             dp[i]=dp[i-1]+dp[i-2];
            
//         }
//         int a=dp[n];
//         return a;
//     }
public:

    
    // general recursion approach 
    
    // int fib(int n) {
    //     if(n<=1)return n;
    //     return fib(n-1)+fib(n-2);
    // }
    
    
    // memoization approach 
    
    
    // int fib(int n) {
    //       vector<int>dp(n+1,-1);
    // int a=fibb(dp,n);
    //     return a;
    // }
    
    
    // tabulation approach
    // int fib(int n){
    //      vector<int>dp(n+2,-1);
    //     return fibb(dp,n);
    // }
    
    
    //space optimization approach
    
    int fib (int n) {
        if(n<=1) return n;
        int dp0=0;
        int dp1=1;
        int next=1;
        for(int i=2;i<=n;i++){
           next= dp0+dp1;
            dp0=dp1;
            dp1=next;
            
            
        }
             return next;
    }
    
    
};


//GFG SOLUTION (EASY)- Nth fibonacci number

class Solution {
  public:
  const unsigned int a=1e9+7;
    int nthFibonacci(int n){
        // code here
        if(n<=1)return n;
        int n1=0;
        int n2=1;
        int next=1;
        for(int i=2;i<=n;i++){
            next=(n1+n2)%a;
            n1=n2; 
            n2=next;
        }
        return next;
    }
};
