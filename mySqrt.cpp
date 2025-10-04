class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
         for(int i=1;i<=x/2;i++){
            //if(i*i == x) return i;
            if((i <=x/i)&& (x/(i+1))<(i+1)) return i;
         }
         return 0;
    }
};
