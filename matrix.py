n,m=raw_input().split(" ")
n=int(n)
m=int(m)
a=[]
b=[]
c=[]
for i in range(n):
   x=raw_input().split(" ")
   a.append(map(int,x))
for i in range(n):
   for j in range(m):
      if a[i][j]==0:
         b.append(i)
         b.append(j)
         c.append(b)
         b=[]
for l in range(len(c)):
   i=c[l][0]
   j=c[l][1]
   for k in range(m):
      a[i][k]=0
   for k in range(n):
      a[k][j]=0
for i in range(n):
   for j in range(m):
      print a[i][j],
   print "\n"