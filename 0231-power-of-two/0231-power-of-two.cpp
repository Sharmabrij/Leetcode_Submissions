class Solution {
public:
    bool isPowerOfTwo(int n) {
       // int result;
        if(n==1) return true;
        if(n<2) return false;
        while(n>1){
            if (n%2!=0) return false;
            n=n/2;
            
            
        }
        
    if(n==1) return true;
    return false;
    }
};