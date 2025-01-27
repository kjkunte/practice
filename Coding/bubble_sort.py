def bubble_sort(elements):
    n = len(elements)
    for i in range(n-1): # first for loop
        for j in range(n-i-1): # second for loop
            if elements[j] > elements[j + 1]: #condition check
                elements[j], elements[j+1] = elements[j+1], elements[j] # assignment

# function call
elems = [5, 2, 8, 1, 9]
bubble_sort(elems)
print(elems)
