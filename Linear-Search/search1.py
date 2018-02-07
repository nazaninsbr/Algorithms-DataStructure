if __name__ == '__main__':
	#reading the content of the array 
	li = []
	N = int(input())
	for i in range(N):
		li.append(int(input()))
	#asking what the user is looking for in the array 
	print("What number are you looking for?")
	X = int(input())
	for j in range(len(li)):
		if(li[j]==X):
			print(str(X)+" is the "+str(j+1)+"th number on the list")
