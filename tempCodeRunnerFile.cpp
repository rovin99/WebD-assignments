#include<bits/stdc++.h>
using namespace std;

int main(){


    int space=4;

    for(int i=1;i<=5;i++){

        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        if(i>1){

            for(int x=1;x<=i-1;x++){
                cout<<"*";
            }
        }
        cout<<endl;
        space--;
    }
     int star=5;

    for(int i=1;i<=5;i++){

        if(i>1){
            for(int x=1;x<=i-1;x++){
                cout<<" ";
            }
        }       
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        if(i!=5){
            for(int k=1;k<=star-1;k++){
                cout<<"*";
            }
        }
        cout<<endl;
        star--;

    }
    
    for(int i=1;i<=5;i++){

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=4;i>=1;i--){

        for(int j=1;j<=i)
    }


}