class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded;
        for(auto x:strs){
            encoded +=to_string(x.size());
            encoded +='#';
            encoded+=x;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector <string> decoded;
        int i=0;
        while(i<s.size()){
            string str;
            string j;
            while(s[i]!='#'){
                j+=s[i++];
            }
            i++;
            int count=stoi(j);
            while(count>0){
                str+=s[i];
                count--;
                i++;
            }
            decoded.push_back(str);
        }
        return decoded;
    }
};
