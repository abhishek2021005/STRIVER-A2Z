#LEETCODE MEDIUM Q2149

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ab(n,0);
        int k=0,l=1;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){ab[k]=nums[i];k+=2;
        }
          else  if(nums[i]<0){ab[l]=nums[i];l+=2;
        }
        
    }return ab;
    }
};

#GFG EASY (Alternate positive and negative numbers)

//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector <int>pos,neg;
	   for(int i=0;i<n;i++ ){
	       if(arr[i]>=0)pos.push_back(arr[i]);
	       else neg.push_back(arr[i]);
	   }
	   
	   
	   
	   
	   if(pos.size()<neg.size()){
	       for(int i=0;i<pos.size();i++){
	           arr[i*2]=pos[i];
	           arr[i*2+1]=neg[i];
	           
	       }
	       
	       
	       int index=2*pos.size();
	       for(int i=pos.size();i<neg.size();i++){
	           arr[index]=neg[i];
	           index++;
	       }
	   }else {
	        for(int i=0;i<neg.size();i++){
	           arr[i*2]=pos[i];
	           arr[i*2+1]=neg[i];
	           
	       }
	       int index=2*neg.size();
	       for(int i=neg.size();i<pos.size();i++){
	           arr[index]=pos[i];
	           index++;
	   }
	   
	}}
};
