# Problem Link : https://www.codechef.com/JULY20B/problems/ADAKING

# cook your dish here
t = int(input())

while t>0:
	k = int(input())
	dot = k-1
	king = 1
	for i in range(8):
		for j in range(8):
			if king==1:
				king-=1
				print('O',end="")
			elif dot>0 and king==0:
				dot-=1
				print(".",end="")
			elif dot==0 and king==0:
				print("X",end="")
		print()
	print()
	t-=1
