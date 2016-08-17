'''
 Palindromic String
 You have been given a String S. 
 You need to find and print whether this string is a palindrome or not. 
 If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String 
S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 
1=|S|=100

Note
String S consists of lowercase English Alphabets only.

SAMPLE INPUT 
aba

SAMPLE OUTPUT 
YES
'''

#Python 3 Code

my_str = input()

my_str = my_str.casefold() #For Caseless Comparisions

rev_str = reversed(my_str) #Reversing the string

if list(my_str) == list(rev_str):
   print("YES")
else:
   print("NO")