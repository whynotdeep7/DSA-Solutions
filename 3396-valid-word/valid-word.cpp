class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) {
            return false;//min num check
        }
        bool has_vowel = false;//vowel count
        bool has_consonant = false;// consonant count
        for (auto c : word) {
            if (isalpha(c)) {
                c = tolower(c);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    has_vowel = true;
                } else {
                    has_consonant = true;
                }
            } else if (!isdigit(c)) {
                return false;
            }
        }
        return has_vowel && has_consonant;
    }
};