## Strings
- `Null terminated array of characters`
- char stringName[20];
    - 20 : Size / Number of Elements
- `stringName` consists the `base address` of first indexed element
- Strings `ends` with `Null character`
- `%s : Format Specifier`
    - Although, string is not a datatype in C, but it has its format specifier
    - printf("%s", stringName)
        - No need of loop, format specifier, outputs all the characters 

---
## Initialisation
- `char stringName[12] = "Devanshu"`
- stringName = |D|e|v|a|n|s|h|u|\0| | | |
    - String ends with Null character
    - The rest blocks after NULL contains garbage value
- `char stringName[] = "Devanshu"`
- `char name[12] = {'D', 'e', 'v', 'a', 'n', 's', 'h', 'u', '\0'}`
- `char lName[] = {'J', 'a', 'i', 'n', '\0'}`
- `While writing as characters in an array, it is mandatory to terminate it with Null Character  `
    - char name[] = {'J', 'a', 'i', 'n', '\0'};
- `While writing it as string, it is not necessary`
    - char name1[] = "Debu";
- The size we take while initialisation, `name[size]` is to be taken `1 more` than inputted number of characters, to `accomodate Null Character` and `avoid Buffer Overloading`

- char act[] = {'w', 'e', ' ', 'r', 'o', 'c', 'k', '\0'} 
    - `act = |w|e| |r|o|c|k|\0|`
- `Not Allowed - 1`
    - char name[10];
    - name = {'D', 'e', 'v', 'a'};

- `Not Allowed - 2`
    - char name[] = {'D', 'e', 'v', 'a', '\0'};
    - char s2[10];
    - s2 = "devanshu";
    