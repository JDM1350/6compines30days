class Solution {

    private:
    int gcd(int a, int b){
        if(!b) return a;
        return gcd(b,a%b);
    }

    int lcm(long long  a, long long b){
        long long temp=(a/gcd(a,b))*b;
        return temp>INT_MAX ? INT_MAX:temp;
    }
public:
    int minimizeSet(int divisor1, int divisor2, int m1, int m2) {


        int l=1,r=INT_MAX , LCM=lcm(divisor1,divisor2);

        while(l<=r){
            int mid=l+(r-l)/2;

            int a=mid/divisor1, b=mid/divisor2;

            if(m1<=mid-a && m2<=mid-b && m1+m2<=(mid-(mid/LCM))){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;

        
    }
};