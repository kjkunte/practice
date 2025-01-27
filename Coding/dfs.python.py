# Hash Table depth first search breadth first search graph
# Given a reference of a node in a connected undirected graph
# return a deep copy (clone) of the graph
# Each node in the graph contains a value (int) and a list(List[Node]) of its neighbours
# class Node {
    #public int val;
    #public list less than node greater than neighbours
# }
# Test Case Format
# for Simplicity each node's value is the same as the node's index(1-indexed). For example, the first node with val ==1
# the second node with val == 2, and so on. The graph is represented in the test using an adjacency list
# An adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbours of a node in the grap
# The given node will always be the first node with val = 1. you must return the copy of the given node as a reference to the cloned graph

# Example 1
# input: adjList = [[2,4],[1,3],[2,4],[1,3]]
# output: [[2,4],[1,3],[2,4],[1,3]]

# Explanation: There are 4 nodes in the graph
# 1st Node (val =1)'s neighbours are 2nd node (val =2) and 4th node (val =4)
# 2nd Node (val =2)'s neighbours are 1st node (val =1) and 3rd node (val =3)
# 3rd Node (val =3)'s neighbours are 2nd node (val =2) and 4th node (val =4)
# 4th Node (val =4)'s neighbours are 1st node (val =1) and 3rd node (val =3)


class Solution:
    def cloneGraph(self, node):
        visited = {}

        def dfs(node):
            if node and node.val not in visited:
        #if the node exists and hasnt been visited yet
        #Create a new node (clone) with the same value as the given node
                newNode = Node(node.val, [])
        # Map the value of the current node to its clone in the visited dictionary
                visited[newNode.val] = newNode
        # recusively clone the neighbours and assign them to new node's neighbours
                newNode.neighbours = [visited.get(n.val) or dfs(n) for n in node.neighbours]
        #Return the newly create node
            return newNode
        #Start DFS from the given node
        return dfs(node)