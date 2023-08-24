//soma e produto em função com ponteiro exercício 1 - 23/08/2023//

#include <stdio.h>

void soma_produto(int x, int y, int *soma, int *produto) {
    
*soma = x+y;
*produto=x*y;
};

int main () {
   
 int *s,*p;
 int a,b;
 
 s= &a;
 p= &b;
 
 scanf("%d %d",&a,&b);
 soma_produto(a,b,s,p);
    
printf("Soma: %d Produto: %d",*s,*p);
    
return 0;
}