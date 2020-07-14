# Problem Link : https://www.codechef.com/JULY20B/problems/CRDGAME

t = int(input())

def calcSum(n):
	s=0 #sum
	while n>0:
		s=s+(n%10)
		n=n//10
	return s

while t>0:
	n = int(input())
	chefScore=0
	mortyScore=0
	chefSum=0
	mortySum=0
	while n>0:
		c,m = list(map(int, input().split()))
		chefSum=calcSum(c)
		mortySum=calcSum(m)
		if chefSum>mortySum:
			chefScore+=1
		if chefSum<mortySum:
			mortyScore+=1
		if chefSum==mortySum:
			chefScore+=1
			mortyScore+=1
		n=n-1
	if chefScore>mortyScore:
		print(0, chefScore)
	if chefScore<mortyScore:
		print(1, mortyScore)
	if chefScore==mortyScore:
		print(2, chefScore)
	t=t-1
