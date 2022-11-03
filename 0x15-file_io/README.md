Opening a file is performed using the fopen() function defined in the stdio.h header file.
The file (both text and binary) should be closed after reading/writing.
Closing a file is performed using the fclose() function
For reading and writing to a text file, we use the functions fprintf() and fscanf().
They are just the file versions of printf() and scanf(). The only difference is that fprintf() and fscanf() expects a pointer to the structure FILE.
