#include <stdio.h>

int main ()
{
    
float matriz[3][12]={ {29,30,29,28,25,24,25,27,28,29,29,29},
                      {24,24,24,22,19,18,18,19,21,23,23,24},
                      {20,20,19,17,14,12,12,13,15,17,19,20}};

char *meses[12]={ "Janeiro" , "Fevereiro" , "Março" , "Abril" , "Maio" , "Junho" , "Julho" , "Agosto" , "Setembro" , "Outubro" , "Novembro" , "Dezembro" };
float maxdif[12];
int i,j;
float media;
int contador;
float tempg;

for(i=0;i<3;i++){
for(j=0;j<12;j++){
printf("%8.3f",matriz[i][j]);
}
printf("\n");
}

printf("\n");

//questão a//
media=(matriz[0][0]+matriz[0][1]+matriz[0][2]+matriz[0][3])/4.0;

printf("média das temperaturas altas: %.3f\n",media);
printf("\n");

//questão b//
printf("estes são os meses mais frescos em Limeira:\n");

for(i=0;i<12;i++){
if(matriz[0][i]<=25.0){
printf("%s\n",meses[i]);
}
}
printf("\n");

//questão c//
for(i=0;i<12;i++){
maxdif[i]=matriz[0][i]/matriz[2][i];
}

printf("Taxa de variação de cada mês: \n");
printf("\n");
for(i=0;i<12;i++){
printf("%8.3f",maxdif[i]);
}

printf("\n");
printf("\n");

contador=0;

for(i=0;i<12;i++) {
if(maxdif[i+1]>maxdif[i]){
contador++;
}
}

printf("mês com maior taxa de variação :");
printf(" %s\n",meses[contador]);

//questão d//
tempg=0;
for(i=0;i<12;i++){
tempg=tempg+matriz[1][i];
}

tempg=tempg/12.0;

printf("média geral da temperatura anual de Limeira: %.3f",tempg);

return 0;
}
