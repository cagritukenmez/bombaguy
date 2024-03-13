class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return n;
        int sum= n*(n+1)/2;
        int sum1=0;
        for(int i = 1;i <=n;i++ ){
            sum1+=i;
            if(sum1*2+i+1 == sum){
                return i+1;
            }
        }
        return -1;
    }
};
