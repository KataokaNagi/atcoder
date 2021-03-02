import math


def chmax(a, b):
    if (a < b):
        a = b
        return True
    else:
        return False


def chmin(a, b):
    if (a > b):
        a = b
        return True
    else:
        return False

# math.factorial(n) # n!
# math.ceil(n/m) # ceiling func
# INF = 0x3fffffff


n, a, b = map(int, input().split())
# li = list(map(int, input().split()))
# st = set(li)
# s = [word for word in input().split()]
# can = False
# odd = (a % 2 == 0)

for i in range(n):
    if (1):
        # st.insert(a)
        print(a)

print(a if n > 0 else b if n == 0 else "error")
# print(st.size())
