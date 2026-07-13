class Solution {
    public:
    bool isValid(string s) {
        stack <char> stac;
        for (auto x : s){
            if((x=='(')||(x=='{')||(x=='['))
                stac.push(x);
            else if(x==')'){
                if(stac.empty()){
                    return false;
                }
                if (stac.top() == '(')
                    stac.pop();
                else
                    return false;
            }
            else if(x=='}'){
                if(stac.empty()){
                    return false;
                }
                if (stac.top() == '{')
                    stac.pop();
                else
                    return false;
            }
            else if(x==']'){
                if(stac.empty()){
                    return false;
                }
                if (stac.top() == '[')
                    stac.pop();
                else
                    return false;
            }
        }
        if(stac.empty())
            return true;
        else 
            return false;
    }
};
