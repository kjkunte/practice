# class Solution :
#     def isPalindrome(self, s) :
#         import string
#         return True if s == "" or [i.lower() for i in s if i in string.digits or i in string.ascii_letters]  == [i.lower() for i in s if i in string.digits or i in string.ascii_letters] [::-1] else False
        
import string

class Solution:
    def isPalindrome(self, s):
        filtered_chars = [char.lower() for char in s if char.isalnum()]  # More concise filtering
        print(filtered_chars[::-1])
        print("------- ---------------- --------------")
        print(filtered_chars)

        # print([::-1])
        return filtered_chars == filtered_chars[::-1]


solution = Solution()

print(solution.isPalindrome("A man, a plan, a canal: Panama"))  # Output: True
print(solution.isPalindrome("race a car"))  # Output: True
print(solution.isPalindrome("hello"))  # Output: False
print(solution.isPalindrome("")) #Output: True