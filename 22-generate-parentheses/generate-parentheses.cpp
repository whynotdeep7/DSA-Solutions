class Solution {
private:
    void helper(string s,int o,int c,vector<string>& res,int n){
        //o->opening,c->closing
        if(o+c==2*n && o==c){//if no. of open and colsing bracket are same and sum equal to 2*n then add to res
            res.push_back(s);
            return;
        }
        if(o<n){//shuru mei string khali thi 
            helper(s+'(',o+1,c,res,n);// then we add opening bracket..to yeh DFS follow krega phle left branch puri rec tree ki
        }
        if(c<o){
            helper(s+')',o,c+1,res,n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper("",0,0,res,n);
        return res;
    }
};