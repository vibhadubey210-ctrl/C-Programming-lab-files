//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>
void greet ();
int a =20;
int main()
{
    printf("%d\n",a);
    greet();
    printf("%d\n",a);
    return 0;
}
 void  greet()
 {
    void greet ();
    {
        a=50;
    }
    printf("%d\n",a);
 }