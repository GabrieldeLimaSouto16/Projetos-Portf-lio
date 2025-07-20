#include <stdio.h>

float reajusteSalarioMensal(float salarioInicial, float salarioFinal, float* resultado){
    salarioInicial;
    salarioFinal;
        *resultado = salarioFinal - salarioInicial;
            *resultado = (*resultado / salarioInicial) * 100;
        
return(*resultado);
}

int main(){
    float salario_Inicial;
        float salario_Final;
            float percentual;
            
            printf("Insira o valor do salário inicial do funcionário: ");
                scanf("%f", &salario_Inicial);
            printf("Insira o valor do salário final do funcionário: ");
                scanf("%f", &salario_Final);
                
            while (salario_Inicial == salario_Final){
                printf("Insira o valor do salário final do funcionário (Caso haja aumento): ");
                    scanf("%f", &salario_Final);
            }
                
    percentual = reajusteSalarioMensal(salario_Inicial, salario_Final, &percentual);
    
        if (percentual < 0){
            
            printf("Percentual de reajuste do funcionário: %2.f porcento", percentual * (-1));
            
        } else if(percentual > 0){
            
            printf("Percentual de reajuste do funcionário: %.2f porcento", percentual);
            
        }
        
    return 0;
}