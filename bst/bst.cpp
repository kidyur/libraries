#include <bst.hpp>
#include <stack>


Node* find(const int32_t value) const noexcept 
{
    Node* head = root;
    while (head != nullptr && head->value != value) {
        if (value > head->value) {
            head = head->right;
        } else if (value < head->value) {
            head = head->left;
        } 
    } 
    return head;
}


// Does nothing if the value is already in the BST
void insert(const int32_t value) noexcept 
{
    Node* head = root; 
    while (head->value != value) {
        if (value > head->value) {
            if (head->right == nullptr) {
                head->right = new Node(value);
            }
            head = head->right;
        } else if (value < head->value) {
            if (head->left == nullptr) {
                head->left = new Node(value);
            }
            head = head->left;
        } 
    } 
}


void remove(const int32_t value) noexcept 
{

}


int64_t size() const noexcept 
{
    int64_t sz = 0;
    std::stack<Node*> st = {root};
    while (st.empty() == false) {
        Node* node = st.top();
        sz += 1;
        st.pop();
        if (node->left)
            st.push(node->left);
        if (node->right)
            st.push(node->right);
    }
    return sz;
}