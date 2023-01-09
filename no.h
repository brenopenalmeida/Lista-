#ifndef NO_H
#define NO_H
using namespace std;
template<class T>
class No{
    private:
        T dado;
        No* prox;
    public:
        No(T v){ 
            dado=v;
            prox=NULL;
        }
        T obterValor(){
        
            return dado;
        }

        No* obterProx(){
        
            return prox;
        }

        void setProx(No* p){
            
            prox = p;
        }
};
#endif