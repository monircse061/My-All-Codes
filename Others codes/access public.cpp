#include<bits/stdc++.h>
using namespace std;
class  student1
{
public:
    int y;
    virtual void s1()=0;

};
class info:public student1{
public:
    int x;
    void s1()
    {cout<<"info"<<endl;
    }
};
 int main()
        {
            info ob1;

            //ob.s1();
            //cout<<ob.y<<endl;
            //ob.x=3;
            //cout<<ob.x<<endl;
            student1 *ptr;
            ptr=&ob1;
            ptr->s1();
            //cout<<ptr->y<<endl;**/
            return 0;
        }
