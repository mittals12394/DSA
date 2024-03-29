 int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
         bool isPositive = (dividend<0 == divisor<0);
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int ans = 0;
        while(a>=b){
            int count = 0;
            while(a > b<<(count+1)){
                count++;
            }
            ans+= (1<<count);
            a = a - (b<<count);
        }
        if(ans == (1<<31) and isPositive)  
            return INT_MAX;
        return isPositive ? ans : -ans;
        
    }