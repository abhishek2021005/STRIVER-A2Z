//LEETCODE Q542 (MEDIUM) 
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
         vector<vector<int>>dist(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(mat[i][j]==0){
                        vis[i][j]=1;
                        dist[i][j]=0;
                        q.push({{i,j},0});
                    }   
                else vis[i][j]=0;
                
            }
        }
        
        while(!q.empty()){
         int row=q.front().first.first;
         int col= q.front().first.second;
         int step=q.front().second;
    
             dist[row][col]=step;
            q.pop();
            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
               int r=row+delrow[i];
                int c=col+delcol[i];
                if(r>=0 && r<n && c>=0 && c<m && vis[r][c]==0){
                    vis[r][c]=1;
                    q.push({{r,c},step+1});
                    
                }
            }
            
            
        }
        
        
        return dist;
        
    }
};

#GFG (MEDIUM)Distance of nearest cell having 1
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    
	   int n=grid.size();
	   int m=grid[0].size();
	   vector<vector<int>>vis(n,vector<int>(m,0));
	   vector<vector<int>>dist(n,vector<int>(m,0));
	   queue<pair<pair<int,int>,int>>q;
	   for(int i=0;i<n;i++){
	       for(int j=0;j<m;j++){
	           if(grid[i][j]==1){
	               q.push({{i,j},0});
	               vis[i][j]=1;
	           }
	           else vis[i][j]=0;
	       }
	   }
	   
	   while(!q.empty()){
	       int row=q.front().first.first;
	       int col=q.front().first.second;
	       int steps=q.front().second;
	       dist[row][col]=steps;
	       q.pop();
	       int delrow[]={-1,0,1,0};
	       int delcol[]={0,1,0,-1};
	       for(int i=0;i<4;i++){
	           int r=row+delrow[i];
	           int c=col+delcol[i];
	           if(r>=0 && r<n && c>=0 && c<m && vis[r][c]==0){
	           //if(!vis[r][c]){
	           vis[r][c]=1;
	           q.push({{r,c},steps+1});
	           
	           }
	           
	       }
	   }
	   return dist;
	}
};
