#define period 10
#define principal 5500.00
main()
{
    int year;
    float amount,inrate,value;
    year =1;
    amount=principal;
    inrate=.12;
    printf("year  amount\n");
    while(year<=period)
    {
        printf("%d     %.2f\n",year,amount);
        value=amount+amount*inrate;
        year=year+1;
        amount=value;
    }

  return 0;
}
