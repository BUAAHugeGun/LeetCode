/*
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
*/

class Solution {
public:
    vector<int> ret;
    void dfs(Node* k)
    {
        if(k==NULL)return;
        for(auto x:k->children)dfs(x);
        ret.push_back(k->val);
    }
    vector<int> postorder(Node* root) {
        dfs(root);
        return ret;
    }
};
