/******************************************************************************
DIARIO FINANCEIRO PESSOAL
Data de criação: 27 mar 2025.
Estrutura do Fluxograma
1️⃣ Início
2️⃣ Exibir Menu Principal

[1] Cadastrar Receita

[2] Cadastrar Despesa

[3] Exibir Saldo Atual

[4] Gerar Relatórios

[5] Sair
3️⃣ Processamento das Opções

Se [1] ou [2]: Solicitar informações da transação e armazenar no arquivo/binário/BD.

Se [3]: Calcular saldo total (Receitas - Despesas).

Se [4]: Exibir lista de transações e gerar gráficos ASCII ou arquivos CSV.
4️⃣ Retornar ao menu ou sair do programa
*******************************************************************************/
#include <stdio.h>

// Função que limpa a tela
void limparTela() {
    #ifdef _WIN32
        system("cls");  // Para Windows
    #else
        system("clear");  // Para Linux/Mac
    #endif
}
int main() {
    int opcao = 0;
    int option = 0;
    while (opcao != 8) {
        printf("Bem vindo(a) ao APP WILLOW.\n");
        printf("    [ 1 ] Cadastrar Receita\n");
        printf("    [ 2 ] Cadastrar Despesa\n");
        printf("    [ 3 ] Exibir Saldo\n");
        printf("    [ 4 ] Gerar Relatorio\n");
        printf("    [ 5 ] Alterar Idioma\n");
        printf("    [ 6 ] SAVE & EXIT\n");
        printf("Qual eh a sua opcao: ");
        scanf("%d", &opcao);
        limparTela();
        switch(opcao) {
            case 1:
                printf("Cadastrando suas receita mensal...\n");
                printf(" \n");
                break;
            case 2:
                printf("Cadastrando sua despesa mensal...\n");
                printf(" \n");
                break;
            case 3:
                printf("Eis seu saldo em tela...\n");
                printf(" \n");
                break;
            case 4:
                printf("Gerando relatorio...\n");
                printf(" \n");
                break;
            case 5:
                printf("    [ 1 ] English\n");
                printf("    [ 2 ] Francais\n");
                printf("Choose/Choisissez: ");
                scanf("%d", &option);
                if(option == 1){
                    while (option != 6) {
                        limparTela();
                        printf("Welcome to the WILLOW APP.\n");
                        printf("    [ 1 ] Register Income\n");
                        printf("    [ 2 ] Register Expense\n");
                        printf("    [ 3 ] Display Balance\n");
                        printf("    [ 4 ] Generate Report\n");
                        printf("    [ 5 ] Change Language\n");
                        printf("    [ 6 ] SAVE & EXIT\n");
                        printf("What is your choice: ");
                        scanf("%d", &option);
                        if(option == 6) break;

                        return 0;
                    }
                }else{
                    while (option != 6) {
                        limparTela();
                        printf("Bienvenue sur l'application WILLOW.\n");
                        printf("    [ 1 ] Enregistrer un revenu\n");
                        printf("    [ 2 ] Enregistrer une dEpense\n");
                        printf("    [ 3 ] Afficher le solde\n");
                        printf("    [ 4 ] GEnErer un rapport\n");
                        printf("    [ 5 ] Changer de langue\n");
                        printf("    [ 6 ] ENREGISTRER & QUITTER\n");
                        printf("Quelle est votre option : ");
                        scanf("%d", &option);
                        if(option == 6) break;
                        
                        return 0;
                    }                                   

                }
                break;
            case 6:
                printf("Finalizando...\n+=+=+=+=+=+=+=+=+=+=+=+=+=\n");
                printf("Au revoir! Obrigado por interagir. Volte sempre!\n");
                break;
            default:
                printf("OPCAO INVALIDA!");
        }
    }
    return 0;
}