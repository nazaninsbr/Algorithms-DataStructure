def read_input(li = []):
	print("Please enter the number of your inputs: ")
	n = int(input())
	for i in range(n):
		li.append(int(input()))

def bubbleSort(li = []):
	for i in range(len(li)):
		for j in range(i, len(li)):
			if li[i] > li[j]:
				li[i], li[j] = li[j], li[i]

def print_list(li = []):
	print(li)
if __name__ == '__main__':
	li = []
	read_input(li)
	bubbleSort(li)
	print_list(li)