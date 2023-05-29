Input: s = "aaaabbbbcccc"
Output: "abccbaabccba"
Explanation: After steps 1, 2 and 3 of the first iteration, result = "abc"
After steps 4, 5 and 6 of the first iteration, result = "abccba"
First iteration is done. Now s = "aabbcc" and we go back to step 1
After steps 1, 2 and 3 of the second iteration, result = "abccbaabc"
After steps 4, 5 and 6 of the second iteration, result = "abccbaabccba"



class Solution {
public:
    string sortString(string s) {
        int ans[26]={0};
        int n=s.length();

        for(int i=0;i<n;i++){
            ans[s[i]-'a']++;
        }
        string res="";
        while(n){
            for(int i=0;i<26;i++){
                if(ans[i]>0){
                    res+=i+'a';
                    ans[i]--;
                    n--;
                }
            }
            for(int j=25;j>=0;j--){
                if(ans[j]>0){
                    res+=j+'a';;
                    ans[j]--;
                    n--;
                }
            }
        }
        return res;
    }
};
