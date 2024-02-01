class Solution {
public:
    int kthGrammar(int n, int k) {
        // n == 1 -> 0
        // n == 2-> 0 1
        // n == 3 ->0 1 1 0
        // n == 4 ->0 1 1 0 1 0 0 1
        if(n == 1 && k == 1)    return 0;
        int mid = pow(2, n-2);
        if(k<= mid){
            return kthGrammar(n-1, k);
        }
        return !(kthGrammar(n-1, k-mid));
    }
};