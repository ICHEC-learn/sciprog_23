1. Iterative

```
IterativeGCD(a,b)
while b do
    temp = b
    b = a % b
    a = temp

return a
```