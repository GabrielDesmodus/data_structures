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

    printf("Insira o número de horas: \n");
    scanf("%d", &hora);
    printf("Insira o salário por hora: \n");
    scanf("%d", &salHora);
    printf("Insira o número de filhos: \n");
    scanf("%d", &filho);
    printf("Insira o valor por filho: \n");
    scanf("%d", &valFilho);

    calcVantagens(psalBruto, psalFamilia, pvantagens,hora,salHora,filho,valFilho);

    printf("\nSalário Bruto: \n%f", salBruto);
    printf("\nSalário da Família: \n%f", salFamilia);
    printf("\nVantagens: \n%f", vantagens);

    printf("\nInsira o valor da taxa de Imposto de Renda\n");
    scanf("%f", &taxaIr);
    printf("\nInsira o valor do salário Bruto\n");
    scanf("%f", &salBruto2);

    calcDeduc(pinss, pirpf, pdeduc, taxaIr, salBruto2);

    printf("\nINSS: \n%f", inss);
    printf("\nIRPF: \n%f", irpf);
    printf("\nDeduções: \n%f", deduc);

    return 0;
}
