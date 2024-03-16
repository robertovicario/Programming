# Control Flow in C/C++

## (1) SEQUENCE

```cpp
/* code_1 */
/* code_2 */
/* ... */
/* code_N */
```

## (2) SELECTION

### IF_ELSE

```cpp
if (condition) {
    /* code */
} else {
    /* code */
}
```

### IF_ELIF

```cpp
if (condition_1) {
    /* code */
} else if (condition_2) {
    /* code */
} else {
    /* code */
}
```

### SWITCH

```cpp
switch (expression) {
    case case_1:
        /* code */
        break;
    case case_2:
        /* code */
        break;
    default:
        break;
}
```

## (3) ITERATION

### WHILE

```cpp
while (condition) {
    /* code */
}
```

### DO_WHILE

```cpp
do {
    /* code */
} while (condition);
```

### FOR

```cpp
for (init; condition; assign) {
    /* code */
}
```

### FOR_EACH

```cpp
for (auto &&init : collection) {
    /* code */
}
```

## (4) INSTRUCTIONS

### CONTINUE

```cpp
for (init; condition; assign) {
    /* code */
    continue;
}
```

### BREAK

```cpp
for (init; condition; assign) {
    /* code */
    break;
}
```
