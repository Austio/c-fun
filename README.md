# C Fun

## Compile Steps

gcc -o outfile outfile.c
./outfile

## Syntax Stuff

### Pointers and such

`**arg` - indicates that arg is a list of strings, aka argument vector or a pointer to an array of character string arguments

`&var` - return the address (pointer) to the variable
`*var` - when defining a variable, return the pointer instead of the value
`char *str2 = "goodbye"`

```
char str1[] = "Hello";
char *str2 = "Goodbye";
printf("%d %d %s\n", &str1, str1, str1);
printf("%d %d %s\n", &str2, str2, str2);

Returns something like
2686746 2686746 Hello
2686740 4206628 Goodbye

1) char str1[] = "Hello";
  address of str1 = 2686746;
  address of "Hello" = 2686746;
  value of str1 as an integer = 2686746;
2) char *str2 = "Goodbye";
  address of str2 = 2686740;
  address of "Goodbye" = 4206628;
  value of str2 as an integer = 4206628;

```

So for str1
The value of an array name is the address of the start of that array

for str2
Its value is a reference to a point in memory, that point has the value of Goodbye

or another way

A char array name such as char str1[] is the actual memory
location where an array of chars (such as “Hello”) is stored, whereas a
char pointer variable such as char *str2 is a number that represents the
memory location where that array of chars is stored. 

### Contants

`#define CONSTANT value`
or
`const type CONTANT = value`

### Conventions

Lower Case - variables, functions, parameters
Underscore to separate words


### printf

%c	character
%d	decimal (integer) number (base 10)
%4d decimal int at least 4 characters wide
%e	exponential floating-point number
%f	floating-point number
%4f floating point at least 4 characters
%i	integer (base 10)
%o	octal number (base 8)
%s	a string of characters
%u	unsigned decimal (integer) number
%x	number in hexadecimal (base 16)
%%	print a percent sign
\%	print a percent sign


## Important Need to Knows

fflush() flushes buffer, but only built to do output (characters written) not output (characters read)

Arguments are passed by value

### Strings

Strings are null terminated, so end of them will be the null character  (‘\0’) 

There is no string data type, they are arrays with a null characters in a slot

Declarations are like this

// Returns the 
char str1[] = "Hello";

// Return the point to the 
char *str2 = "Goodbye";


```
char str1[] = "Hello";
char *str2 = "Goodbye";
printf("%d %d %s\n", &str1, str1, str1);
printf("%d %d %s\n", &str2, str2, str2);

Returns something like
2686746 2686746 Hello
2686740 4206628 Goodbye

char str1[] = "Hello";
char *str2 = "Goodbye";
str2 = &str1; /* reassigns pointer to point to str1 */
printf("%d %d %s\n", &str1, str1, str1);
printf("%d %d %s\n", &str2, str2, str2);

Returns something like
2686746 2686746 Hello
2686740 2686746 Hello
```

### Multiple Indirection
-aka dereferencing, multiple indirection
The name for when you have a pointer to a pointer.




