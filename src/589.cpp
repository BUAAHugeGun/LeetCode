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
    stack<Node*> sta;
    vector<int> preorder(Node* root) {
        vector<int> ret;
        if(root!=NULL)sta.push(root);
        while(!sta.empty())
        {
            Node* x=sta.top();sta.pop();
            ret.push_back(x->val);
            for(int i=x->children.size()-1;i>=0;i--)sta.push(x->children[i]);
        }
        return ret;
    }
};
