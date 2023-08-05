#LEETCODE Q733 (EASY)
class Solution {
    private:
    void dfs(int sr,int sc,vector<vector<int>>& image,vector<vector<int>>& ans,int color,int inColor){
        int n=image.size();
        int m=image[0].size();
           int delrow[]={0,1,0,-1};
            int delcol[]={1,0,-1,0};
        ans[sr][sc]=color;
        for(int i=0;i<4;i++){
            int row=sr+delrow[i];
            int col=sc+delcol[i];
            if(row>=0 && row<n && col>=0 && col<m && image[row][col]==inColor && ans[row][col]!=color){
                dfs(row,col,image,ans,color,inColor);
            }
        }
          
    }    
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int inColor=image[sr][sc];
        // if(inColor==color)return ans;
        
        dfs(sr,sc,image,ans,color,inColor);
        return ans;
        
    }
};


// GFG MEDIUM(FLOOD FILL ALGORITHM)
class Solution {
    private:
    void dfs(vector<vector<int>> & image,int sr,int sc,int ini, int newColor){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || 
        image[sr][sc]==newColor || image[sr][sc]!=ini) return;
         image[sr][sc]=newColor;
        dfs(image,sr+1,sc,ini,newColor);
        dfs(image,sr,sc+1,ini,newColor);
        dfs(image,sr-1,sc,ini,newColor);
        dfs(image,sr,sc-1,ini,newColor);

        

       
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int ini=image[sr][sc];
        dfs(image,sr,sc,ini,newColor);
        return image;
    }
};
