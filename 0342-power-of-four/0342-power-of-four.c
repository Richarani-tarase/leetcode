bool isPowerOfFour(int n){
    long int ans=1,i;
    for(i=0;i<=30;i++)
    {
        ans=pow(4,i);
        if(ans==n)
        return true;
    }
    return false;
}