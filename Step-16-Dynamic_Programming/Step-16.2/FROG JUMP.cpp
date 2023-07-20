// #CODESTUDIO PROBLEM(EASY)
#include <bits/stdc++.h> 

//#MEMOIZATION 

// int minEN(int n,vector<int> &heights,vector<int>&dp){
//       int second=INT_MAX;
//     if(n==0)return 0;
//     if(dp[n]!=-1)return dp[n];
//     int first=minEN(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
//     if(n>1)
//      second=minEN(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
//     dp[n] =min(first,second);
// }
// int frogJump(int n, vector<int> &heights)
// {  vector<int>dp(n,-1);
//     int a= minEN(n-1,heights,dp);
//     return a;
      
//     // Write your code here.
// }


// #TABULATION APPROACH

// int frogJump(int n, vector<int> &heights)
// {  vector<int>dp(n,-1);
//     // int a= minEN(n-1,heights,dp);
//     dp[0]=0;
//     for(int i=1;i<n;i++){
//         int second=INT_MAX;
//         int first=dp[i-1]+abs(heights[i]-heights[i-1]);
//         if(i>1)second=dp[i-2]+abs(heights[i]-heights[i-2]);
//         dp[i]=min(first,second);
// }
//     return dp[n-1];
      

//     // Write your code here.
// }


// #Space Optimization
int frogJump(int n, vector<int> &heights)
{
    // int a= minEN(n-1,heights,dp);
int prev=0;
int prev2=0;
    for(int i=1;i<n;i++){
        int second=INT_MAX;
        int first=prev+abs(heights[i]-heights[i-1]);
        if(i>1)second=prev2+abs(heights[i]-heights[i-2]);
       int cur=min(first,second);
          prev2=prev;
          prev=cur;
      
}
    return prev;
      

    // Write your code here.
}
