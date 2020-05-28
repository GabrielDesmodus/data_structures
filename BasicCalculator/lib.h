typedef struct num Num;

Num *num_cria(float a);

void num_acessa(Num *n, float *a);
void num_atribui(Num *n, float a);
float num_soma(Num *n1, Num *n2);
float num_sub(Num *n1, Num *n2);
float num_mult(Num *n1, Num *n2);
float num_div(Num *n1, Num *n2);
void prin();
