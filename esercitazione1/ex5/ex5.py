n=int(input("inserisci: "))
s=0
a=1
b=1
i=0
print(a)
print(b)
while i<n-2:
	s=a+b
	print(s)
	a=b
	b=s
	i+=1
