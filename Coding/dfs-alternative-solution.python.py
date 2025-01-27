# Imagine the class to Node to be a person which has a name and a list neighbour

class Node:
    def __init__(self, val=0, neighbours=None):
        self.val = val # This is the persons name of ID
        self.neighbours = neighbours if neighbours is not None else [] # Initializing the neighbours

        #Another way of writting the above line of code
        # if neighbours is not None:
        #     self.neighbours = neighbours
        # else:
        #     self.neighbours = []

    def clone_graph(node):
        if not node: # If the node is empty, there is nothing to clone
            return None
        
        visited = {} # Dictionary to store clean nodes | This is our Have I met this person before?  Notebook

    #here is where the magic happens | depth first search algorithm
        def dfs(node):
            if node in visited:      #Have I met this person
                return visited[node] #If yes, I already have their copy give it back

            cloned_node = Node(node.val) #Make a copy of this person (Create a new Object)
            visited[node] = cloned_node  #Write down in my notebook "I have met this person and here's their copy"

            for neighbour in node.neighbours: # Look at this person's friends
                cloned_neighbour = dfs(neighbour) # Go meet each friend and make a copy of them (recursively)
                cloned_node.neighbours.append(cloned_neighbour) # Add the copy of the friend to my copy's list of friends
            return cloned_node # Return the copy of this person

    def clone_graph(node):
        if not node:
            return None
        
    visited = {} # Dictionary to store clean nodes
    
    def dfs(node):
        if node in visited:
            return visited[node]
        
