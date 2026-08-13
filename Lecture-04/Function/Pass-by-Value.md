# C++ Lecture 5 — Pass by Value

## 1. What is Pass by Value?

**Pass by value** means that when we send a variable to a function, the function receives a **copy** of that variable.

The original variable in `main()` is not directly given to the function.

Think of it like this:

```text
main() has:     x = 10

call function:  change(x)

function gets:  a = 10   ← a is a copy

function changes a → 20

main() still has: x = 10
```

So:

> **Pass by value = function works on a copy, so changes inside the function do not change the original variable.**

---

## 2. Basic Example

```cpp
#include <iostream>
using namespace std;

void change(int a) {
    a = 20;
}

int main() {
    int x = 10;

    change(x);

    cout << x;

    return 0;
}
```

### Output

```text
10
```

Even though `a` was changed to `20`, `x` remains `10`.

Why?

Because:

```cpp
change(x);
```

does **not** make `a` and `x` the same variable.

It is more like:

```text
x = 10

a = copy of x
a = 10

a = 20
```

The copy changes, not the original.

---

## 3. What happens in memory?

Suppose:

```cpp
int x = 10;
change(x);
```

When `change(x)` is called:

```text
main()                  change()

x = 10                  a = 10
(original)              (copy)
```

They contain the same value, but they are separate variables.

If the function does:

```cpp
a = 50;
```

then:

```text
main()                  change()

x = 10                  a = 50
```

The original `x` is still `10`.

---

## 4. Why is it called "pass by value"?

Because the **value** of the variable is passed to the function.

For example:

```cpp
int x = 10;
change(x);
```

The value `10` is passed.

The function receives:

```cpp
a = 10;
```

It does not receive direct control over `x`.

---

## 5. Another Example — Swapping

Consider:

```cpp
#include <iostream>
using namespace std;

void swapNumbers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    swapNumbers(x, y);

    cout << x << " " << y;

    return 0;
}
```

### Output

```text
10 20
```

You might expect:

```text
20 10
```

but that does not happen.

Inside the function:

```text
a = 10
b = 20

after swapping:

a = 20
b = 10
```

But these are only copies.

The original variables are still:

```text
x = 10
y = 20
```

This is one of the easiest ways to understand pass by value.

---

## 6. Why would we use Pass by Value?

Pass by value is useful when we **do not want the function to modify the original variable**.

For example:

```cpp
int square(int n) {
    return n * n;
}
```

Then:

```cpp
int x = 5;

cout << square(x);
```

The function can use `x`'s value without changing `x`.

Output:

```text
25
```

After the function:

```text
x is still 5
```

---

## 7. Pass by Value and Return Value are Different Things

These two ideas can appear together, but they do different jobs.

Example:

```cpp
int square(int n) {
    return n * n;
}
```

When we call:

```cpp
int ans = square(5);
```

### Pass by value

```text
5 → n
```

The function receives a copy of `5`.

### Return value

```text
n * n → 25
```

The function sends the result back.

So:

```text
Input to function       → Pass by value
Output from function    → Return value
```

---

## 8. Very Important Mental Model

Remember this:

```text
                    FUNCTION

                 ┌─────────────┐
x = 10  ───────→ │   a = 10    │
(original)       │    COPY     │
                 └─────────────┘
                       │
                       ↓
                    a = 20

                 x is STILL 10
```

The function receives a **copy**.

---

## 9. Connection to the Functions You Just Learned

You have already seen functions like:

```cpp
int sum(int a, int b) {
    int s = a + b;
    return s;
}
```

If we call:

```cpp
int ans = sum(10, 5);
```

then conceptually:

```text
a = 10   ← copy of 10
b = 5    ← copy of 5

s = 15

return 15
```

The function calculates using its own local variables.

Then:

```cpp
ans
```

receives the returned value.

This is why functions are useful: they can receive information, process it, and return a result.

---

## 10. Quick Comparison

| Concept | Meaning |
|---|---|
| Pass by value | Function receives a copy |
| Original variable | Does not change from modifications to the parameter |
| Parameter | Local variable inside the function |
| Return value | Function sends a result back |
| `cin` | Gets input from the user |
| `cout` | Displays output |

---

## 11. One-Line Revision

> **Pass by value means a function receives a copy of the argument, so changes made to the parameter inside the function do not affect the original variable.**

---

## 12. What Comes Next

Later in C++, you will learn **pass by reference**.

That is different:

```text
Pass by value       → copy is given
Pass by reference   → original variable can be accessed/changed
```

For now, the most important thing is to be completely comfortable with:

```text
argument → copy → function works on copy → original stays unchanged
```
