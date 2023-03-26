This is a project file on the creation of a function similar to the standard printf() function.

The function is designed to produces output according to a format, then returns the number of characters printed (excluding the null byte used to end output to strings).
It will handle the following output specifiers:
- c : Single unsigned character
- s : Array of characters / String
- % : Percentage sign
- d : Signed decimal notation
- i : Signed decimal notation
- b :
- u : Unsigned decimal
- o : Unsigned octal
- x : Unsigned hexadecimal in lowercase
- X : Unsigned hexadecimal in uppercase
