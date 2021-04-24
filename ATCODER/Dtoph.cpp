/**#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double x,y,z,s1,s2,s3,x1,y1,z1,g,d,e,c1,c2,c3;
        scanf("%lf %lf %lf",&x,&y,&z);
        y1=sqrt(y);
        z1=sqrt(z);
        c1=sqrt((y1*y1)+(z1*z1)-(2*y1*z1*.5));
        s1=(y1+z1+c1)/2;
        g=sqrt(s1*(s1-y1)*(s1-z1)*(s1-c1));

        ///d
        x1=sqrt(x);
        c2=sqrt((x1*x1)+(z1*z1)-(2*x1*z1*.5));
        s2=(x1+z1+c2)/2;
        d=sqrt(s2*(s2-x1)*(s2-z1)*(s2-c2));
        ///e
        c3=sqrt((x1*x1)+(y1*y1)-(2*x1*y1*.5));
        s3=(x1+y1+c3)/2;
        e=sqrt(s3*(s3-x1)*(s3-y1)*(s3-c3));
        printf("%.10f\n",x+y+z+(g*2.0)+d+e);
        //cout<<s1<<" "<<s2<<" "<<s3;
    }
    return 0;
}**/

double sqrtt(double n) {
    if(n<0.0)
        return 0.0;
    else
        return sqrt(n);
}

double acoss(double n) {
    if(n>=1.0)
        return acos(1.0);
    else if(n<=-1.0)
        return acos(-1.0);
    else
        return acos(n);
}

double triangle_area(double a, double b, double c) {
    double s=(a+b+c)/2.0;
    return sqrtt(s*(s-a)*(s-b)*(s-c));
}

double triangle_angle(double a, double b, double c) {
    return acoss((b*b+c*c-a*a)/(b*c*2.0));
}

double sinn(double x) {
	double y = sin(x);
	if(y < 0.0) return 0.0;
	return y;
}

double pi;

int solve() {
	pi = acos(-1.0);
	//cout << pi << endl;
    double a = Din(), b = Din(), c = Din();
    double ans = a + b + c;
    c = sqrtt(c), b = sqrtt(b), a = sqrtt(a);
    if(a > b + c || b > a + c || c > a + b) return printf("0.0\n");
    double g = triangle_area(a, b, c);
    ans += g;

    double angled = triangle_angle(b, a, c);

    double anglee = triangle_angle(c, a, b) ;

    double anglef = triangle_angle(a, b, c) ;



    double d = a * c * sinn(angled) / 2.0;
    double e = a * b * sinn(anglee) / 2.0;
    double f = b * c * sinn(anglef) / 2.0;

    ans += d + e + f;


    printf("%.10f\n", ans);



    return 0;
}

int main() {
    int test = in(), tc = 0;
    while(test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}





