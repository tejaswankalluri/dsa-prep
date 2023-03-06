def pattern1():
	for i in range(1,6):
		for j in range(1,6):
			print("*",end="")
		print()

def pattern2():
	for i in range(1,6):
		for j in range(i):
			print("*",end="")
		print()

def pattern3():
	for i in range(1,6):
		for j in range(1,i+1):
			print(j,end="")
		print()

def pattern4():
	for i in range(1,6):
		for j in range(i):
			print(i,end="")
		print()
def pattern5():
	for i in range(5,0,-1):
		for j in range(i):
			print("*",end="")
		print()
def pattern6():
	for i in range(5,0,-1):
		for j in range(1,i+1):
			print(j,end="")
		print()

def pattern7():
	n = 9
	for i in range(1,n,2):
		for k in range(1,n-i):
			print(" ",end="")
		for j in range(i):
			print("* ",end="")
		print()

def pattern8():
	n = 9
	for i in range(n,0,-2):
		for k in range(1,n-i):
			print(" ",end="")
		for j in range(i):
			print("* ",end="")
		print()

pattern7()
