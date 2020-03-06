#pragma once
#include <iostream>
#include <unordered_map>






class BinaryNode {
public:
    int value = -1;
    BinaryNode* left = nullptr;
    BinaryNode* right = nullptr;
};
bool exists_iter(BinaryNode* root, int value)
{
    if (root->value == value)
    {
        return true;
    }
    else if (root->value > value)
    {
        if (root->right == nullptr)
        {
            exists_iter(root->left, value);
        }
        exists_iter(root->right, value);
    }
    else 
    {
        if (root->left == nullptr)
        {
            exists_iter(root->left, value);
        }

        exists_iter(root->left, value);
    }

    return false;
}
}