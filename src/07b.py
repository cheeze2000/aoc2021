import math

def f(n): return (n * (n + 1)) >> 1

xs = [int(i) for i in input().split(",")]

s = math.inf
for i in range(min(xs), max(xs) + 1):
	t = 0
	for x in xs: t += f(abs(x - i))
	s = min(s, t)

print(s)
