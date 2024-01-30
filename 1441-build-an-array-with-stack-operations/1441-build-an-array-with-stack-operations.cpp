class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int j=0;
        int m=target.size()-1;
        // for(int i=1;i<=target[m];i++)
        // {
        //     if(target[j]==i)
        //     {
        //         v.push_back("Push");
        //         j++;
        //     }
        //     else
        //     {
        //         v.push_back("Push");
        //         v.push_back("Pop");
        //     }
        // }
        stack<int>s;
        for(int i=1;i<=target[m];i++)
        {
            s.push(i);
            if(s.top()==target[j])
            {
                v.push_back("Push");
                j++;
            }
            else
            {
                v.push_back("Push");
                s.pop();
                v.push_back("Pop");
            }
        }
        return v;
    }
};