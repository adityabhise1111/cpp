class Solution {
  private:
  
    bool jau(int x,int y,vector<vector<int>>mat,vector<vector<int>>visited,int n){
        if((x>=0 && x<n) && ( visited[x][y] == 0 ) && ( y >= 0 && y < n ) && ( mat[x][y]==1)){
            return 1;
        }
        
        
        return 0;
        
    }
  
    void solve(vector<vector<int>>& mat,int x,int y,vector<string>&ans,string path,vector<vector<int>>visited,int n){
        
        //base case
        if( x==n-1 && y==n-1){
            ans.push_back(path);
            return ;
        }
        
        visited[x][y]=1;
        
        //down
        int newx=x+1;
        int newy=y;
        
        if(jau(newx,newy,mat,visited,n)){
            path.push_back('D');
            solve(mat,newx,newy,ans,path,visited,n);
            
            path.pop_back();
            
        }
        
        //left
        newx=x;
        newy=y-1;
        if(jau(newx,newy,mat,visited,n)){
            path.push_back('L');
            solve(mat,newx,newy,ans,path,visited,n);
            
            path.pop_back();
            
        }
        
        //up
        newx=x-1;
        newy=y;
        if(jau(newx,newy,mat,visited,n)){
            path.push_back('U');
            solve(mat,newx,newy,ans,path,visited,n);
            
            path.pop_back();
            
        }
        
        //right
        newx=x;
        newy=y+1;
        if(jau(newx,newy,mat,visited,n)){
            path.push_back('R');
            solve(mat,newx,newy,ans,path,visited,n);
            
            path.pop_back();
            
        }
        
        visited[x][y]=0;
        
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        if(mat[0][0]==0)return ans;
        
        
        string path="";
        
        int srcx=0;
        int srcy=0;
        
        int n= mat.size();
         
        vector <vector<int>> visited=mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        solve(mat,srcx,srcy,ans,path,visited,n);
        sort(ans.begin(),ans.end());
        
        return ans;
        
        // code here
    }
};