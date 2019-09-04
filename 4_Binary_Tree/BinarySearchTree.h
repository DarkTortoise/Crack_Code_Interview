#ifndef BINARYTREE_BINARYSEARCHTREE_H
#define BINARYTREE_BINARYSEARCHTREE_H

template<class T>
struct TreeNode {
    TreeNode<T> *left;
    TreeNode<T> *right;
    T value;

    explicit TreeNode(T value) {
        this->left = nullptr;
        this->right = nullptr;
        this->value = value;
    }
};

template<class T>
class BinarySearchTree {
private:
    TreeNode<T> *root;

    TreeNode<T> *BSTSearch(TreeNode<T> *rootNode, T value) const {
        if (rootNode->value == value)
            return rootNode;
        else if (value < rootNode->value)
            return BSTSearch(rootNode->left, value);
        else if (value > rootNode->value)
            return BSTSearch(rootNode->right, value);
    }

    TreeNode<T> *BSTInsert(TreeNode<T> *rootNode, T value) {
        if (rootNode == nullptr) {
            auto node = new TreeNode<T>(value);
            return node;
        }

        if (value <= rootNode->value)
            return BSTInsert(rootNode->left, value);
        else if (value > rootNode->value)
            return BSTInsert(rootNode->right, value);
    }

    void Release(TreeNode<T> *rootNode) {
        if (rootNode == nullptr)
            return;

        auto leftChild = rootNode->left;
        auto rightChild = rootNode->right;

        delete rootNode;
        Release(leftChild);
        Release(rightChild);
    }

public:
    explicit BinarySearchTree(TreeNode<T> *root) : root(root) {}

    TreeNode<T> *GetRoot() {
        return this->root;
    }

    TreeNode<T> *Search(T value) const {
        return BSTSearch(root, value);
    }

    TreeNode<T> *Insert(T value) {
        return BSTInsert(this->root, value);
    }

    virtual ~BinarySearchTree() {
        Release(root);
    }
};

#endif //BINARYTREE_BINARYSEARCHTREE_H
