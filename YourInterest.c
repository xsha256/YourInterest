#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    int choose = 1;
    do
    {

        printf("\n\033[0;32m1 => Simple Interest\n");
        printf("2 => Compound Interest\n");
        printf("3 => Exit\n");
        int choose = get_int("\033[0;34m\nTap your choose:  ");

        if (choose == 2)
        {
            printf("\033[0;33m\n==> You chose Compound Interest. <==\n");
            double APR_percent = get_float("\033[0;35m\n- %% APR:  ");

            double APR = APR_percent / 100;

            double interes = APR / 365;

            double n_coin = get_float("-- Coins to be staked:  ");

            double day = get_float("--- Staking days: ");

            double Potencia = pow(1 + interes, day);
            double total = n_coin * Potencia;
            double daily = n_coin * interes;
            double weekly;
            if (day > 7)
            {
                weekly = n_coin * interes * 7;
            }
            else
            {
                weekly = n_coin * interes * day;
            }

            double gain = total - n_coin;
            //!  %013.8lf  = en total 13 digitos 8 despues del punto
            printf("\n\033[0m");
            printf("+-------------------------------------------+\n");
            printf("| \033[0;33m=> Your initial amount: %013.8lf     \033[0m|\n", n_coin);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;34m=> Daily gains: %013.8lf             \033[0m|\n", daily);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;36m=> Weekly gains: %013.8lf            \033[0m|\n", weekly);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;31m=> Your total gains: %013.8lf        \033[0m|\n", gain);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;32m=> You'll have in total: %013.8lf    \033[0m|\n", total);
            printf("+-------------------------------------------+\n");
            printf("\n");
        }

        else if (choose == 1)
        {
            printf("\033[0;33m\n==> You chose Simple Interest. <==\n");
            double APR_percent = get_float("\033[0;35m\n- %% APR:  ");

            double APR = APR_percent / 100;

            double interes = APR / 365;

            double n_coin = get_float("-- Coins to be staked:  ");

            double day = get_float("--- Staking days:  ");

            double gain = n_coin * day * interes;
            double daily = n_coin * interes;
            double weekly;
            if (day > 7)
            {
                weekly = n_coin * interes * 7;
            }
            else
            {
                weekly = n_coin * interes * day;
            }

            double total = gain + n_coin;

              //!  %013.8lf  = en total 13 digitos 8 despues del punto
            printf(" \033[0m\n");
            printf("+-------------------------------------------+\n");
            printf("| \033[0;33m=> Your initial amount: %013.8lf     \033[0m|\n", n_coin);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;34m=> Daily gains: %013.8lf             \033[0m|\n", daily);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;36m=> Weekly gains: %013.8lf            \033[0m|\n", weekly);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;31m=> Your total gains: %013.8lf        \033[0m|\n", gain);
            printf("+-------------------------------------------+\n");
            printf("| \033[0;32m=> You'll have in total: %013.8lf    \033[0m|\n", total);
            printf("+-------------------------------------------+\n");
            printf("\n");
        }
        else if (choose == 3)
        {
            printf("\n\033[0;31mThank you, see you.\n");
            printf("Exiting...\033[0m\n");
            printf("\n");
            break;
        }

    } while (choose != 3);
}