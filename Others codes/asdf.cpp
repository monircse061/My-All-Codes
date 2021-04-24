if(n==10)
            {
                for(i=0; i<10; i++)
                {
                    for(int k=0; k<=10; k++)
                        c[k]=0;


                    for(j=0; j<10; j++)
                    {
                        c[a[i][j]]++;
                    }
                    int f=1;
                    for(j=0; j<=10; j++)
                    {
                        if(c[j]>1)
                          {
                              f=0;
                              break;
                          }
                    }
                    if(f==1)
                        cheak++;
                }
                cout<<"oooooooooooooooooooooooooooooooooooo\n";
                cout<<cheak<<endl;
