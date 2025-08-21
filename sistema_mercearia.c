#include <stdio.h>
#include <math.h> // Para usar a função "fabsf" e lidar com a margem de erro de valores decimais.

int main() {

    int operacao_menu_principal, operacao_menu_alimentos, operacao_menu_limpeza, operacao_menu_padaria, operacao_menu_pagamento, operacao_cartao;
    int quantidade, produtos_totais = 0, quantidade_limpeza = 0, quantidade_alimento = 0, quantidade_padaria = 0;
    int vendas = 0;
    float preco_limpeza = 0, preco_alimento = 0, preco_padaria = 0;
    float total = 0, quantia_a_pagar = 0, quantia_paga = 0,   lucro = 0;

    do { // Loop do menu principal, para que ele seja exibido pelo menos uma vez e continue rodando até que o usuário escolha a opção de sair.

        //  Mostra o Menu Principal.
        printf("\n******** MENU PRINCIPAL ********\n");
        printf("--------------------------------------\n");
        printf("(1) VENDA DE MATERIAL DE LIMPEZA\n");
        printf("--------------------------------------\n");
        printf("(2) VENDA DE ALIMENTOS\n");
        printf("--------------------------------------\n");
        printf("(3) PADARIA\n");
        printf("--------------------------------------\n");
        printf("(4) PAGAMENTO\n");
        printf("--------------------------------------\n");
        printf("(5) SAIR\n");
        printf("--------------------------------------\n");
        printf("SELECIONE A OPCAO DESEJADA:");
        scanf("%d", &operacao_menu_principal); // Lê a opção escolhida pelo usuário para o menu principal.



        switch (operacao_menu_principal) {   //  Exibe o menu/opção que o usuário escolheu no menu principal.

            case 1: { // Exibe o menu de vendas da limpeza.

                do { // Permite que o usuário adicione múltiplos itens antes de voltar.

                    printf("               MATERIAL DE LIMPEZA \n");
                    printf("------------------------------------------------- \n");
                    printf("(10) DETERGENTE R$ 1.99\n " );
                    printf("------------------------------------------------- \n");
                    printf("(11) SABAO EM PO(1KG)  R$ 8.99\n");
                    printf("------------------------------------------------- \n");
                    printf("(12) ESPONJA  R$ 1.50\n");
                    printf("------------------------------------------------- \n");
                    printf("(13) AMACIANTE(1L)  R$ 15.00\n\n");
                    printf("------------------------------------------------- \n");
                    printf("(14) VOLTAR AO MENU PRINCIPAL\n");
                    printf("------------------------------------------------- \n");
                    printf("DIGITE A OPCAO DESEJADA \n");
                    scanf("%d", &operacao_menu_limpeza);

                    switch (operacao_menu_limpeza) { // para processar a escolha do produto de limpeza.

                        case 10: // Opção para Detergente.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_limpeza += quantidade; // Acumula a variável "quantidade_limpeza" o valor da variável "quantidade"
                            preco_limpeza += (float) quantidade * 1.99; // Acumula a variável "preco_limpeza" o valor da unidade vezes o preço do produto
                            break;
                        case 11: // Opção para Sabão em Pó.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_limpeza += quantidade;
                            preco_limpeza += (float) quantidade * 8.99;
                            break;
                        case 12: // Opção para Esponja.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_limpeza += quantidade;
                            preco_limpeza += (float) quantidade * 1.50;
                            break;
                        case 13: // Opção para Amaciante.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_limpeza += quantidade;
                            preco_limpeza += (float) quantidade * 15.00;
                            break;
                        case 14: // Opção para voltar.
                            break;
                        default: // Opção inválida.
                            printf("A OPCAO DIGITADA NAO E VALIDA!!!\n\n");
                    }
                } while (operacao_menu_limpeza != 14); // O menu vai continuar até o usuário escolher sair
            }
            break;

            case 2: { // Exibe o menu de vendas dos alimentos.

                do { // Loop para o menu de alimentos.
                    printf("              VENDA DE ALIMENTOS \n");
                    printf("------------------------------------------------- \n");
                    printf("(20) CAFE R$ 19.99\n");
                    printf("------------------------------------------------- \n");
                    printf("(21) LEITE (CX) R$ 5.90\n");
                    printf("------------------------------------------------- \n");
                    printf("(22) ARROZ (1KG) R$ 4.50\n");
                    printf("------------------------------------------------- \n");
                    printf("(23) FEIJAO PRETO (1KG) R$ 8.00\n");
                    printf("------------------------------------------------- \n");
                    printf("(24) ACUCAR (1KG) R$ 5.00\n");
                    printf("------------------------------------------------- \n");
                    printf("(25) VOLTAR AO MENU PRINCIPAL\n");
                    printf("------------------------------------------------- \n");
                    printf("DIGITE A OPCAO DESEJADA \n");
                    scanf("%d", &operacao_menu_alimentos);

                    switch (operacao_menu_alimentos) {
                        case 20: // Opção para Café.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_alimento += quantidade;
                            preco_alimento += (float) quantidade * 19.99;
                            break;
                        case 21: // Opção para Leite.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_alimento += quantidade;
                            preco_alimento += (float) quantidade * 5.90;
                            break;
                        case 22: // Opção para Arroz.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_alimento += quantidade;
                            preco_alimento += (float) quantidade * 4.50;
                            break;
                        case 23: // Opção para Feijão.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_alimento += quantidade;
                            preco_alimento += (float) quantidade * 8.00;
                            break;
                        case 24: // Opção para Açúcar.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_alimento += quantidade;
                            preco_alimento += (float) quantidade * 5.00;
                            break;
                        case 25: // Opção para voltar.
                            break;
                        default: // Opção inválida.
                            printf("A OPCAO DIGITADA NAO E VALIDA!!!\n\n");
                    }
                } while (operacao_menu_alimentos != 25); // O loop continua enquanto a opção 25 não for selecionada.
            }
            break;

            case 3: { // Exibe o menu de vendas da padaria.

                do {
                    printf("                  PADARIA \n");
                    printf("------------------------------------------------- \n");
                    printf("(30) PAO DE FORMA R$ 9.50\n");
                    printf("------------------------------------------------- \n");
                    printf("(31) PAO INTEGRAL R$ 12.50\n");
                    printf("------------------------------------------------- \n");
                    printf("(32) PAO FRANCES (UNI) R$ 1.90\n");
                    printf("------------------------------------------------- \n");
                    printf("(33) SONHO R$ 8.50\n");
                    printf("------------------------------------------------- \n");
                    printf("(34) VOLTAR AO MENU PRINCIPAL\n");
                    printf("------------------------------------------------- \n");
                    printf("DIGITE A OPCAO DESEJADA \n");
                    scanf("%d", &operacao_menu_padaria);

                    // para processar a escolha dos itens da padaria.
                    switch (operacao_menu_padaria) {

                        case 30: // Opção para Pão de Forma.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_padaria += quantidade;
                            preco_padaria += (float) quantidade * 9.50;
                            break;
                        case 31: // Opção para Pão Integral.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_padaria += quantidade;
                            preco_padaria += (float) quantidade * 12.50;
                            break;
                        case 32: // Opção para Pão Francês.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_padaria += quantidade;
                            preco_padaria += (float) quantidade * 1.90;
                            break;
                        case 33: // Opção para Sonho.
                            printf("DIGITE A QUANTIDADE DESEJADA:\n");
                            scanf("%d", &quantidade);
                            quantidade_padaria += quantidade;
                            preco_padaria += (float) quantidade * 8.50;
                            break;
                        case 34: // Opção para voltar.
                            break;
                        default: // Opção inválida.
                            printf("A OPCAO DIGITADA NAO E VALIDA!!!\n\n");
                    }
                } while (operacao_menu_padaria != 34); // O loop continua enquanto a opção 34 não for selecionada.
            }
            break;

            case 4: {
                // Exibe o menu de pagamento.

                do {
                    //  Mostra uma visão geral das compras.
                    printf("\n--------------------------------------\n");
                    printf("       MENU DE PAGAMENTOS        \n");
                    printf("--------------------------------------\n");
                    printf("LIMPEZA (UNI) = %d\n", quantidade_limpeza);
                    printf("LIMPEZA (PRECO) = R$%.2f\n", preco_limpeza);
                    printf("--------------------------------------\n");
                    printf("ALIMENTO (UNI) = %d\n", quantidade_alimento);
                    printf("ALIMENTO (PRECO) = R$%.2f\n", preco_alimento);
                    printf("--------------------------------------\n");
                    printf("PADARIA (UNI) = %d\n", quantidade_padaria);
                    printf("PADARIA (PRECO) = R$%.2f\n", preco_padaria);
                    printf("--------------------------------------\n");

                    // mostra o total de produtos em valor e quantidade.
                    total = preco_alimento + preco_padaria + preco_limpeza;
                    produtos_totais = quantidade_alimento + quantidade_padaria + quantidade_limpeza;

                    printf("QUANTIDADE DE PRODUTOS = %d\n", produtos_totais);
                    printf("TOTAL = R$%.2f", total);
                    printf("\n--------------------------------------\n");

                    // Formas de Pagamento.
                    printf("FORMAS DE PAGAMENTO\n");
                    printf("(1) = DINHEIRO\n");
                    printf("(2) = CARTAO\n");
                    printf("--------------------------------------\n");
                    printf("(3) VOLTAR AO MENU PRINCIPAL");
                    printf("\n--------------------------------------\n");
                    printf("DIGITE A OPCAO DESEJADA:");
                    scanf("%d", &operacao_menu_pagamento);

                    switch (operacao_menu_pagamento) { // Mostra o modo de pagamento em dinheiro e cartão, assim como descontos.


                        case 1:{// Pagamento em Dinheiro.
                            // Descontos.
                            if (total > 0 && total <= 50) { // Desconto de 5% para compras até R$ R$ 50.
                                quantia_a_pagar = total - (total * 5) / 100;
                                printf("TOTAL DO PEDIDO (COM DESCONTO DE 5%%) = R$%.2f\n", quantia_a_pagar);
                                printf("INSIRA O VALOR A SER PAGO: R$");
                                scanf("%f", &quantia_paga);


                                if (quantia_paga >= quantia_a_pagar || fabsf(quantia_paga - quantia_a_pagar) < 0.001) { // Verifica se a quantia paga é suficiente, e depois lida com a imprecisão de valores decimais.
                                    float troco = quantia_paga - quantia_a_pagar;   // Mostra o troco
                                    printf("SEU TROCO E R$ %.2f\n", troco );
                                    printf("--------------------------------------\n");


                                    lucro += quantia_a_pagar; // Antes de zerar as variáveis para a próxima venda, adiciona o valor da venda a quantidade de lucros.

                                    quantidade_limpeza = 0;  // Zera as variáveis para uma nova compra.
                                    quantidade_alimento = 0;
                                    quantidade_padaria = 0;
                                    preco_limpeza = 0;
                                    preco_padaria = 0;
                                    preco_alimento = 0;

                                    printf("\nOBRIGADO PELA SUA COMPRA\n");

                                    vendas++; // Adiciona uma venda.


                                }else { // caso o valor pago seja menor do que o valor da compra, retorna o valor que falta.
                                    printf("AINDA FALTAM R$ %.2f\n",  quantia_a_pagar - quantia_paga);


                                }

                            } else if (total > 50 && total < 100) { // Desconto de 10% para compras entre R$ 50.01 e R$ 99.99.
                                quantia_a_pagar = total - (total * 10) / 100;
                                printf("TOTAL DO PEDIDO (COM DESCONTO DE 10%%) = R$%.2f\n", quantia_a_pagar);
                                printf("INSIRA O VALOR A SER PAGO: R$");
                                scanf("%f", &quantia_paga);

                                if (quantia_paga >= quantia_a_pagar || fabsf(quantia_paga - quantia_a_pagar) < 0.001) {
                                    float troco = quantia_paga - quantia_a_pagar;
                                    printf("SEU TROCO E R$ %.2f\n", troco );
                                    printf("--------------------------------------\n");

                                    lucro += quantia_a_pagar;

                                    quantidade_limpeza = 0;
                                    quantidade_alimento = 0;
                                    quantidade_padaria = 0;
                                    preco_limpeza = 0;
                                    preco_padaria = 0;
                                    preco_alimento = 0;


                                    printf("\nOBRIGADO PELA SUA COMPRA\n");

                                    vendas++; // adiciona uma venda.


                                }else {
                                    printf("AINDA FALTAM R$ %.2f\n",  quantia_a_pagar - quantia_paga);


                                }

                            } else if (total >= 100) { // Desconto de 18% para compras acima de R$ 100.
                                quantia_a_pagar = total - (total * 18) / 100;
                                printf("TOTAL DO PEDIDO (COM DESCONTO DE 18%%) = R$%.2f\n", quantia_a_pagar);
                                printf("INSIRA O VALOR A SER PAGO: R$");
                                scanf("%f", &quantia_paga);

                                if (quantia_paga >= quantia_a_pagar || fabsf(quantia_paga - quantia_a_pagar) < 0.001) {
                                    float troco = quantia_paga - quantia_a_pagar;
                                    printf("SEU TROCO E R$ %.2f\n", troco);
                                    printf("--------------------------------------\n");

                                    lucro += quantia_a_pagar;

                                    quantidade_limpeza = 0;
                                    quantidade_alimento = 0;
                                    quantidade_padaria = 0;
                                    preco_limpeza = 0;
                                    preco_padaria = 0;
                                    preco_alimento = 0;


                                    printf("\nOBRIGADO PELA SUA COMPRA!!!\n\n");

                                    vendas++;


                                }else {
                                    printf("AINDA FALTAM R$ %.2f\n",  quantia_a_pagar - quantia_paga);


                                }
                            } else { // Caso nenhum item tenha sido comprado).
                                printf("\nVOCE NAO COMPROU NENHUM PRODUTO\n");
                            }
                        }
                            break; // break da opção pagamento com dinheiro

                        case 2: // Pagamento com Cartão.

                            if (total == 0) { // Verifica se algum item foi comprado
                                printf("VOCE NAO COMPROU NENHUM ITEM");

                            } else { // Caso algum item tenha sido comprado, a condição abre o menu de pagamento com cartão.
                                printf("PAGAMENTO COM CARTAO\n");
                                printf("---------------------\n");
                                printf("(1) PAGAMENTO OK\n");
                                printf("(2) PAGAMENTO NAO OK\n");
                                printf("DIGITE AQUI:");
                                scanf("%d", &operacao_cartao);

                                if (operacao_cartao == 1) { // Simula uma transação bem-sucedida.
                                    printf("\nCOMPRA CONCLUIDA!!\n");


                                    lucro += total; // Adiciona a variável lucro o valor total sem descontos.

                                    quantidade_limpeza = 0; // Zera as variáveis para nova compra.
                                    quantidade_alimento = 0;
                                    quantidade_padaria = 0;
                                    preco_limpeza = 0;
                                    preco_padaria = 0;
                                    preco_alimento = 0;

                                    vendas++;


                                }else if (operacao_cartao == 2) { // Simula um erro na transação.
                                    printf("\nERRO NA TRANSACAO!!\n");


                                }else {
                                    printf("\nDIGITE UMA OPCAO VALIDA!!\n"); // Caso a opção digitada não exista.
                                }
                            }
                            break; // Break da opção venda com cartão.

                        case 3:
                            break; // break pra encerrar o loop

                        default:
                            printf("OPCAO INVALIDA!!"); // caso o usuário digite uma opção inexistente.
                    }
                }while (operacao_menu_pagamento != 3); // Encerra o loop do menu de pagamento.
            }
                break;


            case 5: // Caso o usuário escolha a opção 5 no menu principal: Sair. O loop principal é encerrado.
                break;

            default: // Caso o usuário digite uma opção inexistente no menu principal.
                printf("OPCAO INVALIDA!!\n\n");
        }
    } while (operacao_menu_principal != 5); // O menu principal continua até a opção de sair ser selecionada.

    printf("--------------------------------------\n");
    printf("    VENDAS TOTAIS: %i\n", vendas); // Mostra o número total de vendas realizadas.
    printf("    LUCROS TOTAIS: R$%.2f\n", lucro); // Mostra os lucros.
    printf("--------------------------------------\n");

    return 0;
}