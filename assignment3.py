def addition(A, B):
 result = [[A[i][j] + B[i][j]
 for j in range(len(A[0]))] for i in range(len(A))]
 print("The Addition of Two Matrices...")
 for r in result:
 print(r)
def subtraction(A, B):
 result = [[A[i][j] - B[i][j]
 for j in range(len(A[0]))] for i in range(len(A))]
 print("The Subtraction of Two Matrices...")
 for r in result:
 print(r)
def transpose(A):
 result = [[0 for col in range(col_num)] for row in range(row_num)]
 for i in range(len(A)):
 for j in range(len(A[0])):
 result[j][i] = A[i][j]
 print("Transposed Matrix is ...")
 for r in result:
 print(r)
def multiplication(A, B):
 result = [[0 for col in range(col_num)] for row in range(row_num)]
 for i in range(len(A)):
 for j in range(len(B[0])):
 for k in range(len(B)):
 result[i][j] += A[i][k] * B[k][j]
 print("Matrix Multiplication is ...")
 for r in result:
 print(r)
row_num = int(input("Input number of rows: "))
col_num = int(input("Input number of columns: "))
A = [[0 for col in range(col_num)] for row in range(row_num)]
for row in range(row_num):
 for col in range(col_num):
 item = int(input("Enter the elements in first matrix: "))
 A[row][col] = item
print("The first matrix is...")
print(A)
B = [[0 for col in range(col_num)] for row in range(row_num)]
for row in range(row_num):
 for col in range(col_num):
 item = int(input("Enter the elements in second matrix: "))
 B[row][col] = item
print("The second matrix is...")
print(B)
print("\n Program for Matrix Operations")
while(True):
 print("\n 1. Addition of Two Matrices")
 print("\n 2. Subtraction of Two Matrices")
 print("\n 3. Multiplication of Two Matrices")
 print("\n 4. Transpose of Matrix")
 print("\n 5. Exit ")
 print("\n Enter your choice: ")
 choice = int(input())
 if(choice == 1):
 addition(A, B)
 elif(choice == 2):
 subtraction(A, B)
 elif(choice == 3):
 multiplication(A, B)
 elif(choice == 4):
 transpose(A)
 else:
 print("\n Exitting")
 break
