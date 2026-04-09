class Solution {
public:
    // Hàm chính đề bài cho
    TreeNode* sortedListToBST(ListNode* head) {
        // Gọi hàm phụ xử lý từ đầu đến cuối (nullptr)
        return buildBST(head, nullptr);
    }
    
    // --- HÀM PHỤ VỪA VIẾT Ở TRÊN ---
    TreeNode* buildBST(ListNode* head, ListNode* tail) {
        // 1. Hết danh sách -> Trả về Null
        if (head == tail) {
            return nullptr;
        }
        
        // 2. Tìm giữa bằng Rùa & Thỏ
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != tail && fast->next != tail) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // 3. Lấy thằng giữa làm Gốc
        TreeNode* root = new TreeNode(slow->val);
        
        // 4. Đệ quy chia đôi:
        // - Cây trái lấy phần từ đầu đến slow
        root->left = buildBST(head, slow);
        
        // - Cây phải lấy phần từ sau slow đến cuối
        root->right = buildBST(slow->next, tail);
        
        return root;
    }
};