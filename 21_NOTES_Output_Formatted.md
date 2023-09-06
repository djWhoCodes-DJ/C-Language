## Formatted Output Function
- printf("Devanshu Jain")
- printf("%d", a);

---

### Int
- int a = 1234;
    - printf("%6d", a);
    - o/p : __1234
- int b = 5678
    - printf("%-6d", b)
    - o/p : 1234__
- int c = 1256
    - printf("%08d", c);
    - o/p : 00001256

---

### FLoat
- float a = 1234.5678
- printf("%d", a); | o/p : 0.000000
- float a = 1234.5678
    - `printf("%10.2f", a);`
    - o/p : ___1234.57
    - `10 represents total width`
    - `.2 represents Round of to that decimal`
    - `printf("%-10.2f", a);`
    - o/p: 1234.57___
    - `printf("%5.2f", a);`
    - o/p: 1234.57 | 5 will not affect result but will affect extra space
    - `printf("%5.2e", a);`
    - o/p: 1.23e+03

