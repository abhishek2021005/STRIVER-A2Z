// #LEETCODE EASY(Q1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int>mp; 
       
       
        for(int i=0; i<nums.size();i++){
            int a= nums[i];
            int req= target-a;
if(mp.find(req)!=mp.end()){
    return {mp[req],i};
}
        mp[a]=i;}
        return{-1,-1};
        
    }
};
