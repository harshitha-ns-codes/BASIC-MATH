class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;


        long long revNum = 0;
        int original = x;

        while(x > 0){
            int lastdigit = x % 10;
            revNum = revNum*10 + lastdigit;
            x = x/10;

        }
        return (revNum == original);

        
    }
};