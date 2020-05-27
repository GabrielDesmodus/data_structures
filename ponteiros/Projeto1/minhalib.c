void calcVantagens(float *enderSalBruto, float *enderFamilia, float *enderVantagens, int numHoras, int salHora, int numFilhos, int valorPorFilho){
    *enderSalBruto = numHoras * salHora;
    *enderFamilia = numFilhos * valorPorFilho;
    *enderVantagens = *enderSalBruto + *enderFamilia;
}

void calcDeduc(float *enderInss, float *enderIrpf, float *enderDeduc, float taxaIr, float salBruto2){
    *enderInss = salBruto2 * 0.08;
    *enderIrpf = salBruto2 * taxaIr;
    *enderDeduc = *enderInss + *enderIrpf;

}
