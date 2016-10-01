//Can't find out the roots

#include <iostream>
#include<math.h>
using namespace std;

class complex{
        public:
                double re1=0,re2=0,im1=0,im2=0; //Fixed
};

class quadratic {
        public:
                double a,b,c;   //Fixed
                quadratic() {
                                a=0;
                                b=0;
                                c=0;
                }

                quadratic operator+(const quadratic &op){
                                quadratic temp;
                                temp.a=a+op.a;
                                temp.b=b+op.b;
                                temp.c=c+op.c;
                                return temp;
                }

                int val(int x){
                                return (a*x*x + b*x + c);
                }

                complex root(){ 
                        complex temp;
                        int t;
                        t=(b*b-4*a*c);      //Fixed
                        cout << t << '\n';
                        if(t>=0)
                        {
                                temp.re1=(-b+sqrt(t))/(2*a);
                                temp.re2=(-b-sqrt(t))/(2*a);
                        }
                       }

                        else
                        {
                                temp.re1=-b/(2*a);
                                temp.re2=-b/(2*a);
                                temp.im1=sqrt(-t)/(2*a);
                                temp.im2=-sqrt(-t)/(2*a);
                        }
                        return temp;    // Fixed
                }
};



ostream& operator<<(ostream& os, const quadratic &op){
        os<<"\n"<<op.a<<"x^2 + "<<op.b<<"x + "<<op.c;
}

istream& operator >>(istream& is, quadratic &op){
        is>>op.a>>op.b>>op.c;
}

ostream& operator<<(ostream& os, complex& c){
                if(c.im1==0)
                        os<<c.re1;
                else
                        os<<c.re1<<" + "<<c.im1<<"i";
                if(c.im2==0)
                        os<<"  and  "<<c.re2;
                else
                        os<<"  and  "<<c.re2<<" + "<<c.im2<<"i";
}

int main() {
        int x;
        complex rt;
        quadratic q1,q2,res,q,eq;
        /*//cout<<"\nEnter the co-eff of ax^2 + bx + c of polynomimal1 ";
        cin>>q1;
        //cout<<"Polynomial1:  "<<q1;
                //cout<<"\nEnter the co-eff of ax^2 + bx + c of polynomial2 ";
        cin>>q2;
        //cout<<"Polynomial2:  "<<q2;
        res=q1+q2;
        //cout<<"\n\t"<<q1<<"\n(+)"<<q2<<"\n = "<<res<<endl;
        //cout<<"\nEnter the co-eff of ax^2 + bx + c and value of x";
        cin>>q>>x;
        //cout<<"\nFor x = "<<x<<"\nValue of polynomial "<<q<<" = "<<q.val(x)<<endl;
        //cout<<"\nEnter the co-eff of ax^2 + bx + c = 0";*/
        cin>>eq;
        rt=eq.root();
        cout<<endl<<rt;
        return 0;
}
