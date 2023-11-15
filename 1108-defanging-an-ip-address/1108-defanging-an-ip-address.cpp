class Solution {
public:
    string defangIPaddr(string address) {
        string ch;
        int n=address.size(),i;
        for(i=0;i<n;i++)
        {
            if(address[i]=='.')
            {
                ch+="[.]";
            }
            else
            ch+=address[i];
        }
        return ch;
    }
};