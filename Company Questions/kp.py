

def closureSum(inputNum):
    inputNum=str(inputNum)
    i=0
    j=len(inputNum)-1
    ans=0
    while(i<j):
        s= str(inputNum[i]) +str(inputNum[j])
        ans =ans + int(s)
        i=i+1
        j=j-1
    if(len(inputNum)%2==1):
        ans =ans + int(inputNum[len(inputNum)//2])
    return ans


