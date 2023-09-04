## Translation

### 1. Source Code
- fileName.c

### 2. Preprocessor
- `fileName.i` : Intermediate Code
- `Preprocessor directives` are the code line that begins with `#`
- `Preprocessor` is a `program`, that expands the directives

### 3. Assembely File
- Syntax Error check, After syntax error check, assembly file is created i.e. `fileName.asm`
- Assembeler then takes this assembely file, and converts it to `Object code` -> `fileName.obj`
- Binary Code is created

---



### 4. Linker
- Linker takes all the `object files`, and links them with `system libraries`
-  Now, `fileName.exe` is created

### 5. Loader
- Loader loads this `fileName.exe` into `RAM`
