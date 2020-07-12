# Problem Link : https://www.codechef.com/JUNE20B/problems/EOEO

t = int(input())
for i in range(t):
    ts = int(input())
    if ts%2!=0: # when ts is odd
        print(ts//2)
    else: # when ts is even
        ans=0
        while ts%2==0:  # as long as ts is even
            ts=ts//2  # make ts odd
            if ts%2!=0:
                ans+=(ts//2)
        print(ans)
