# Problem Link : https://www.codechef.com/JULY20B/problems/PTMSSNG

t = int(input())

while t>0:
	n = int(input())
	noi = 4*n - 1 #number of inputs
	x = {}
	y = {}
	dx = 0
	dy = 0
	for i in range(noi):
		xc, yc = list(map(int, input().split()))
		if xc in x:
			x[xc]+=1
			#dx = 1
		if xc not in x:
			x[xc]=1
		if yc in y:
			y[yc]+=1
			#dy = 1
		if yc not in y:
			y[yc]=1
	for k,v in x.items():
		if v%2!=0:
			print(k, end=" ")
			break
	for k,v in y.items():
		if v%2!=0:
			print(k)
			break
	t=t-1
