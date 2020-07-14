# Problem Link : https://www.codechef.com/JULY20B/problems/CHEFSTR1

t = int(input())

while t>0:
	n = int(input())
	l = []
	l = list(map(int, input().split()))
	s=0
	for i in range(1,n,1):
		s = s + abs(l[i]-l[i-1]) - 1
	print(s)
	t=t-1
