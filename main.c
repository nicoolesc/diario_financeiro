/******************************************************************************
DIARIO FINANCEIRO PESSOAL (PROJETO 9)
ALUNOS: GABRIEL, JOHNATAN, MATHEUS, NICOLE, **PEDRO
Data de criação: 27 mar 2025.
REPOSITÓRIO DO CÓDIGO: https://github.com/johnatanwillow/diario_financeiro
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 - Estrutura do Fluxograma
1️⃣ Início
2️⃣ Exibir Menu Principal

[1] Cadastrar Receita
[2] Cadastrar Despesa
[3] Exibir Saldo Atual
[4] Gerar Relatórios
[5] Alterar Idioma
[6] Salvar & Sair

3️⃣ Processamento das Opções

Se [1] ou [2]: Solicitar informações da transação e armazenar no arquivo/binário/BD.
Se [3]: Calcular saldo total (Receitas - Despesas).
Se [4]: Exibir lista de transações e gerar gráficos ASCII ou arquivos CSV.
Se [5]: Recria os menus em francês ou inglês conforme escolha do usuário.
Se [6]: Salva e sai do programa com delay programado de 3s.
4️⃣ Retornar ao menu ou sair do programa
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 - Persistência de Dados
○ Todas as transações financeiras registradas devem ser armazenadas em um arquivo binário,
garantindo que os dados sejam preservados após o encerramento do programa. (  )
○ O sistema deve carregar automaticamente os dados do arquivo ao ser iniciado, 
permitindo a continuidade do controle financeiro. (  )
 - Requisitos Técnicos
● O sistema deve ser implementado em C. ( X )
● O uso de structs, vetores, arquivos binários e ponteiros é obrigatório. ( )
● O código deve ser modularizado, com funções bem definidas para cada operação do sistema. (  )
● O sistema deve interagir com o usuário via entrada e saída de texto no console. ( X )
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

// Função que limpa a tela
void limparTela() {
    #ifdef _WIN32
        system("cls");  // Para Windows
    #else
        system("clear");  // Para Linux/Mac
    #endif
}

int main() {
    int opcao, categoria, option = 0;
    int subOpcao = 1;
    int receita_total = 0, receita = 0, despesa_total = 0, despesa = 0;

    while (opcao != 6) {
        limparTela();
        printf("+_+_+_+_+_+_+_+== CARTEIRA DIGITAL ==+_+_+_+_++_+_+_+_+_+_+_\n"); 
        printf("  \n");
        printf(" Bem vindo, Carlos, a sua CARTEIRA DIGITAL em Canadian Dollar.\n Escolha a opcao desejada: \n");
        printf("   [ 1 ] Cadastrar Receita\n");
        printf("   [ 2 ] Cadastrar Despesa\n");
        printf("   [ 3 ] Exibir Saldo\n");
        printf("   [ 4 ] Gerar Relatorio\n");
        printf("   [ 5 ] Alterar Idioma [FR] [EN]\n");
        printf("   [ 6 ] SALVAR & SAIR\n");
        printf("Qual eh a sua opcao: ");
        scanf("%d", &opcao);
        
        
        switch(opcao) {
        case 1:
                /*O sistema deve permitir o registro de transações financeiras, com as seguintes informações:
                ■ Data da transação (dia, mês, ano)
                ■ Tipo de transação (receita ou despesa)
                ■ Valor da transação
                ■ Descrição (opcional, para detalhar a transação)
                ■ Categorias*/
                subOpcao = 1;
            while (subOpcao != 2){
                limparTela();
                int categoria;
                printf("Sua conta atual possui %d.%02d CAD\n", receita_total / 100, receita_total % 100);
                printf("Digite sua receita mensal em CAD (ex: 1050 para 10.50 CAD): ");
                scanf("%i", &receita );
                receita_total += receita;
                printf("\nE qual eh a categoria da receita? \n");
                printf("    [ 1 ] BOLSA DE INTERCAMBIO \n");
                printf("    [ 2 ] ESTAGIO NA STARTUP \n");
                printf("    [ 3 ] MESADA DA MAMAE (recebida em CAD) \n");
                printf("    [ 4 ] OUTROS\n");
                printf("Qual eh a sua opcao: ");
                scanf("%d", &categoria);  
                if (categoria == 1 || categoria == 2 || categoria == 3 || categoria == 4 ){
                    printf("\n+_+_+_+_+_+_+_+_+_+ == RECEITA == +_+_+_+_+_+_++_+_+_+_+_+_\n"); 
                    printf("  \n");       
                    printf("\nSua conta atual possui X RECEITAS no montante de %i.%02i CAD \ncadastradas na categoria %i\n", receita_total / 100, receita_total % 100, categoria);
                    printf("  \n");
                }else{
                    printf("Opcao invalida!\n");
                }
                             
                printf("Digite [ 1 ] para Continuar || Digite [ 2 ] para Sair: ");
                scanf("%d", &subOpcao);
            }  
                break;
        case 2:
                 /*O sistema deve permitir o registro de transações financeiras, com as seguintes informações:
                ■ Data da transação (dia, mês, ano)
                ■ Tipo de transação (receita ou despesa)
                ■ Valor da transação
                ■ Descrição (opcional, para detalhar a transação)
                ■ Categorias*/
                subOpcao = 1;
                while (subOpcao != 2){
                limparTela();
                printf("+_+_+_+_+_+_+_+_+== DESPESAS ==+_+_+_+_+_+_+_+_+_+_+_\n"); 
                printf("  \n");
                printf("Sua despesa total eh de %i.%02i CAD\n", despesa_total / 100, despesa_total % 100);
                printf("Digite sua despesa em CAD (ex: 750 para 7.50): ");
                scanf("%i", &despesa );
                despesa_total = despesa_total + despesa;
                
                printf("\nE qual eh a categoria da despesa? \n");
                printf("    [ 1 ] ALIMENTACAO RESTAURANT FRANCES\n");
                printf("    [ 2 ] TRANSPORTE DE UBER\n");
                printf("    [ 3 ] ALUGUEL DO FLAT\n");
                printf("    [ 4 ] ACADEMIA DO FLAT\n");
                printf("    [ 5 ] BOATE\n");
                printf("Qual eh a sua opcao: ");
                scanf("%i", &categoria); 
                if (categoria == 1 || categoria == 2 || categoria == 3 || categoria == 4 || categoria ==5 ){
                    printf("\nSua conta atual possui X DESPESAS no montante de %i.%02i CAD \ncadastradas na categoria %i\n", despesa_total / 100, despesa_total % 100, categoria);
                    printf("  \n");
                //precisamos de uma definicao melhor de categoria, seja por menu ou string   
                
                }else{
                    printf("Opcao invalida!\n");
                }
                printf("Digite [ 1 ] para Continuar || Digite [ 2 ] para Sair: ");
                scanf("%i", &subOpcao);
            }          
            
            break;
        case 3:
            /*O sistema deve calcular o saldo atualizado a partir das transações registradas:
            ■ O saldo inicial pode ser zero ou definido pelo usuário.
            ■ As receitas aumentam o saldo e as despesas diminuem.
            ○ O sistema deve permitir ao usuário cadastrar uma meta financeira mensal.*/
            limparTela();
            int saldo = receita_total - despesa_total;
            printf("+---------------------------+\n");
            printf("|       SALDO ATUAL         |\n");
            printf("+---------------------------+\n");
            printf("| Receitas Totais: %i.%02i CAD |\n", receita_total / 100, receita_total % 100);
            printf("| Despesas Totais: %i.%02i CAD |\n", despesa_total / 100, despesa_total % 100);
            printf("|---------------------------|\n");
            printf("| Saldo Final:    %s%i.%02i CAD  |\n", saldo < 0 ? "-" : " ", abs(saldo) / 100, abs(saldo) % 100);
            printf("+---------------------------+\n");
            
            if (saldo > 0) {
                printf("\nPARABENS! Voce esta no positivo!\n");
            } else if (saldo < 0) {
                printf("\nATENCAO! Voce esta no vermelho!\n");
            } else {
                printf("\nSeu saldo esta zerado.\n");
            }
            printf("\n+_+_+_+_+_+_+_+_+ == META FINANCEIRA == +_+_+_+_+_+_+_+_+_+_+_\n"); 
            printf("Deseja cadastrar uma meta financeira?\n");
            printf("Digite [ 1 ] para SIM || Digite [ 2 ] para Sair: ");
            scanf("%d", &subOpcao);
            if (subOpcao == 1) {
                char nome_meta[100];
                int valor_meta;
                printf("Qual eh o nome da meta?: ");
                scanf(" %[^\n]", nome_meta);  // lê string com espaço
                printf("\nE qual eh o valor da meta financeira (Ex: digite 190000 para 1900.00 CAD: ");
                scanf("%d", &valor_meta);
                printf("Meta '%s' cadastrada com valor de %i.%02i CAD.\n", nome_meta, valor_meta / 100, valor_meta % 100);
            }
            printf("  \n");
            printf("\n+_+_+_+_+_+_+_+_+ == META FINANCEIRA == +_+_+_+_+_+_+_+_+_+_+_\n"); 
            printf("  \n");
            printf("\nPressione Enter para continuar...\n");
            while (getchar() != '\n');  // Limpar buffer
            getchar();  // Esperar Enter do usuário
            break;
            
        case 4:
            /*O sistema deve gerar relatórios que permitem visualizar:
            ■ Movimentação diária: lista de todas as transações de um dia específico.
            ■ Movimentação mensal: lista de todas as transações de um mês específico.
            ○ O sistema deve exibir gráficos de fluxo de caixa usando caracteres ASCII no console.*/
        while (subOpcao != 2){
            limparTela();
            printf("+_+_+_+_+_+_+_+_+== RELATORIO FINANCEIRO ==+_+_+_+_+_+_+_+_+_+_+_\n"); 
            printf("  \n");
            int saldo = receita_total - despesa_total;
            printf("\n=== RELATORIO FINANCEIRO ===\n");
            printf("Total de Receitas: %i.%02i CAD\n", receita_total / 100, receita_total % 100);
            printf("Total de Despesas: %i.%02i CAD\n", despesa_total / 100, despesa_total % 100);
            printf("Saldo Final: %i.%02i CAD\n", saldo / 100, saldo % 100);
            printf("============================\n");                 
        
            printf(" Gerar Relatorio\n");
            printf("Escolha uma opcao:\n");
            printf("1 - Exibir no Console\n");
            printf("2 - Salvar Relatorio\n");
            printf("Escolha: ");
            scanf("%i", &opcao);
        
            if (opcao == 1 || opcao == 2) {
                printf("gerarRelatorio(receita_total, despesa_total)");
            } else {
                printf("OPCAO INVALIDA!\n");
            }
            printf("  \n");
            printf("Digite [ 1 ] para Continuar || Digite [ 2 ] para Sair: ");
            scanf("%i", &subOpcao);
        }
            break;
        case 5:
            limparTela();
            printf("    [ 1 ] Francais\n");
            printf("    [ 2 ] English\n");
            printf("Choisissez/Choose: ");
            scanf("%d", &option);
            if(option == 1){
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
                }
            }if(option == 2){
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
                }  
            }else{
                printf("\nOpcao invalida!\n");
            }
            break;
        case 6:
            limparTela();
            printf("\n+=+=+=+=+=+=+=+=+=+=+=+=+=\nAguarde...\n");
            sleep(3);
            printf("\nAu revoir! Obrigado por interagir. Volte sempre!\n");
            break;
        default:
            limparTela();
            printf("OPCAO INVALIDA!");
    }
    }
    return 0;
}