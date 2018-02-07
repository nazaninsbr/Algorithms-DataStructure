if __name__ == '__main__':
	n = int(input())
	li = []
	help_li=[]
	out = []
	k = 0
	for i in range(n):
		x = int(input())
		li.append(x)
		out.append(0)
		if x>k:
			k= x
	#creating the help list 
	for i in range(k):
		help_li.append(0)
	#filling the help list
	for j in range(n):
		help_li[li[j]-1] +=1
	for j in range(1, k):
		help_li[j] += help_li[j-1]
	i = n-1
	#sorting the numebrs in the out put list
	while i>=0:
		out[help_li[li[i]-1]-1] = li[i]
		help_li[li[i]-1] -= 1
		i -=1
	#printing output
	print(out)
