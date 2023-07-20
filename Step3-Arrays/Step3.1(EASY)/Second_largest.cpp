#GFG(EASY)


//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = -1;
	    int seclargest = -1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest)
	        {seclargest=largest;largest=arr[i];}
	        else if(arr[i]>seclargest && arr[i]!=largest)seclargest=arr[i];
	    }return seclargest;
	}
};
