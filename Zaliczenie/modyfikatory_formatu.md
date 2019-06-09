# Formatery dla funkcji wczytujących tekst

1. `%d` : Scan an integer as a signed decimal number.
2. `%i` : Scan an integer as a signed number. Similar to %d, but interprets the number as hexadecimal when preceded by 0x and octal when preceded by 0. For example, the string 031 would be read as 31 using %d, and 25 using %i. The flag h in %hi indicates conversion to a short and hh conversion to a char.
3. `%u` : Scan for decimal unsigned int (Note that in the C99 standard the input value minus sign is optional, so if a minus sign is read, no errors will arise and the result will be the two's complement of a negative number, likely a very large value. See strtoul().[not in citation given]) Correspondingly, %hu scans for an unsigned short and %hhu for an unsigned char.
4. `%f` : Scan a floating-point number in normal (fixed-point) notation.
5. `%g`, `%G` : Scan a floating-point number in either normal or exponential notation. %g uses lower-case letters and %G uses upper-case.
6. `%x`, `%X` : Scan an integer as an unsigned hexadecimal number.
7. `%o` : Scan an integer as an octal number.
8. `%s` : Scan a character string. The scan terminates at whitespace. A null character is stored at the end of the string, which means that the buffer supplied must be at least one character longer than the specified input length.
9. `%c` : Scan a character (char). No null character is added.
whitespace: Any whitespace characters trigger a scan for zero or more whitespace characters. The number and type of whitespace characters do not need to match in either direction.
10. `%lf` : Scan as a double floating-point number.
11. `%Lf` : Scan as a long double floating-point number.

*Wikipedia 2019*
