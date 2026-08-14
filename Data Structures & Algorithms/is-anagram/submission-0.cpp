class Solution {
public:
    bool isAnagram(string s, string t) {
        int a1[26]={0};
        for(auto x:s){
            a1[x-'a']+=1;
        }
        int a2[26]={0};
        for(auto x:t){
            a2[x-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(a1[i]==a2[i]){
                continue;
            }
            else 
                return false;    
        }
        return true;
    }
};
