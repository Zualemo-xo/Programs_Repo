'''
Program to print a rectangle with a diamond shaped pattern.

Example: For n=4

**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****

'''
n=int(input())

if n%2==0:
    k=2*n-1
else:
    k=2*n

for i in range(0,2*n,2):
    for j in range(n-i//2):
        print('*',end='')
    for j in range(i+1):
        print(' ',end='')
    for j in range(n-i//2):
        print('*',end='')
    print()

for i in range(2*n-2,-1,-2):
    for j in range(n-i//2):
        print('*',end='')
    for j in range(i+1):
        print(' ',end='')
    for j in range(n-i//2):
        print('*',end='')
    print()