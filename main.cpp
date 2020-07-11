#include <iostream>
#include <time.h>
using namespace std;

//mostra o campo do jogo na tela
void showField(int linhas, int colunas){
    //- = campo vazio
    //x = bomba
    cout << "Campo: " << endl;
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "- ";
        }
        cout << endl;
    }
}

int main(){
  int i,j,bomb,bomb2;

  cout<<"Insira o numero de linhas"<<endl;
  cin>>i;
  cout<<"Insira o numero de colunas"<<endl;
  cin>>j;
  if (i==2&&j==2){
    bomb=2;
  }else if (i>2 && j>2){
    while(bomb>2){
        cout<<"Insira o numero de bombas"<<endl;
        cin>>bomb2;
        bomb=bomb+bomb2;
    }

  }
 showField(i, j);
}
