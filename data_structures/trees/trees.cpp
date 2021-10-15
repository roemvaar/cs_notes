#include  <iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BTS {
public:
    TreeNode* compute(vector<int>& nums, int beg, int end) {
        if(beg > end) {
            return nullptr;
        }
        
        if(beg == end) {
            TreeNode* node = new TreeNode(nums[beg]);
            return node;
        }
        
        int mid = beg + ((end - beg) / 2);
        
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = compute(nums, beg, mid - 1);
        node->right = compute(nums, mid + 1, end);
        
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return compute(nums, 0, nums.size() - 1);
    }
};

int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    
    BTS binaryST;
    
    binaryST.sortedArrayToBST(nums);
      
    return 0;
}
 
