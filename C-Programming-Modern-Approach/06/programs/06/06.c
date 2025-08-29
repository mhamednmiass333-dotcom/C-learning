#include<stdio.h>

int main()
{
    int command;
    float balance, credit, debit = 0;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

    for(;;){
        printf("Enter command : ");
        scanf("%d", &command);
        switch(command){
            case 0 : 
                balance = 0;
                break;
            case 1 :
                printf("Enter amount of credit : ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2 :
                printf("Enter amount of debit : ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3 :
                printf("Current balance : %g\n", balance);
                break;
            case 4 :
                return 0;
            default : printf("Invalide command\n");
        }
    }
}


