n,m=raw_input().split(" ")
n=int(n)
m=int(m)
d=[]
e=[]
f=[]
for i in range(n):
   x=raw_input().split(" ")
   a.append(map(int,x))
for i in range(n):
   for j in range(m):
      if d[i][j]==0:
         e.append(i)
         e.append(j)
         f.append(e)
         e=[]
for l in range(len(f)):
   i=f[l][0]
   j=f[l][1]
   for k in range(m):
      d[i][k]=0
   for k in range(n):
      d[k][j]=0
for i in range(n):
   for j in range(m):
      print d[i][j],
   print "\n"
