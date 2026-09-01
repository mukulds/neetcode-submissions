class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    for (int i=0;i<9;i++) {
        int hash[10]={0};
        for (int j=0;j<9;j++) {
            if (board[i][j] == '.') {
                continue;
            }
            else if (hash[board[i][j]-'0']==1) {
                return false;
            }
            else {
                hash[board[i][j]-'0']=1;
            }
        }
    }
    for (int i=0;i<9;i++) {
        int hash[10]={0};
        for (int j=0;j<9;j++) {
            if (board[j][i] == '.') {
                continue;
            }
            else if (hash[board[j][i]-'0']==1) {
                return false;
            }
            else {
                hash[board[j][i]-'0']=1;
            }
        }
    }
    for (int i=0;i<7;i+=3) {
        for (int j=0;j<7;j+=3) {
            int hash[10]={0};
            for (int k=i;k<i+3;k++) {
                for (int l=j;l<j+3;l++) {
                    if (board[k][l] == '.') {
                        continue;
                    }
                    else if (hash[board[k][l]-'0']==1) {
                        return false;
                    }
                    else {
                        hash[board[k][l]-'0']=1;
                    }
                }
            }
        }
    }
    return true;
}
};
