class Solution {
public:
    int trailingZeroes(int n) {
        int nn1=n;
        int nn2=n;
        long long int sum1=0,sum2=0;
        while(nn1!=0&&nn1!=1){
            int rem=nn1/2;
            sum1=sum1+rem;
            nn1=nn1/2;
        }

         while(nn2!=0&&nn2!=1){
            int rem=nn2/5;
            sum2=sum2+rem;
            nn2=nn2/5;
        }
        int mini=min(sum1,sum2);
        return mini;

    }
};