
n=int(input())
mat= [['-' for x in range(n)] for y in range(n)]


def isSafe(n,r,c,mat):

    for i in range(r):
        if(mat[i][c]=='Q'):
            return False
    
    i,j= r,c

    while(i>=0 and j>=0):
        if(mat[i][j]=='Q'):
            return False 
        i=i-1
        j=j-1

     
    i,j= r,c

    while(i>=0 and j<n):
        if(mat[i][j]=='Q'):
            return False 
        i=i-1
        j=j+1

    return True


def printans(mat,n):
    for i in range(n):
        for j in range(n):
            print(mat[i][j] ," | ",end=" ")
        print()
    print("-----------------------------------------------")

ct=0

def solve(n,mat,r):
    global ct
    if(r==n):
        ct+=1
        printans(mat,n) 
        return

    for i in range(n):
        if(isSafe(n,r,i,mat)):
            mat[r][i]='Q'
            solve(n,mat,r+1)
            mat[r][i]='-'



solve(n,mat,0)

print("total sol :" ,ct)