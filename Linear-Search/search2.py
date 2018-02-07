def search(X, li=[]):
	for j in range(len(li)):
		if(li[j]==X):
			return j
	return -1
if __name__ == '__main__':
	#reading the content of the array 
	li = []
	N = int(input())
	for i in range(N):
		li.append(int(input()))
	#asking what the user is looking for in the array 
	print("What number are you looking for?")
	X = int(input())
	P = search(X, li)
	if(P==-1):
		print("the number you are looking for does not exist")
	else:
		print(str(X)+" is the "+str(P+1)+"th number on the list")