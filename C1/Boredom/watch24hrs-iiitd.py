# repo link : https://github.com/sidanand67/Competitive-Programming
# problem link : https://codeforces.com/contest/456/problem/C
mxx = int(2e5)

# taking input
n = int(input())
a = list(map(int, input().split()))

# max element
maxEle = max(a)

# calculating frequencies of each element
freq = [0] * mxx
for ele in a:
	freq[ele] += 1

# forming dp
# two transitions
# either dp[i] --> dp[i - 1] , choosing 'i - 1' which erases 'i'
# or dp[i] --> dp[i - 2] + (i * freq[i]) , deleting 'i - 1' by choosing 'i' and then removing the left elements with value 	'i'
dp = [0] * mxx
for i in range(1, mxx):
	dp[i] = dp[i - 1]
	if i >= 2: # corner case checking
		dp[i] = max(dp[i], dp[i - 2] + freq[i] * i)
	else:
		dp[i] = max(dp[i], freq[i] * i)

print(dp[-1])


