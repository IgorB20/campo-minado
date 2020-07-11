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

  while(i<=1 || j<=1){
  cout<<"Insira o numero de linhas e colunas"<<endl;
  cin>>i>>j; //entrada de linhas e colunas
  }
  if (i>=2 && j>=2){
    while(bomb<2){ //entrada de bombas
        cout<<"Insira o numero de bombas"<<endl;
        cin>>bomb;
    }
    }

  }
 showField(i, j);
}
