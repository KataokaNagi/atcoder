import bisect  # bisect
import collections  # deque, Counter, most_common, defaultdict
import copy  # copy, deepcopy
import heapq  # heapify, heappush, heappop
import itertools  # accumulate, groupby, product, permutations, combinations
import math  # gcd, ceil, factorial
import numpy  # fmax, argmax, vstack
import string  # ascii_lowercase, ascii_uppercase, lower, upper, swapcase
import sys  # stdin
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int, sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())


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


n = I()
# a = [LI() for _ in range(n)]
# a = numpy.array(a)
# st = set(li)
# can = False
# odd = (a % 2 == 0)
# INF = 0x3fffffff

for i in range(n):
    # a = I()
    # b = I()
    if (1):
        # st.insert(a)
        None

print(a if n > 0 else "error")
