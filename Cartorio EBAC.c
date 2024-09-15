#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocações de texto por região

int main(void)
{
    setlocale (LC_ALL, "Portuguese");
    printf ("### Cartório da EBAC ###\n\n");
    printf ("Escolha a opção desejada do menu:\n\n");
    printf ("\t1 Registrar  nomes\n");
    printf ("\t2 Consultar nomes\n");
    printf ("\t3 Deletar nomes\n");
    printf (" Esse software é de livre uso dos alunos\n");
}

