k = int(input())
m = int(input())
a = int(input())
b = int(input())
n = 0
s = 0

for i in range(a, b + 1):
    #print(i % k == 0)
    if i % k == 0:
        n += 1
        #print(n)
    #print(i % k == 0)
    if i % m == 0:
        s += 1
        #print(s)



if n >= s:
    print(n - s)
else:
    print(s - n)

































