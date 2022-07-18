# Watermelon problem

## Problem Statement
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.
<br>
Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.
<br><b>Input</b><br>
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.
<br>
<b>Output</b><br>
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

## Solution
[Read code](watermelon.cpp)<br>

<b>Explaination:</b><br>
Smallest possible even number: 2 (1+1)<br>
If the number is 'n' then (n-2) and (2 + (n-2)) should be even.<br>
<b>NOTE: Even number + Even number = Even number</b><br>

```
Check if number is greater than 2
if true:
    Check (n-2) is even
    if true:
        "Yes"
else:
     "No"
```

## References and Links:
- [C++ Functions](https://www.geeksforgeeks.org/functions-in-c/)
- [C++ Ternary operator](https://www.geeksforgeeks.org/conditional-or-ternary-operator-in-c-c/)
- [Codeforces Problem Statement](https://codeforces.com/problemset/problem/4/A)
