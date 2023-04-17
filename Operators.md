
**Increment and decrement operators**


If you use the ++ operator as prefix like : ++var. The value of var is incremented by 1 then, it returns the value

```c
int var = 5;
int newVar = ++var; // Increment var by 1 and assign to newVar
```



If you use the ++ operator as postfix like var++. The original value of var is returned first then,var is incremented by 1 

```c
int var = 5;
int newVar = var++; // Assign var to newVar, then increment var by 1
```

```
postfix ++ operator also modifies the value of the variable in-place, just like the prefix ++ operator. 




However, since it returns the original value before the increment, 




it can be used in certain situations where you want to use the original value before incrementing the variable.
```
