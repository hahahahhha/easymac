import argparse
import sys
from math import ceil,log2
from functools import reduce
import time
def main(args):
    with open(args.s,'r') as f:
        content=f.readlines()
    
    n=int(content[0].strip())
    matr=[]
    for i in range(1, n+1):
        matr.append(list(map(int,content[i].split())))

    nextidx=[i for i in range(-1,n-1)]
    for i in range(n-1,0,-1):
        for j in range(nextidx[i],-1,-1):
            if matr[i][j]:
                nextidx[i]=j
                break
    currentidx=[i for i in range(n)]
    parentready=[[0 for i in range(n)] for i in range(n)]
    for i in range(n):
        parentready[i][i]=1 

    seqppa=[]
    NotDone= True
    while(NotDone):
        NotDone= False
        for i in range(n-1,0,-1):
            if nextidx[i]!=-1:
                if parentready[currentidx[i]-1][nextidx[i]]:
                    seqppa.append(i)
                    parentready[i][nextidx[i]]=1
                    currentidx[i]=nextidx[i]
                    NotDone= True
                    if nextidx[i]==0:
                        nextidx[i]=-1
                    else:
                        for j in range(nextidx[i]-1,-1,-1):
                            if matr[i][j] :
                                nextidx[i]=j
                                break

    with open(args.d, 'w') as file:
        pass 
    with open(args.d,'a') as f:
        f.write(f'{n}\n')
        f.write(f'{len(seqppa)}\n')
        for i in seqppa:
            f.write(f'{i} ')


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="generate sequential parallel prefix adder representation from PrefixRL matrix representation")
    parser.add_argument("--s", type=str, required=True, help="source file")
    parser.add_argument("--d", type=str, required=True, help="destination file")

    args = parser.parse_args()
    main(args)
