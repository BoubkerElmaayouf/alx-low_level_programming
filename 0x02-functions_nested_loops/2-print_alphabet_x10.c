#include "main.h"
/**  prints 10 times the alphabet, in lowercase, followed by a new line
 * nested loop
 * created by elmaayouf boubker 
 */
void print_alphabet_x10(void)
{
char letters;
int i;
        for (i = 0 ; i < 10 ; i++){
                for(letters ='a' ; letters <= 'z' ; letters++)
                       _putchar(letters);
                       _putchar('\n');               
        }   
}
