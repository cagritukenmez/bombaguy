class Solution {
public:
    int climbStairs(int n) {
        int t=n%2;
        double long res = 0;
        for(int c=n/2;c>=0;c--){
            res+=factorial(t+c)/(factorial(t)*factorial(c));
            t+=2;
        }
        return res;
    }
    double long  factorial(int n){
        if (n == 0)
             return 1;
         return n * factorial(n - 1);
    }
};