def calculatePower(x, n):
    a = float(x)
    if n > 0:
        for i in range(1, n):
            x *= a
        print(f"{x:.2f}")
    elif n < 0:
        for j in range(0, -n):
            x /= a
        print(f"{x:.2f}")
    else:
        print("1.00")

x, n = map(int, input().split())
calculatePower(x, n)
