#include <stdio.h>
#include <stdlib.H>
#include "lib.h"

struct num{
    float a;
};

Num *num_cria(float a){
    Num *n=(Num*) malloc(sizeof(Num));
    if(n!=NULL){
        n->a=a;
    }
    return n;
}

void num_libera(Num *n){
    free(n);
}

void num_acessa(Num *n, float *a){
    *a=n->a;
}

void num_atribui(Num *n, float a){
    n->a=a;
}

float num_soma(Num *n1, Num *n2){
    float s = n1->a + n2->a;
    return(s);
}

float num_sub(Num *n1, Num *n2){
    float s = n1->a - n2->a;
    return(s);
}

float num_mult(Num *n1, Num *n2){
    float s = n1->a * n2->a;
    return(s);
}

float num_div(Num *n1, Num *n2){
    float s = n1->a / n2->a;
    return(s);
}

void prin()
{
    int escolha, escolha2;
    float in1, in2, r;

    r=0;

    printf("Escolha a operacao a ser executada:\n1 para soma\n2 para subtracao\n3 para multiplicacao\n4 para divisao\n");
    scanf("%d", &escolha2);
    printf("Digite os 2 numeros a serem utilizados na operacao:\n");
    scanf("%f", &in1);
    scanf("%f", &in2);

    Num *num1, *num2;
    num1=num_cria(in1);
    num2=num_cria(in2);

    switch(escolha2){
        case 1:
            r=num_soma(num1, num2);
        break;

        case 2:
            r=num_sub(num1, num2);
        break;

        case 3:
            r=num_mult(num1, num2);
        break;

         case 4:
            r=num_div(num1, num2);
        break;
    }

    printf("Resultado da operacao: %f\n", r);
    printf("Deseja fazer outra operacao?: 1 para sim, 2 para nao\n");
    scanf("%d", &escolha);

    if(escolha==1){
        prin();
    }
    else if(escolha==2){
        return 0;
    }
}


