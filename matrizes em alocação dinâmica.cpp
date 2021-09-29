#include    <iostream>
#include    <cstdlib>
using namespace std;
int main(){
    int linhas,colunas;
    cout<<"Digite a quantidade de linhas:"<<endl;
    cin>>   linhas;
    cout<<"Digite a quantidade de colunas: "<<endl;
    cin>>   colunas;
    
    int** matriz= new int*[linhas];         /*  pra alocar dinamicamente usa 
                                                essa função:        
                                                new  "tipo da variável" 
                                                "a quantidade de ponteiros" [tamanho do vetor]      */
    for (int i=0;i<colunas;i++){            /*  como é um array de duas dimensões ( matriz) 
                                                é necessário fazer um loop pra alocar as colunas
                                                funciona assim:   
                                                "nome da variável que está sendo 
                                                alocada"[o iterador do loop] = 
                                                new "tipo da variável" [a quantidade de colunas];   */
        matriz[i]=new int[colunas];         
                                            /*  por padrão,  a quantidade de ponteiros nos tipos 
                                                das vaiáveis diminui em 1 para cada alocação feita  */
    }
    cout<<"digite um número: " << endl;
     for (int i=0;i<linhas;i++)
        for (int j=0;j<colunas;j++){
            cin >> matriz[i][j];
        }
    cout<< "aqui está o resultado:"<<endl;
    for (int i=0;i<linhas;i++){
        for (int j=0;j<colunas;j++){
            cout<< matriz[i][j]<< " ";
        }
        cout<<"\n";
    }
    cout<< "O codigo chegou ao fim!" ;
    abort();
}