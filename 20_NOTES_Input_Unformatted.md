## Unformatted Inout Function
- `getchar()` : Takes only single character as input
    - Reads single character from standard input device(keyboard) 
    - Function takes no argument
    - `char ch;`
    - `ch = getchar();`
    - `printf("%c", ch);`
    - Any length of input can be inputted until, `Enter` is not pressed
    - If more than 1 character is inputted, the next character will be used by next `getchar`

---

- `getch()` : Takes only single characteras input
    - Used at the end, to hold the program
    - While inputting, input characters will `not be echoed` on the string
    - Directly, next line will be executed
    - Doesn't needs `Enter` key
    - Only single character will be inputted

---

- `getche()` : Takes only single character as input
    - Takes single character, and it will be `echoed` on the screen
    - And then next line will be executed, no need of `Enter` key

---

- `gets()` : Takes string as input
    - `char ch[10]`
    - `gets(ch)`
    - `printf("%s", ch)`
    