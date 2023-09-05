## Datatypes
- What kind / type of data is to be stored. Numeric, character, string...
- How much memory space is to be allocated to store that data
- Datatypes are used to declare variables and functions (basically Identifiers)

--- 

### Types of Datatypes
- Primary
    - int
    - float
    - char
    - double
    - void
- Derived
    - Arrays
    - Structure
    - Union
    - Pointer
- User Defined
    - typedef
        -> To build a datatype and inherit all the properties of predefined datatype
        -> typedef int debu;
        -> int num1;
        -> debu num2;
    - enum (Enumerated)
    
---

### 1. int
- `printf("%d", num);`
- `short int`
- `long int`
- `signed int`
- `unsigned int`
- `Range` :  -32768 to 32767 | Signed | (16-bit machine)
- `Range` : 0 to 65535 | Unsigned 
- `Range` : -2147483648 to 2147483647 | Signed | (32-bit machine)
- By default it is `signed int`
- `Size` : printf("%lu", sizeof(int)); | o/p : 4 (Machine Dependent)
- 2GB = `2 * 1024 MB` = `2 * 1024 * 1024 KB` = `2 * 1024 * 1024 * 1024 B` 
- long int num1 = 34; printf("%d", num1);
- `Unsigned int`
    - printf("%u", num1);
- `long int`
    - printf("%ld", num2);
- `unsigned long int `
    - printf("%lu", num3);

---
 
### 2. Char
- char a;
- `size` = 1 byte
- can be `signed` or `unsigned`
- `Range` : -128 to 127 | Signed
- `Range` : 0 to 255 | Signed
- printf("%c", a);
- printf("%c", 98); | o/p : b

---

### 3. Float
- Decimal values
- `Size` : 4 bytes
- `Range` : `-3.4 e^38` to `3.4e^38`
- float a;
- a = 10.0;
- printf("%f", a);  | o/p : 10.000000
- Takes upto 6 digit precision
- Float
    - `Double : 8 bytes`
        - double salary;
        - printf(`"%lf"`, salary);
        - Takes upto 14 digit precision
    - `long double : 16 bytes`
        - long double salary;
        - printf(`"%Lf"`, salary);
        - Takes upto 80-bit digit precision

---

### 4. Void
- Empty
- Generally used with functions
- It cannot store any constant