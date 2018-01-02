# Algorithms
Practice problems of algorithms
### Question 1: Find the longest Substring in a given string without repeating characters
File: longestSubstring.cpp: <br>

```
Given: abcabcd
MaxLength: 4 (abcd)

Given: pwwwekd!87
MaxLength:7

Given: oohom
MaxLength:3
```
### Question 2: 
A computer robot which moves in infinite plane, starting at 0,0 facing North.It understands 3 types of commands:<br>
1. G : Straight <br> 
2. L : Turn left <br>
3. R : Turn Right <br>
The robot performs the instruction for an infinte number of times. The program finds out in the given command list exists a circular path whose radius is a real positive number.<br>
A "YES" indicated there exsits a circle while "NO" indicates otherwise. <br>
File: encircular.cpp <br>
## Inputs
```
3     (Number of test cases)
G     (1st test case)
LGGG  (2nd test case)
GLGR  (3rd test case)
```

```
---------------------------------------------------
Command:G
Starting point is:(0,0) North
Current Direction: N
Updated step: (0,1)
---------------------------------------------------
Command:LGGG
Starting point is:(0,0) North
New Direction: W
Current Direction: W
Updated step: (-1,0)
Current Direction: W
Updated step: (-2,0)
Current Direction: W
Updated step: (-3,0)
---------------------------------------------------
Command:GLGR
Starting point is:(0,0) North
Current Direction: N
Updated step: (0,1)
New Direction: W
Current Direction: W
Updated step: (-1,1)
New Direction: N
--------------------Final Answer--------------------------
G :NO
LGGG :YES
GLGR :NO


```
### Permutation
```
Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.
Example 1:
Input:s1 = "ab" s2 = "eidbaooo"
Output:True
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:
Input:s1= "ab" s2 = "eidboaoo"
Output: False

```
### Rotate Matrix by 90 degrees
```
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Note:
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example 1:

Given input matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
Example 2:

Given input matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 

rotate the input matrix in-place such that it becomes:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]
```
#### Algo:
```
Clockwise: Reverse it and then transpose it
Anti Clockwise: Transpose it and then reverse it.

```
