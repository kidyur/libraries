#ifndef BST_HPP 
#define BST_HPP

#include <cstdint>

class BST {
    struct Node {
        Node() = default;
        Node(const int32_t v) : value(v) { };

        Node* left = nullptr;
        Node* right = nullptr;
        int32_t value = 0;        
    }
public: 
    Node* find() const noexcept;
    void insert() noexcept;
    void remove() noexcept;
    int64_t size() const noexcept;

    Node* root = nullptr;
};


#endif // BST_HPP