class Solution {
    public boolean isPalindrome(String s) {
        int l=0;
        int r=s.length()-1;
        s=s.toLowerCase();

        while(l<r){
            while(l<r && !Character.isLetterOrDigit(s.charAt(l))){
                l++;
            }
            while(l<r && !Character.isLetterOrDigit(s.charAt(r))){
                r--;
            }

            if(s.charAt(l) != s.charAt(r)){
                return false;
            }

            l++;
            r--;

        }
        return true;
    }
}