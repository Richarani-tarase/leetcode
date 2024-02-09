class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
                int flag=0;
            for(int j=0;j<image.size();j++)
            {
                if(image[i][j]==0)
                {
                    flag=1;
                   image[i][j]=1;
                }
                else{
                     flag=1;
                    image[i][j]=0;
                }
            }
            if(flag==1)
            {
                reverse(image[i].begin(),image[i].end());  
            }
        }
        return image;
    }
};