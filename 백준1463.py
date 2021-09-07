x = int(input())

d = [0] * 30001

for i in range(2, x + 1):
    print(f'i : {i}')
    d[i] = d[i-1] + 1
    print(f'd[i] : {d[i]}')
    if i % 2 == 0:
        print(f'd[i] : {d[i]}, d[i//2] : {d[i//2] + 1}')
        d[i] = min(d[i], d[i//2] + 1)

    if i % 3 == 0:
        print(f'd[i] : {d[i]}, d[i//3] : {d[i//3] + 1}')
        d[i] = min(d[i], d[i//3] + 1)

    if i % 5 == 0:
        print(f'd[i] : {d[i]}, d[i//5] : {d[i//5] + 1}')
        d[i] = min(d[i], d[i//5] + 1)

print(d[x])
