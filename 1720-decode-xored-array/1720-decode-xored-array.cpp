class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        encoded.resize(n+1);
        int temp=encoded[0];
        encoded[0]=first;
        int temp2=encoded[1];
        encoded[1]=encoded[0]^temp;
        temp=temp2;
        for(int i=2;i<encoded.size();i++)
        {
            temp2=encoded[i];
            encoded[i]=encoded[i-1]^temp;
            temp=temp2;
        }
        return encoded;
    }
};