def f(xs):
	ys = [0] * 9
	for i in range(9):
		if i > 0:
			ys[i - 1] += xs[i]
		else:
			ys[6] += xs[0]
			ys[8] += xs[0]

	return ys

xs = [int(i) for i in input().split(",")]
ys = [0] * 9
for x in xs: ys[x] += 1

for i in range(256): ys = f(ys)
print(sum(ys))
