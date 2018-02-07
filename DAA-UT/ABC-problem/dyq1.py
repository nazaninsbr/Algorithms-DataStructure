
def solve_for_testcase():
	n = int(input()) 
	answers = [[[0 for k in range(n+1)] for j in range(n+1)] for i in range(n+1)]
	for i in range(n+1):
		for j in range(n+1):
			for k in range(n+1):
				if (i>=j and j>=k):
					if (i==0 and j==0 and k==0):
						answers[0][0][0]=1
					else:
						val1=val2=val3=0
						if(i>0):
							val1= answers[i-1][j][k]
						if(j>0):
							val2= answers[i][j-1][k]
						if(k>0):
							val3= answers[i][j][k-1]
						answers[i][j][k]= val1+val2+val3;
	return answers[n][n][n];
def solve_problem_one():
	answers = []
	T = int(input()) 
	for i in range(T):
		print(solve_for_testcase())
if __name__ == '__main__':
	
	solve_problem_one();
