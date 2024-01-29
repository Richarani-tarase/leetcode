int diagonalSum(int** mat, int* matSize, int* matColSize){
    int sum=0;
    int n=matColSize,m=matSize;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j || j==m-1-i)
            {
                sum+=mat[i][j];
            }
            else
                continue;
        }
    }
    return sum;
}