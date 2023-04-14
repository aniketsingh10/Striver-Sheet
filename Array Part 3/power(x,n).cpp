class Solution {
public:
    double solver(double x, int n){
        if(n==0){
            return 1;
        }
        double res=myPow(x,n/2);
        if(n&1){
            return x*res*res;
        }
        else{
            return res*res;
        }
    }
    double myPow(double x, int n) {
        double ans=solver(x,abs(n));
        if(n<0){
            return 1/ans;
        }
        return ans;

    }
};