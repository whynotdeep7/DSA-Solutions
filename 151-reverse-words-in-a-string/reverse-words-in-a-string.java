class Solution {
    public String reverseWords(String s) {
        String[] words=s.trim().split("\\s+");
        // String reversedArr= words.reverse(); cannot use this isnt a thing

        int left=0, right=words.length-1;
        while(left<right){
            String temp=words[left];
            words[left]=words[right];
            words[right]=temp;

            left++;
            right--;
        }
        String res= String.join(" ",words);
        return res;  
    }
}