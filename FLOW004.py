# Problem Link : https://www.codechef.com/problems/FLOW004

t = int(input())
while t>0:
    n = input()
    f = n[:1]
    l = n[len(n)-1:]
    ans = int(f)+int(l)
    print(ans)
    t=t-1
