class Solution {
private:
    int beauty(string s, int k){
        unordered_map<char, int> cnt;
        int n = s.size() , res = 0;
        int i = 0, j = 0;
        while(j < n){
            int mini = INT_MAX, maxi = INT_MIN;
            cnt[s[j]]++;
            if(j-i+1 < k)   j++;
            else if(j-i+1 == k){
                
                for(auto it: cnt){
                    maxi = max(it.second, maxi);
                    mini = min(it.second, mini);
                }
                res += maxi - mini;
                if(cnt[s[i]] > 1){
                    cnt[s[i]]--;
                }
                else{
                    cnt.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return res;
    }
public:
    int beautySum(string s) {
        int n = s.size();
        int count = 0;
        if(n <= 2)  return 0;
        for(int k = 3; k <= n; k++){
            count += beauty(s, k);
        }
        return count;
    }
};