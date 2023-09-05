## Logical Operators
- `&&` , `||` , `!`
- Output is 0 or 1
- 0 = False
- Any other value, print statement, function = True
- `Second Expression` is evaluated based on the output of `First Expression`

### ! (Logical Not)
- Unary operator
- Complements the value of expression or variable
- `0 -> 1` | `1 -> 0`
- `!5 = 0`
- `!0 = 1`
- `Precedence` of `Logical Not` is `higher` than that of `Logical And/Or`
- printf("%d", 4 && !0) | o/p = 1
