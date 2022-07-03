    bool backspaceCompare(string s, string t) {
//         stack<char> resS, resT;
        
//         for (int i = 0; i < s.length(); ++i) {
//             if (s[i] != '#') {
//                 resS.push(s[i]);
//             }
//             else if (!resS.empty())
//                 resS.pop();
//         }
//         for (int i = 0; i < t.length(); ++i) {
//             if (t[i] != '#') {
//                 resT.push(t[i]);
//             }
//             else if (!resT.empty()) 
//                 resT.pop();
//         }
        
//         return resS == resT;
        int m = 0, n = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '#') {
                m--;
                m = max(0, m);
            }
            else {
                s[m] = s[i];
                m++;
            }
        }
        for (int i = 0; i < t.length(); ++i) {
            if (t[i] == '#') {
                n--;
                n = max(0, n);
            }
            else {
                t[n] = t[i];
                n++;
            }
        }
        
        if (m != n) return false;
        
        for (int i = 0; i < m; ++i) {
            if (s[i] != t[i]) return false;
        }
        
        return true;
    }
