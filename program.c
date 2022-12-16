#include <stdio.h>

int main() {
    // abrir arquivo no modo write
    FILE *file = fopen("arquivo.txt", "w");

    // Verficando se o arquivo existe
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Pegando o texto do usuário
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // Escrevendo o texto no arquivo
    fprintf(file, "%s", str);

    // fechando o arquivo
    fclose(file);

    return 0;
}
