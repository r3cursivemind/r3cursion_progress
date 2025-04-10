N, M = map(int, input().split())

if N > 2 * M or M > 2 * N:
    print("NO SOLUTION")
else:
    result = []
    if N > M:
        while N > 0 or M > 0:
            if N > 0:
                result.append("B")
                N -= 1
            if M > 0:
                result.append("G")
                M -= 1
            if N > M:
                result.append("B")
                N -= 1
    else:
        # Программисток больше, начинаем с G
        while N > 0 or M > 0:
            if M > 0:
                result.append("G")
                M -= 1
            if N > 0:
                result.append("B")
                N -= 1
            if M > N:
                result.append("G")
                M -= 1
    print("".join(result))



























