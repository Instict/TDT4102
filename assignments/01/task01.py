def isFibonacciNumber(n):
    a = 0
    b = 1
    while b < n:
        temp = b
        b += a
        a = temp
    return b == n

print("Is 10 a Fibonacci number: ", isFibonacciNumber(10))
print("Is 7a Fibonacci number: ", isFibonacciNumber(7))
print("Is 3 a Fibonacci number: ", isFibonacciNumber(3))
print("Is 89 a Fibonacci number: ", isFibonacciNumber(89))
