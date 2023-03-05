def min_sets(t, test_cases):
    for i in range(t):
        n = test_cases[i][0]
        dolls = test_cases[i][1]
        dolls.sort()
        min_sets = 1
        for i in range(1, n):
            if dolls[i] != dolls[i-1]+1:
                min_sets += 1
        print(min_sets)
