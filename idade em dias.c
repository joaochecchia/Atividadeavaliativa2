#include <stdio.h>
 
int main() {
int anos, meses, dias, ent;
scanf("%d", &ent);
anos = ent/365;
ent = ent%365;
meses = ent/30;
dias = ent%30;
printf("%d ano(s)\n", anos);
printf("%d mes(es)\n", meses);
printf("%d dia(s)\n", dias);

    return 0;
}