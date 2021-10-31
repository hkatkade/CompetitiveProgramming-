int ans;
bool order(Tree* root) {
    if (root == NULL) return true;
    bool l = order(root->left);
    bool r = order(root->right);
    if ((l == true && r == true) && (root->left == NULL || root->left->val == root->val) &&
        (root->right == NULL || root->right->val == root->val)) {
        ans++;
        return true;
    } else
        return false;
}
int solve(Tree* root) {
    ans = 0;
    order(root);
    return ans;
}