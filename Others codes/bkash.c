#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,a1,a3,s[1000];
    float a2;
    printf("bkash\n1 Send Money\n2 Buy Airtime \n3 Payment  \n4 Cash Out \n5 Remittence\n6 My bkash \n7 Helpline\n\n\n");
    printf("-------------------------\nCancel  send\n");

    scanf("%d",&x);
    system("CLS");
    if(x==1)
        printf("Enter receiver bkash account No:\n-------------------------\nCancel  send\n");
    else if(x==2)
        printf("bkash\n1.Robi\n2 Airtel\n3 Banglalink\n4 Grameenphone\n5 Teletalk\n0 Main manu\n-------------------------\nCancel  send\n");
    else if(x==3)
        printf("Merchant bkash Account No:\nCancel  send\n");
    else if(x==4)
        printf("bkash\n1 From Agent\n2 From ATM\n0 Main Menu\n-------------------------\nCancel  send\n");
    else if(x==5)
        printf("bkash\nWestern Union\n0 Main Menu\n-------------------------\nCancel  send\n");
    else if(x==6)
        printf("bkash\n1 Check balance\n2 Change Mobile Menu PIN\n3 Activate ATM\n4 Change ATM PIN\n0 Main Menu\n-------------------------\nCancel  send\n");
    return 0;
}

