li = []
n = int(raw_input())
for i in range(n):
	li.append(int(raw_input()))
for i in range(n-1):
	j = i+1
	while j>=1:
		if li[j]<li[j-1]:
			temp = li[j]
			li[j] = li[j-1]
			li[j-1] = temp
		else:
			break
		j -=1
print li