//4.	Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>
void greet ();
int main()
{
    greet();
    greet();
    greet();
    return 0;
}
 void greet ()
 {
    static int count=0;
    count++;
    printf("%d\n",count);

 }