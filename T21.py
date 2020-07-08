# Problem Link : https://www.codechef.com/problems/T21
# cook your dish here
t = int(input())
while t>0:
    m,n = list(map(int, input().split()))
    print((m*n)%3)
    t=t-1
