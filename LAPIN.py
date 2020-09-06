# Problem Link : https://www.codechef.com/LRNDSA01/problems/LAPIN

t = int(input())
while t > 0:
    s = input()
    l = len(s)
    if l % 2 == 0:
        if sorted(s[0: l//2]) == sorted(s[l//2: l]):
            print("YES")
        else:
            print("NO")
    else:
        if sorted(s[0: l//2]) == sorted(s[l//2 + 1: l]):
            print("YES")
        else:
            print("NO")
    t = t - 1
