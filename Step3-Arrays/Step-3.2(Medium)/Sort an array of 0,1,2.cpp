#LEETCODE(MEDIUM) Q75
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int left=0,mid=0, right=nums.size()-1;
        while(mid<=right){
            if(nums[mid]==0){
                swap(nums[mid],nums[left]);
                left++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[right],nums[mid]);
                right--;
            }
        }
    }
};




// GFG EASY
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        
        // sort(a,a+n);
        
        
        
        // int z=0, o=0,t=0;
        // for(int i=0;i<n;i++){
        //     if(a[i]==0)z++;
        //     else if(a[i]==1)o++;
        //     else t++;
        // }
        // for(int i=0; i<n; i++){
        //     if(i<z)a[i]=0;
        //     else if(i<z+o)a[i]=1;
        //     else a[i]=2;
        // }
        
        
        int left=0,mid=0,right=n-1;
        while(mid<=right){
            if(a[mid]==0){
                swap(a[left],a[mid]);
                left++;
                mid++;
            }
          else  if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid],a[right]);
                right--;
            }
        }
        
    }
    
};
