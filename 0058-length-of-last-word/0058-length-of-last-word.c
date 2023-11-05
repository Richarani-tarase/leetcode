int lengthOfLastWord(char * s){
    int l=0,c=0,i;
    l=strlen(s);
    i=l-1;
    while(s[i]==' ')
    i--;
    for(;i>=0;i--)
    {
        if(s[i]==' ')
            break;
        c=c+1;
    }
    return c;
}