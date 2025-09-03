class Solution {
private:
    bool isvow(char ch){
        if(ch =='a' || ch =='e'|| ch=='i' || ch=='o' ||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {//TC O(N) SC: O(1)
        int i=0;
        int j=s.size();
        while(i<j){
            if(isvow(s[i]) && isvow(s[j]))swap(s[i++],s[j--]);
            else if(isvow(s[i]) && (!(isvow(s[j]))))j--;
            else if(!(isvow(s[i])) && isvow(s[j])) i++;
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};