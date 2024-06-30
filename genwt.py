import argparse
import sys
from math import ceil,log2
from functools import reduce
def main(args):
    with open(args.s,'r') as f:
        content=f.readlines()
    
    para=list(map(int,content[0].split()))
    compressor32num=list(map(int,content[1].split()))
    compressor22num=list(map(int,content[2].split()))

    if len(para)!=3 :
        print(f"wrong parameter!!")
        sys.exit()

    n=para[0]
    m=para[1]
    macdepth=para[2]
    colunmnum=n+m+ceil(log2(macdepth))-1

    if colunmnum!=len(compressor32num) or colunmnum!=len(compressor22num):
        print(f"wrong matrix width!! matrix width:{len(compressor32num)} and {len(compressor22num)}\n expected: {colunmnum}")
        sys.exit()

    totalcompressornum=reduce(lambda x,y:x+y,compressor32num)+reduce(lambda x,y:x+y,compressor22num)
    currentnum=0
    T0,T1,resdot=[],[],[]
    if m > n:
      abss = m - n
      minn = n
    else:
      abss = n - m
      minn = m
    
    for i in range(colunmnum-1,-1,-1):
        if i < minn:
            resdot.append( (i + 1) * macdepth)
        elif i >= minn and i < (minn + abss):
            resdot.append( minn * macdepth)
        elif i >= (minn + abss) and i < (n + m):
            resdot.append( (m + n - i - 1) * macdepth)
        else:
            resdot.append( 0)
    while(currentnum<totalcompressornum):
        t0,t1=[],[]
        for i in range(colunmnum):
            n32=min(resdot[i]//3,compressor32num[i])
            t0.append(n32)
            resdot[i]-=n32*3
            n22=min(resdot[i]//2,compressor22num[i])
            t1.append(n22)
            resdot[i]-=n22*2
            currentnum+=n32+n22
        T0.append(t0)
        T1.append(t1)
        for i in range(colunmnum):
            if i !=colunmnum-1:
                resdot[i]+=t0[i]+t0[i+1]+t1[i]+t1[i+1]
            else:
                resdot[i]+=t0[i]+t1[i]
    with open(args.d, 'w') as file:
        pass 
    with open(args.d,'a') as f:
        f.write(f'{m} {n} {macdepth}\n')
        f.write(f'{totalcompressornum}\n')
        l0,l1=len(T0),len(T1)
        if l0!=l1:
            print("error!")
            sys.exit()
        for i in range(l0):
            for j in range(colunmnum):
                for k in range(T0[i][j]):
                    f.write(f'{colunmnum-1-j} {1}\n')#32compressor
                for k in range(T1[i][j]):
                    f.write(f'{colunmnum-1-j} {0}\n')#22compressor


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="generate sequential wallece representation from RLMUL matrix representation")
    parser.add_argument("--s", type=str, required=True, help="source file")
    parser.add_argument("--d", type=str, required=True, help="destination file")

    args = parser.parse_args()
    main(args)
