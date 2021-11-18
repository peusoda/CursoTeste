#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuleiro(char houses[3][3])
{
    system("cls");
    printf("\t   1   2   3 \n");
    printf("\t 1 %c | %c | %c \n", houses[0][0], houses[0][1], houses[0][2]);
    printf("\t  ------------ \n");
    printf("\t 2 %c | %c | %c \n", houses[1][0], houses[1][1], houses[1][2]);
    printf("\t  ------------ \n");
    printf("\t 3 %c | %c | %c \n", houses[2][0], houses[2][1], houses[2][2]);
}
int main()
{
    char houses[3][3] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}};
    char answer;
    int cont_turn, line, col, turn = 0, i, j, contfX = 0, contfO = 0;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        cont_turn = 1;
        for(i = 0; i <= 2; i++)
        {
            for(j = 0; j <= 2; j++)
            {
                houses[i][j] = ' ';
            }
        }
        do
        {
            tabuleiro(houses);
            if(turn % 2 == 0)
            {
                printf("Jogador X\n");
            }
            else
            {
                printf("Jogador O\n");
            }
            inicio:
            printf("Informe qual linha você quer jogar: \n");
            scanf("%i", &line);
            printf("Informe qual coluna você quer jogar: \n");
            scanf("%i", &col);
            if(line < 1 || col < 1 || line > 3 || line > 3)
            {
                line = 0;
                col = 0;
                printf("Linha ou Coluna Inválida!\n");
                goto inicio;
            }
            else if(houses[line - 1][col - 1] != ' ')
            {
                line = 0;
                col = 0;
                printf("Linha ou Coluna já Ocupada, escolha outra!\n");
                goto inicio;
            }
            else
            {
                if(turn % 2 == 0)
                {
                    houses[line - 1][col - 1] = 'X';
                }
                else
                {
                    houses[line - 1][col - 1] = 'O';
                }
                turn++;
                cont_turn++;
            }
            if(houses[0][0] == 'X' && houses[0][1] == 'X' && houses[0][2] == 'X'){cont_turn = 11;}
            if(houses[1][0] == 'X' && houses[1][1] == 'X' && houses[1][2] == 'X'){cont_turn = 11;}
            if(houses[2][0] == 'X' && houses[2][1] == 'X' && houses[2][2] == 'X'){cont_turn = 11;}
            if(houses[0][0] == 'X' && houses[0][1] == 'X' && houses[0][2] == 'X'){cont_turn = 11;}
            if(houses[0][0] == 'X' && houses[1][0] == 'X' && houses[2][0] == 'X'){cont_turn = 11;}
            if(houses[0][1] == 'X' && houses[1][1] == 'X' && houses[2][1] == 'X'){cont_turn = 11;}
            if(houses[0][2] == 'X' && houses[1][2] == 'X' && houses[2][2] == 'X'){cont_turn = 11;}
            if(houses[0][0] == 'X' && houses[1][1] == 'X' && houses[2][2] == 'X'){cont_turn = 11;}
            if(houses[0][2] == 'X' && houses[1][1] == 'X' && houses[2][0] == 'X'){cont_turn = 11;}

            if(houses[0][0] == 'O' && houses[0][1] == 'O' && houses[0][2] == 'O'){cont_turn = 12;}
            if(houses[1][0] == 'O' && houses[1][1] == 'O' && houses[1][2] == 'O'){cont_turn = 12;}
            if(houses[2][0] == 'O' && houses[2][1] == 'O' && houses[2][2] == 'O'){cont_turn = 12;}
            if(houses[0][0] == 'O' && houses[0][1] == 'O' && houses[0][2] == 'O'){cont_turn = 12;}
            if(houses[0][0] == 'O' && houses[1][0] == 'O' && houses[2][0] == 'O'){cont_turn = 12;}
            if(houses[0][1] == 'O' && houses[1][1] == 'O' && houses[2][1] == 'O'){cont_turn = 12;}
            if(houses[0][2] == 'O' && houses[1][2] == 'O' && houses[2][2] == 'O'){cont_turn = 12;}
            if(houses[0][0] == 'O' && houses[1][1] == 'O' && houses[2][2] == 'O'){cont_turn = 12;}
            if(houses[0][2] == 'O' && houses[1][1] == 'O' && houses[2][0] == 'O'){cont_turn = 12;}
        }while(cont_turn <= 9);
        tabuleiro(houses);
        if(cont_turn == 10)
        {
            printf("Velha (Empate)\n");
        }
        if(cont_turn == 11)
        {
           printf("Jogador X Venceu!\n");
           contfX++;
        }
        if(cont_turn == 12)
        {
            printf("Jogador O Venceu!\n");
            contfO++;
        }
        printf("Deseja Jogar Novamente? (S / N): \n");
        scanf("%s", &answer);
    } while(answer == 'S');
    printf("O Jogador X venceu %d partidas.\n", contfX);
    printf("O Jogador O venceu %d partidas.\n", contfO);
    printf("Fim do Jogo\n");
    system("pause");
    return 0;
}