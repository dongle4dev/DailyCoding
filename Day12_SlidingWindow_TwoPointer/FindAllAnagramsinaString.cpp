    vector<int> findAnagrams(string s, string p) {
        int n = s.length(), m = p.length();
        
        if (m > n) return vector<int>();
        
        vector<int> ans;
        
        int checked[26] = {0};
        for (auto c : p) checked[c - 'a']++;
        
        for (int i = 0; i < n; ++i) {
            checked[s[i] - 'a']--;
            
            if (i >= m) checked[s[i-m] - 'a']++;
            
            if (i >= m - 1) {
                bool isAnagram = true;
                for (auto k : checked) 
                    if (k != 0) {
                        isAnagram = false;
                        break;
                    }
                if (isAnagram) ans.push_back(i - m + 1);
            }
        }
        
        return ans;
    }
