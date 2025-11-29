//2.	Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.
#include <stdio.h>
void greet();

int a=50;
int main()
{
    int a=20;
    printf("%d\n",a);
    greet ();
    printf("%d\n",a);
    return 0;
}
void greet()
{

    int x=50;
    printf("%d\n",a);
}

