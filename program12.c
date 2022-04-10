#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();
int main()
{
    goodmorning(); 

    return 0;
}
void goodmorning()
{
    printf("Hii guys  goodmorning\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Hii guys goodafternoon\n");
    goodevening();
}
void goodevening()
{
    printf("Hii guys goodevening\n");
}
