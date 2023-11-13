1. Iterative

```
IterativeGCD(a,b)
while b $\not=$ 0 do
    temp = b
    b = a % b
    a = temp

return a
```

2. Recursive

```
RecursiveGCD(a,b)
if b = 0 then
	return a
else
	return RecursiveGCD(a,a%b)
end if

```
