class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        for(auto x:s){
            arr[x-'a']+=1;
        }
        for(auto x:t){
            arr[x-'a']-=1;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};
