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
/**
 * @condition Condition evaluated in this block.
 */
if (condition) {
    /* code */
} else {
    /* code */
}
```

### IF_ELIF

```cpp
/**
 * @condition Condition evaluated in this block.
 */
if (condition_1) {
    /* code */
} else if (condition_2) {
    /* code */
} else {
    /* code */
}
```

## (3) ITERATION

### WHILE

```cpp
/**
 * @condition Condition for loop continuation.
 */
while (condition) {
    /* code */
}
```

### DO_WHILE

```cpp
/**
 * @condition Condition for loop continuation.
 */
do {
    /* code */
} while (condition);
```

### FOR

```cpp
/**
 * @init Initialization step of the loop.
 * @condition Condition for loop continuation.
 * @assign Assignment step at the end of each iteration.
 */
for (init; condition; assign) {
    /* code */
}
```

## (4) INSTRUCTIONS

### CONTINUE

```cpp
/**
 * @continue Jump next iteration.
 */
while (condition) {
    /* code */
    continue;
}
```

### BREAK

```cpp
/**
 * @break Quit loop.
 */
while (condition) {
    /* code */
    break;
}
```

## (5) ADVANCED


### SWITCH

```cpp
/**
 * @condition Condition evaluated in this block.
 * @cases Lists the cases handled in this switch statement.
 */
switch (condition) {
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

### FOR_EACH

```cpp
/**
 * @init Initialization step of the loop.
 * @collection Collection over which iteration is performed.
 */
for (init : collection) {
    /* code */
}
```
