    string decodeString(string &s, int &i) {
        string ans = "";
        while (i < s.length() && s[i] != ']') {
            if (!isdigit(s[i])) {
                ans += s[i++];
            }
            else {
                int n = 0;
                while (i < s.length() && isdigit(s[i])) {
                    n = (n * 10) + s[i++] - '0';
                    //i++;
                }
                //[
                i++;
                string temp = decodeString(s, i);
                //]
                i++;
                
                while (n > 0) {
                    ans += temp;
                    n--;
                }
            }
        }
        
        return ans;
    }
    
    string decodeString(string s) {
        int i = 0; 
        return decodeString(s, i);
    }
