#include <iostream>

using namespace std;
int sum(int lis[],int a){
    cout << "Ejercicio 1:" << endl;
    for(int x=0;x<4;x++){
        a+=lis[x];
        }
    cout<<"La suma de los elementos es:"<<a<<"\n\n";
    }
int promedio(int lis[],int cont,int su){
    cout << "Ejercicio 2:" << endl;
    for(int x=0;x<4;x++){
        cont+=lis[x];
        su++;
        }
    cout<<"El promedio de los elementos es:"<<cont/su<<"\n\n";
}
int invert(int lis[],int cont,int su){
    cout << "Ejercicio 3:" << endl;
    cout<<"La lista invertida es:";
    for(int x=0;x<2;x++){
        su=lis[cont];
        lis[cont]=lis[x];
        lis[x]=su;
        cont-=1;
    }
    for(int x=0;x<5;x++){
        cout<<lis[x]<<" ";
    }
}
int main()
{
    int lis1[4]={3,5,7,2};
    int lis2[9]={3,5,7,2,6,1,8,4,9};
    int lis3[5]={3,5,7,2,9};
    int lis4[5]={3,1,5,2,4};
    int lis5[5];
    sum(lis1,0);
    promedio(lis2,0,0);
    invert(lis3,4,0);


    cout << "Ejercicio 4:\n" << endl;
    int lis4[5]={3,1,5,2,4};
    int lis5[5];
    cont=0;
    for(x=0;x<5;x++){
        for(int y=0;y<5;y++)
    }
    return 0;
}

