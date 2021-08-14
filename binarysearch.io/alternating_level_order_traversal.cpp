vector<int> solve(Tree* root) {
    if (!root) return {};
    queue<Tree*> q{{root}};
    vector<int> ans;
    bool L2R = true;
    while (!q.empty()) {
        int pos = ans.size(), sz = q.size();
        for (int i = 0; i < sz; i++) {
            auto t = q.front();
            q.pop();
            ans.push_back(t->val);
            if (t->left) q.push(t->left);
            if (t->right) q.push(t->right);
        }
        if (!L2R) reverse(ans.begin() + pos, ans.end());
        L2R = !L2R;
    }
    return ans;
}