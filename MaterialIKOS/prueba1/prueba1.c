// Para la io (input/output).
#include <stdio.h>

char toUpper(char c) {
 if(c >= 'a' && c <= 'z')
    return c - 32;
 return c;
}

int main(int argc, char**argv)
{
   char str[] = "Hola que tal";

   for(size_t i = 0; i  < sizeof(str); ++i)
	str[i] = toUpper(str[i]);

   printf("%s", str);
}
