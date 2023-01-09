#ifndef PILHA_H
#define PILHA_H

using namespace std;
template<class T>
class Pilha
{      
    private:
        Lista<T> elemento;
        int tam;
    public:
        Pilha(int t=15){
            tam=t;
        }
        ~Pilha(){}
        void inserir_elemento_na_pilha_com(T v){//Empilhamento (push) (não pode empilhar se estiver cheia)
            
            elemento.inserir_inicio(v,tam);
        }
        void remover_elemento_na_pilha_com(){//Retirada (pop) (não pode retirar se estiver vazia)
            
            elemento.remover_inicio();
        }
        void mostrar_pilha_com(){
            
            elemento.obter();

        }
        void mostrar_topo_pilha_com(){ //O que está no topo (peak/top) 
            
            elemento.imprimir_elemento_inicio();
        }
        int tamanho_pilha_com(){   //Tamanho
            return elemento.tamaaa();
        }
        int imprmir_capacidade_pilha_com(){
            return tam;
        }
        void aumentando_capacide_pilha_com(){//Redimensionar (mudará a capacidade da pilha)
            tam++;
        }
        void situacao_da_pilha_com(){ //Vazia e Cheia
            
            elemento.situacao_pp(tam);
            
        }
};
#endif
