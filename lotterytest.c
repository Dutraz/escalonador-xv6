#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"

#define PROCESS_QUANTITY 10

/**
 * Função auxiliar para gastar processamento
 */
void spendCPU(int tickets)
{
    int i = 0;
    if (fork(tickets))
    {
        while (1)
        {
            i++;
        }
    }
}

/**
 * Função auxiliar que lista os processos periódicamente
 */
void listProccess(void)
{
    while (1)
    {
        sleep(50);
        ps();
    }
}

/**
 * Função de teste, cria múltiplos processos
 */
void runtest()
{
    int tickets = 1;
    for (int i = 1; i <= PROCESS_QUANTITY; i++)
    {
        spendCPU(tickets);
        tickets = tickets * 2;
    }
    listProccess();
}

int main(int argc, char *argv[])
{
    runtest();
    exit();
}