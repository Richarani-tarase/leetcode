// class Solution {
// public:
//     bool isSameAfterReversals(int num) {
//         int temp=num,rev=0,rem=0;
//         int a=2;
//         while(a>0)
//         {    
//             while(temp!='\0')
//             {
//                 rem=temp%10;
//                 rev=(rev*10)+rem;
//                 temp=temp/10;
//             }
//             temp=rev;
//              rev=0,rem=0;
//             a--;
//         }   
//         return (num==temp);
//     }
// };
class Solution {
public:
int reverse(int num){
    int ans=0;
    while(num!=0){
        int rem=num%10;
        ans=(ans*10)+rem;
        num=num/10;
    }
    return ans;
}
    bool isSameAfterReversals(int num) {
       int ans=reverse(num);
       ans=reverse(ans);
       return (num==ans); 
    }
};