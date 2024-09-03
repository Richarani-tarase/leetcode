class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        for (char x : s) {
            str += to_string(x - 'a' + 1);
        }
        while (k > 0) {
            int temp = 0;
            for (char x : str) {
                temp += x - '0'; 
            }
            str = to_string(temp);  
            k--;
        }
        return stoi(str); 
    }
};