class Solution {
public:
    int countDigitOne(int n) {
        int ans = 0;
        if(n <= 0) return 0;
        if(n <= 9) return 1;
        
        unordered_map<int, int> mp;
        mp[9] = 1;
        for(int i = 9; i <= (INT_MAX - 9) / 10; i = i * 10 + 9){
            mp[i*10 + 9] = mp[i] * 10 + (i + 1); // mp[99], mp[999], mp[9999], ... ...
        }
        
        int nn = n, divisor = 1;
        while(nn / 10){
            nn /= 10;
            divisor *= 10;
        }
        ans += (n / divisor) *  mp[divisor - 1]; 
        ans += (n / divisor > 1) ? divisor : 0; 
        ans += (n / divisor == 1) ? n % divisor + 1 : 0;
        ans += countDigitOne(n % divisor);

        return  ans;  
    }
};
