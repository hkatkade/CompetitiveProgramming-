int gsum = 0;
void help(Tree* root, int val) {
    if (!root) return;
    val = val * 10 + root->val;
    if (!root->left && !root->right) {
        gsum += val;
    }
    help(root->left, val);
    help(root->right, val);
}
int solve(Tree* root) {
    help(root, 0);
    return gsum;
}