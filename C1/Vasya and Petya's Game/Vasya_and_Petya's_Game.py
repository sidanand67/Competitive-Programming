n = int(input())

ans = []
used = [False] * (n + 1)
for p in range(2, n + 1):
    q = p
    while q <= n:
        if not used[q]:
            used[q] = True
            ans.append(q)
        q *= p
    for i in range(p, n + 1, p):
        used[i] = True

print(len(ans), '\n', ' '.join(map(str, ans)))
