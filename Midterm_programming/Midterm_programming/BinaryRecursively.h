#pragma once
class BinaryNode {
public:
    int value = -1;
    BinaryNode* left = nullptr;
    BinaryNode* right = nullptr;
};

bool exists_rec(BinaryNode* root, int value)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->value == value)
    {
        return true;
    }
    if (root->value > value)
    {
        return exists_rec(root->left, value);
    }

    return exists_rec(root->right, value);
}


class LinkedList
{
public:
    int value;
    LinkedList* next = nullptr;
    LinkedList* previous = nullptr;
};
LinkedList* mergedSortedLinkedLists(LinkedList* first, LinkedList* second)
{
    if (!first)
        return second;
    if (!second)
        return first;

    if (first->value < second->value)
    {
        first->next = mergedSortedLinkedLists(first->next, second);
        return first;
    }
    else
    {
        second->next = mergedSortedLinkedLists(first, second->next);
        return second;
    }
}


