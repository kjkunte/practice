def find_second_larget(numbers):
    largest =  float('-inf')
    second_largest = float('-inf')
    for num in numbers:     #for loop
        if num > largest :   #condition
            second_largest = largest  #assignment
            largest = num
    
        elif num > second_largest and num != largest:
            second_largest = num
    return second_largest

# test the function
nums = [10, 5, 8, 20, 3]
second_largest_num = find_second_larget(nums) #both function call and array acceptance variable are different
print(f"The second largest number  is {second_largest_num}")

    
