#include <iostream>
#include "BinaryTreeRecursive.h"

using namespace std;

int main() {
    BinaryTreeRecursive binaryTree;

    binaryTree.makeTree();

    binaryTree.preOrder();
    binaryTree.postOrder();
    binaryTree.inOrder();
    binaryTree.levelOrder();

    return 0;
}