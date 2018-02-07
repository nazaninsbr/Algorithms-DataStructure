import math 
line = raw_input()
n, m, a = line.split(' ')
n, m, a = int(n), int(m), int(a)
if(a<0 or n<0 or m<0):
	print 0
elif(a>n and a>m):
	print 1
else:
	if not n%a==0:
		sideone = math.floor(n/a) + 1
	else: 
		sideone = n/a
	if not m%a==0:
		sidetwo = math.floor(m/a) + 1
	else:
		sidetwo = m/a
	print int(sidetwo*sideone)