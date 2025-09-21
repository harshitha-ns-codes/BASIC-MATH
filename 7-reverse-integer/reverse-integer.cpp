class Solution {
public:
    int reverse(int n) {
        long long revNum = 0;
        long long nn = n;              // use long long to avoid INT_MIN issue
        int sign = (nn < 0) ? -1 : 1;
        nn = (nn < 0) ? -nn : nn;      // safe absolute value

        while(nn > 0) {
            int lastdigit = nn % 10;
            revNum = revNum * 10 + lastdigit;
            nn = nn / 10;
        }

        revNum *= sign;

        // Check 32-bit integer overflow
        if(revNum > INT_MAX || revNum < INT_MIN)
            return 0;

        return (int)revNum;
    }
};
