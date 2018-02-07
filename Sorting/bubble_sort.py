def read_input(li=[]):
	n = int(raw_input())
	for x in range(n):
		li.append(int(raw_input()))
	return li
def bubble_sort(li=[]):
	for i in range(len(li)):
		for j in range(len(li)-1):
				if(li[j]>li[j+1]):
					li[j], li[j+1] = li[j+1], li[j]
	return li
if __name__ == '__main__':
	li=[]
	li = read_input(li)
	li = bubble_sort(li)
	print li
