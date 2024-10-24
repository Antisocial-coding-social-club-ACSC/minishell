#include <readline/history.h>
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main() {
    char *input;

    // Leer entrada del usuario con readline
    input = readline("minishell>asdasdadsassad");

    // Si la entrada no es NULL, agregarla al historial
    if (input && *input) {
        add_history(input);
    }

    printf("Comando ingresado: %s\n", input);

    // Liberar la memoria de input
    free(input);

    return 0;
}
