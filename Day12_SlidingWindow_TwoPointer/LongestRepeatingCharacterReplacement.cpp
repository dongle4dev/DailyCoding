int characterReplacement(string s, int k) {
        int left = 0, right = 0, maxLetter = 0, n = s.length();
        
        int checked[26] = {0};
        
        while (right < n) {
            checked[s[right] - 'A']++;
            maxLetter = max(maxLetter, checked[s[right] - 'A']);
            
            if (right - left - maxLetter + 1 > k) { //right, left start at 0
                checked[s[left] - 'A']--;
                left++;
            }
            right++;
        }
        
        return right - left; //maxLetter + k
}
