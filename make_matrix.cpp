// i am making a matrix
#include<iostream>
using namespace std;
main(){
    int a[3][3],b[3][3],c[3][3],i,j;

    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            cout<<"enter value of a"<<i<<j<<": ";
           cin>>a[i][j];
 

        }
    }
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            
           cout<<a[i][j];
           cout<<"   ";
          
           


        }
        cout<<"\n";
    }
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            cout<<"enter value of b"<<i<<j<<": ";
           cin>>b[i][j];


        }
    }
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
           
           cout<<b[i][j];
           cout<<"   ";
           
           


        }
        cout<<"\n";
    }
        cout<<"\n";
        cout<<"\n";

    cout<<"the addition of matrices is: \n";
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            cout<<a[i][j]+b[i][j];
            cout<<"   ";

        }
        cout<<"\n";
        cout<<"\n";

    }

}