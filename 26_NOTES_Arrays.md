## Arrays

- `int a[60]`: Declaration
    - `a `: Name of array 
    - `60` : Size of array
    - `int` : Datatype of array
    - `Total memory` : 60*4 = 240bytes
    - `Consecutive memory allocation`
    - `Defintion` : Collection of more than one homogeneous items
    
- `int a[]; `
    - Error
    - Because size not specified
    - `Size` should be positive integral value
    - `int a[5.5]` is okay, will be equal to `int a[5]`
    - `int a[b = 5.5]` : Works fine, array of size 5. But illegal to use, coz might generate error of stack overflow or underflow
    