def countDigits(x):
    n = 1
    w = 0

    if x < 0:
        x = x * (-1)

    q = x
    for i in range(0, q + 1, n):
        if x / n > 1:
            w = w + 1
        else:
            break
        n = n * 10
    print(w)


countDigits(int(input()))

