import sys

lines = sys.stdin.readlines()
xs = [line.strip().replace(" -> ", ",").split(",") for line in lines]

ys = []
for x in xs:
	[a, b, c, d] = [int(i) for i in x]
	if a == c or b == d: ys.append((a, b, c, d))

zs = dict()
for (a, b, c, d) in ys:
	if a == c:
		if b > d: b, d = d, b
		for i in range(b, d + 1):
			if (a, i) not in zs: zs[(a, i)] = 0
			zs[(a, i)] += 1
	else:
		if a > c: a, c = c, a
		for i in range(a, c + 1):
			if (i, b) not in zs: zs[(i, b)] = 0
			zs[(i, b)] += 1

ans = 0
for _, v in zs.items(): ans += int(v > 1)

print(ans)
