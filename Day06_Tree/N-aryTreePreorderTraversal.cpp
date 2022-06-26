#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans; 
        
        if (!root) return ans;
        stack<Node *> s;
        s.push(root); 
        
        while (!s.empty()) {
            Node* cur = s.top();
            s.pop();
            ans.push_back(cur->val);
            
            for (auto it = rbegin(cur->children); it != rend(cur->children); it++) 
        		s.push(*it);

        }
        
        return ans;  
    }
};