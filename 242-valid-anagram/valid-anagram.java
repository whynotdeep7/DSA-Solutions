class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;  // lengths must match
        
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        
        return Arrays.equals(sArr, tArr);  // check if sorted arrays are same
    }
}