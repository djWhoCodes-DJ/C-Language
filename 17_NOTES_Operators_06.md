## Special Operators 
- `sizeof()`
- `,`
- `*`
- `&`
- `->`

---

### Comma Operator (,)
- Least precedence
- Binary Operator
- All the expressions are evaluated, even if brackets are not there
    - a = 8
    - b = a++, ++a
    - b = 8
    - a = 10
- `Comma as a Separator`
    - int a, b, c ;
    - int a=10, b=5, c=4, d;
- `Comma as a Operator`
- int a;
- a = 5,4 ;
    - `First expression`/value will be evaluated and will be `rejected`. Then `next Expression `will be evaluated and will be `returned`
    - `,` is having `least precedence` than `Assignment` operator
    - So, Assignment will be evaluated first, then comma will be evaluated
- `Output` : a = 5; 
- a = (5,4) | printf("%d", a) | O/p : 4
- a = (5,4,3,2) | printf("%d", a) | o/p : 2

- int a = 5,4;
    - While declaring variables, comma act as separator
- int a = (5,4,3,6);
    - o/p : a = 6
    - Brackets have highest precedence


---

### Size of string
- int a;
- a = printf("Devanshu");
- printf("\n%d", a);
- o/p : Devanshu | 8
- `printf() returns the size of the string`, number of characters

- int a;
- a = printf("%d%d", 6, 7);
- printf("\n%d", a);
- o/p : 67 | 2