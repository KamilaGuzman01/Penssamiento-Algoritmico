#include <iostream>
using namespace std;
int main()
{
    int t1=0;
    int t2=0;
    int t3=0;
    int t4=0;
    int t5=0;
    int t6=0;
    int t7=0;
    int td=0;
    int tt=0;
    cout<<"Ingrese la temperatura maxima del dia 1:\n";
    cin>>t1;
    cout<<"Ingrese la temperatura maxima del dia 2:\n";
    cin>>t2;
    cout<<"Ingrese la temperatura maxima del dia 3:\n";
    cin>>t3;
    cout<<"Ingrese la temperatura maxima del dia 4:\n";
    cin>>t4;
    cout<<"Ingrese la temperatura maxima del dia 5:\n";
    cin>>t5;
    cout<<"Ingrese la temperatura maxima del dia 6:\n";
    cin>>t6;
    cout<<"Ingrese la temperatura maxima del dia 7:\n";
    cin>>t7;
    cout<<"Calculando\n";
    cout<<t1+t2+t3+t4+t5+t6,t7;
    td=t1+t2+t3+t4+t5+t6+t7;
    if (td<30){
        cout<<"\n";
    }else {
        cout<<"\n";
    }
    cout<<"Resultado:\n";
    cout<<td/7;
    tt=td/7;
    if(tt>30){
            cout<<"\nSemana calurosa :(";
    }else {
        cout<<"\nSemana templada :)";
    }
    
    

    
    

    return 0;
}