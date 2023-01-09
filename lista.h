//#ifdef LISTA_H
//#define LISTA_H

using namespace std;
template<class T>
class Lista{
        
    protected:
    
        No<T>* cabeca=NULL;
        No<T>* cauda=NULL; 
        int tam;
        int b=0;
    
    public:
    
        Lista(int capacidade=15)
        {
            T v;
            tam=capacidade;
            cabeca = new No<T>(v);
            cauda = cabeca;
        }
        ~Lista()
        {
            delete cabeca;
        }
        
        int vazia()
        {
            if(cabeca==NULL)
            {
                return 0;
            } 
            else
            {
                return 1;
            }
        }
        int tamaaa()
        {
            return b;
        }
        int tamanho()
        {
            if(vazia()==0)
            {
                return 0;
            }
            else
            {
                No<T>* c = cabeca;
                int contador = 0;
        
                do{
                    
                    c = c->obterProx();
                    contador++;
                }while(c!=NULL);
                
                return contador;
            }
        }
        void obter()
        {
            No<T>* c = cabeca;
            if(vazia()==0){
                cout << "Vazia\n";
            }
            else
            {
                for(int i=1; i<=b;i++)
                {     
                   cout << c->obterValor() << endl;
                    c = c->obterProx();
                }
                cout << endl;
            }
        }
        void inseri(int v)
        {        
            inserir_inicio(v,tam);
        }
        void inserir_inicio(T v,int a)
        {    
            No<T>* novo_no = new No<T>(v);
            if((vazia()==0)&&(tamanho()==0))
            {
                cabeca = novo_no;
                cauda = novo_no;
                b++;
            }
        
            else if((vazia()==1)&&(a>=tamanho()))
            {    
                novo_no->setProx(cabeca);
                cabeca = novo_no;
                b++;
            }
            else{
                
                cout<<"Elemento "<<v<<" removido por passar da capacidade suportada."<<endl;
            }
        }
        
        void remover_inicio()
        {    
            if(b==0){
                
                cout<<" Não possui elementos para ser removido";
            }
            
            else
            {
                No<T>* c=cabeca;
                cabeca= c->obterProx();
                cout<<" Elemento "<<c->obterValor()<<" removido";
                delete(c);
                b--;
            }
                
    
        }
        
    void imprimir_elemento_inicio()
    {
            if(b==0)
            {
               cout<<"Não possui elementos";
            }
            else
            {  
                No<T>* c=cabeca; 
                //cout<<"\nO elemento inicial é:"<<endl;
                cout<<c->obterValor()<<endl<<endl;
            }
    }
    
    void aumentando_capacide()
    {
    
               tam++;
    }
    int imprmir_capacidade()
    {  
        return tam;
    }
    
    void mostrar()
    {
        obter();
    }
    
    void situacao(){
     
        situacao_pp(tam);
    }    
    void situacao_pp(int j){
        
        if(b==0){
            cout<<" Vazia";
        }
        else if(b==j){
            
            cout<<" Cheia";
        }
        else{
            
            cout<<" Possui elementos";
        }
    }
    
};
//#endif
