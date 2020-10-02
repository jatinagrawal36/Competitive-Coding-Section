from itertools import permutations
 
if __name__ == "__main__":
	n = int(input())
	a = list(map(int, input().split(' ')))
	b = list(map(int, input().split(' ')))
	maxi = min(a[0], b[1]) + min(a[1], b[2]) + min(a[2], b[0])
	mini = n
	permut = [(0, 0), (0, 1), (1, 1), (1, 2), (2, 2), (2, 0)]
	for seq in permutations(permut):
	    copy_a = a.copy()
	    copy_b = b.copy()
	    no_win = 0
	    for i in seq:
	        a_i = i[1]
	        b_i = i[0]
	        delta = min(copy_a[a_i], copy_b[b_i])
	        no_win += delta
	        copy_a[a_i] -= delta
	        copy_b[b_i] -= delta
	    mini = min(mini, n - no_win)
	print(mini, maxi)