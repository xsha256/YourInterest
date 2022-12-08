#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void) 
{

    int choose = 1;
    do
    {

        printf("If is Compound Interest tap 1, Simple Interest tap 2 or tap 3 to Exit.\n");
        int choose = get_int ("Tap your choose:  ");

        if (choose == 1)
        {
            printf("\n==> You chose Compound Interest. <==\n");
            double APR_percent = get_float ("\n- %% APR per year:  ");

            double APR = APR_percent / 100;

            double interes = APR / 365;

            double n_coin = get_float ("-- Coins to be staked:  ");

            double day = get_float ("--- Staking days:  ");

            double Potencia = pow(1 + interes,day);
            double total = n_coin * Potencia;
            double gain = total - n_coin;
            printf ("\n");
            printf ("***************************************\n");
            printf ("*  You'll have in total: %.8lf   *\n", total);
            printf ("***************************************\n");
            printf ("*       Your gains: %.8lf        *\n", gain);
            printf("***************************************\n");
            printf ("\n");
        } 

        else if (choose == 2)
        {
            printf("\n==> You chose Simple Interest. <==\n");
            double APR_percent = get_float ("\n- %% APR per year:  ");

            double APR = APR_percent / 100;

            double interes = APR / 365;

            double n_coin = get_float ("-- Coins to be staked:  ");

            double day = get_float ("--- Staking days:  ");

            double gain = n_coin * day * interes;

            printf ("\n");
            printf ("***************************************\n");
            printf ("*  Your staked coins: %.8lf     *\n", n_coin);
            printf ("***************************************\n");
            printf ("*       Your gains: %.8lf        *\n", gain);
            printf("***************************************\n");
            printf ("\n");
        }
        else if (choose == 3)
        {
            printf ("Thank you, see you.\n");
            printf ("Exiting...\n");
            break;
        }

        
    } 
    while (choose != 3);

}