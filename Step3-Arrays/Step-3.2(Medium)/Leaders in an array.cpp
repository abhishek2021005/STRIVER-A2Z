    #GFG PRACTICE (EASY)

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        
           vector <int>b;

int max=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=max){
                max=a[i];
                b.push_back(max);

        }
}
reverse(b.begin(),b.end());
return b;
        
        
    }
};
