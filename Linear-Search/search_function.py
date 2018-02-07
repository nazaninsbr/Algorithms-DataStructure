def search(X, li=[]):
	for j in range(len(li)):
		if(li[j]==X):
			return j
	return -1