sum = [-1 for _ in range(100)]


def fib(n):
    sum[0] = 0
    sum[1] = 1
    if n == 0:
        return 0
    if n == 1:
        return 1
    if sum[n] != -1:
        return sum[n]
    if sum[n] == -1:
        sum[n] = fib(n - 1) + fib(n - 2)

    return sum[n]


print(fib(10))
