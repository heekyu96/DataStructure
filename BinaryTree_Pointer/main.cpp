#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
    BinaryTree binaryTree;

    binaryTree.makeTree();

    binaryTree.preOrder();
    binaryTree.postOrder();
    binaryTree.inOrder();
    binaryTree.levelOrder();
    return 0;
}