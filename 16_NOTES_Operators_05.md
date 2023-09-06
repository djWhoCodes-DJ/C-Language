## Bitwise Operator
- `Bit` is the smallest unit to store data in computer memory
- `Can` be appiled on Integer and Character values
- `Cannot` be applied on Float or Double
- `&`  : Bitwise And
- `|`  : Bitwise Or
- `^`  : Bitwise XOR
- `~`  : Bitwise Not
- `<<` : Left Shift
- `>>` : Right Shift

---

### Bitwise Not
- Also known as 1's Complement
- `~`
- Invert all the bits
- `Doesn't change the original number`
- int a = 10;
- int c = ~a;  
- printf("%d\n", a);   | o/p : 10
- printf("%d\n", c);   | o/p : -11
- `~a = -(a+1)` 
- Precedence : Arithmetic > Bitwise Not


--- 

### Left Shit (<<)
- Binary Operator
- `Doesn't change the original number`
- num1 << numOfPositions
- 10 << 2 
    - 0000 1010 << 2 | 00 1010 00
    - Trailing spaces will be filled with `Zeroes`
- int a = 10 | int c = a << 2 | printf("%d\n", a) | printf("%d\n", c)
- a = 10
- c = 40
- `10 << 4 = 160 | 10 * 2^4 = 160`
 

---

### Right Shit (>>)
- Binary Operator
- `Doesn't change the original number`
- num1 >> numOfPositions
- 10 >> 2 
    - 0000 1010 >> 2 | 00 0000 10
    - Leading spaces will be filled with `Zeroes`
- int a = 10 | int c = a >> 2 | printf("%d\n", a) | printf("%d\n", c)
- a = 10
- c = 2
- `10 >> 4 = 160 | 10 / 2^4 = 0`

---

### Important
- float d = 10;
- float e = 4;
- printf("%f\n", 10/4);   | o/p : 2.000000
- printf("%f\n", d/4);    | o/p : 2.500000
- printf("%f\n", 10/e);   | o/p : 2.500000
- printf("%f\n", d/e);    | o/p : 2.500000