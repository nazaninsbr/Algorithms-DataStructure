if __name__ == '__main__':
    n = int(input())
    if(n%2==1):
        print("Weird\n")
    elif (n>=2 and n<=5 and n%2==0):
        print("Not Weird\n")
    elif(n>=6 and n<=20):
        print("Weird\n")
    elif (n>20 and n%2==0):
        print("Not Weird\n")