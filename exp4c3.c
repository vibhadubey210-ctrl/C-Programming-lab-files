//3.	Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>
void greet();
int main()
{

    int a=20;
    {
        int b=150;
        printf("%d\n",b);
    }
    printf("%d\n",a);
    return 0;
}