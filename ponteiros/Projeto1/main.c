#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int hora, salHora, filho, valFilho;
    float salBruto, salFamilia, vantagens;
    float *psalBruto = &salBruto, *psalFamilia = &salFamilia, *pvantagens = &vantagens;
    float inss, irpf, deduc;
    float *pinss = &inss, *pirpf = &irpf, *pdeduc=&deduc;
    float salBruto2, taxaIr;

    printf("Insira o n�mero de horas: \n");
    scanf("%d", &hora);
    printf("Insira o sal�rio por hora: \n");
    scanf("%d", &salHora);
    printf("Insira o n�mero de filhos: \n");
    scanf("%d", &filho);
    printf("Insira o valor por filho: \n");
    scanf("%d", &valFilho);

    calcVantagens(psalBruto, psalFamilia, pvantagens,hora,salHora,filho,valFilho);

    printf("\nSal�rio Bruto: \n%f", salBruto);
    printf("\nSal�rio da Fam�lia: \n%f", salFamilia);
    printf("\nVantagens: \n%f", vantagens);

    printf("\nInsira o valor da taxa de Imposto de Renda\n");
    scanf("%f", &taxaIr);
    printf("\nInsira o valor do sal�rio Bruto\n");
    scanf("%f", &salBruto2);

    calcDeduc(pinss, pirpf, pdeduc, taxaIr, salBruto2);

    printf("\nINSS: \n%f", inss);
    printf("\nIRPF: \n%f", irpf);
    printf("\nDedu��es: \n%f", deduc);

    return 0;
}
