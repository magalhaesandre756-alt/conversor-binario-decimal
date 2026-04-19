#include <stdio.h>
#include <string.h>

int BtoD(char binario[]) {
    int tamanho = strlen(binario);
    int i;
    int multiplicador = 1;
    int decimal = 0;
    int digito = 0;
    for (i = tamanho - 1 ; i >=0 ; i--) {
        digito= binario[i] - '0';
        decimal= decimal + digito * multiplicador;
        multiplicador = multiplicador * 2;
    }
    return decimal;
}


int main() {
    char binario[100];
    int resultado;
    int i;
    int valido = 1;
    printf("Digite um binario: ");
    scanf("%s", binario);

    for ( i = 0 ; i < strlen(binario) ; i++ ) {
        if (binario[i] != '0' && binario[i] != '1') {
            valido = 0;
        }
    }
    if (valido == 1) {
        resultado = BtoD(binario);
        printf("%d", resultado);
    } else {
        printf("Numero binario invalido. Digite apenas 0 e 1.");
    }

    return 0;
}