//#LEETCODE Problem Q70(EASY) (VVI) 

class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)return 1;
        // return climbStairs(n-1)+climbStairs(n-2);
        
        int n1=1;
        int n2=1;
        int next=2;
        for(int i=2;i<=n;i++){
            next=n1+n2;
            n1=n2;
            n2=next;
        }
        return next;
    }
};
