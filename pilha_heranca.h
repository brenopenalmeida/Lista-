template<class T>
class PilhaHeranca : public Lista<T>{
public:
    int tam;
    
public:
    
    PilhaHeranca(int t=15):Lista<T>{t}{tam=t;}
    ~PilhaHeranca(){}
    
    void inserir_elemento_na_pilha(T v){ //Empilhamento (push) (não pode empilhar se estiver cheia)
    
            Lista<T>::inserir_inicio(v,tam);
        }
        void remover_elemento_na_pilha(){ //Retirada (pop) (não pode retirar se estiver vazia)
            
            Lista<T>::remover_inicio();
        }
        void mostrar_pilha(){
            
            Lista<T>::obter();
        }
        void mostrar_topo_pilha(){//O que está no topo (peak/top) 
          
            Lista<T>::imprimir_elemento_inicio();
        }
        int tamanho_pilha(){   //Tamanho
            
            return Lista<T>::tamaaa();
        }
        int imprmir_capacidade_pilha(){
            return tam;
        }
        void aumentando_capacide_pilha(){ //Redimensionar (mudará a capacidade da pilha)
            tam++;
        }
        void situacao_da_pilha(){ //Vazia e Cheia
            
            Lista<T>::situacao_pp(tam);
            
        }
        //static_assert(std::is_reference<Pilha>::value, "No references, please");
};
