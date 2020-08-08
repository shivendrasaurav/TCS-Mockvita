def getresult():
  cnt=0;
  n=int(input())
  k=int(input())
  a = []
  for i in range (0, n):
      rel=int(input())
      a.append(rel)
  for i in range(0, n):
      for j in range(0, n):
          if ((a[j]>=a[i]-k and a[j]<=a[i]+k and a[i]!=a[j])):
              cnt=cnt+1
              break
  print(cnt);
getresult()
