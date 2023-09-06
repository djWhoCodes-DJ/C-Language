## Formatted Input Function
- scanf()
- To take user input
- `%d or format specifier lets you take input, the number of format specifiers,  that much inouts can be taken`
- scanf("control string{format specifiers}, list of addressed arguments)
- `No comma inside control string`
- int a, b, c;
- scanf("%d %d %d", &a, &b, &c);
- `%` : Conversion character
- `scanf() returns Number of arguments/inputs it is taking from the user`

---
### int

- scanf("%4d", num); | width of the input to be accepted
- `int a;`
- `scanf("%4d", &a); | 123456`
- `printf("%d", a);  | 1234`

- `int a, b;`
- `scanf("%4d %d", &a, &b); | 123456789` 
- `printf("%d %d", a, b); | 1234 56789`
- Rest values will be inputted in the second variable, even if second variable is introduced in new scanf()

---

### float
- `float a;`
- `scanf("%4f", &a); | 1.23456`
- `printf("%f", a); | 1.230000`
- In width setting of float, decimal dot is also counted