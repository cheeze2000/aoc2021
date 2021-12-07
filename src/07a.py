xs = [int(i) for i in input().split(",")]
xs.sort()
m = xs[len(xs) >> 1]

s = 0
for x in xs: s += abs(x - m)
print(s)
