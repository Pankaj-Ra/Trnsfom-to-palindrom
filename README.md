# Trnsfom-to-palindrom

The Orion alphabet system consists of letters, denoted by the integers from to . The Orion letter is denoted by the integer

.

Some Orion letters can be transformed to other Orion letters. A transformation is denoted by a pair of two Orion letters,
. Using this transformation, you can replace letter with letter

.

Transformations also have additional properties:

    If letter 

can be transformed to letter using a transformation, then letter can be transformed to letter
as well.
If letter
can be transformed to letter and letter can be transformed to letter , then letter can be transformed to letter

    as well.

You are given a sequence
comprising of Orion letters. You are given transformations that can be applied to

. You may apply transformations to zero or more letters in the sequence. When a transformation is applied to a letter, the other letters of the string remain unaffected. You can also apply a single transformation multiple times on the same sequence.

Print the length of the longest possible palindromic subsequence after applying zero or more transformations on the letters of the given sequence.

For example, in the sequence below, transformation
is first applied to the sequence to obtain . The longest palindrome subsequence is then obtained from the resulting transformed sequence by removing letter

.

Input Format

The first line contains three space separated integers
, and . The following lines each contain two space separated integers and , denoting a transformation from letter to letter . The last line contains

positive integers (elements of the string).

Constraints

Output Format

Print a single line containing an integer denoting the length of the longest possible palindromic subsequence which can be obtained after applying transformations on the given string.

Sample Input 0

10 7 6
1 3
5 7
3 5
2 6
2 4
8 4
10 9
1 9 2 3 10 3

Sample Output 0

5

Explanation 0

The given string is
. After transforming the last letter from to , string becomes . After transforming to , string becomes . One of the longest palindromic subsequence is formed as follows

.

Sample Input 1

10 8 15
1 2
1 3
2 7
3 1
4 5
6 8
9 6
10 5
1 4 5 7 9 8 1 3 10 4 5 10 2 7 8

Sample Output 1

10

Explanation 1

After performing various transformations, the following string can be obtained
. One of the longest palindromic subsequence is 
