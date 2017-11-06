cmake_minimum_required(VERSION 3.8)
project(DataStructures)

set(CMAKE_CXX_STANDARD 11)

#Binarytree
set(SOURCE_FILES BinaryTree_Pointer/main.cpp BinaryTree_Pointer/QueueNode.h BinaryTree_Pointer/QueueNode.cpp BinaryTree_Pointer/Queue.h BinaryTree_Pointer/Queue.cpp BinaryTree_Pointer/BinaryTree.h BinaryTree_Pointer/BinaryTree.cpp BinaryTree_Pointer/TreeNode.h BinaryTree_Pointer/TreeNode.cpp)
add_executable(DataStructures ${SOURCE_FILES})
