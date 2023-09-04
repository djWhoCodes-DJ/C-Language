## Constants
- Numeric
    - Integer
    - Floating Point
- Character
    - Character
    - String

---

#### 1. Integer
- Ex: 10, 5, 1
- It comprises of :
    - Decimal : `0-9`| `Base 10`
    - Octal : `0-7` | `Base 8` | `Begins with 0`
    - Hexadecimal : `0-15` | `Base 16`
- `05` comes under Octal Numeric Integer Constant
- `Hexadecimal` : 0x, 0x7F, 0x4, 0xB | 0-9 | A-F

#### 2. Floating Point
- 12.56 : Integer + Fraction part

---

#### 3. Character
- 'a', '3', '/t', '/0'
- Enclosed inside single quotes
- `ASCII` : 
    - A - Z : 65 - 90
    - a - z : 97 - 122
    - 0 - 9 : 48 - 57
    - Special : 0-47, 58-64, 91-96
- printf("%d", 'a') : o/p = 97
- printf("%c", 97) : o/p : a

#### 4. String
- Sequence of characters
- "abc", "1234", "ab$", "a"
- "Debu" : Compiler stores address of first character, 'D'
- Appends a `Null Character` at the end
- Size = size + 1, coz of Null 

---

#### 5. const
- const int a = 10;
- a = 50; | Error | This cannot be changed
