#include <iostream>
#include<string>
#include "no.h"
#include "lista.h"
#include "pilha.h"
#include "pilha_heranca.h"

using namespace std;
int main(){
    
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"Lista"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    
    Lista<char> l;
   
    cout<<"\n\nLista:"<<endl;
    
    //l.inseri('b');    
    //l.inseri('c');
    //l.inseri('d');
    //l.inseri('e');
    
    cout<<endl;
    cout<<endl;
    
    l.mostrar();
    
    
    cout<<"A capacidade da lista: "<<l.imprmir_capacidade()<<endl;
    cout<<"Quantidade de elemtentos contido na lista: "<<l.tamaaa()<<endl;
    cout<<"O primeiro elemento da lista: ";l.imprimir_elemento_inicio();cout<<endl;
    cout<<"Situação da lista: ";l.situacao();cout<<endl;
    
    cout<<"\nRemovendo um elemento da lista: ";l.remover_inicio();
    
    cout<<"\n\nLista:"<<endl;
    l.mostrar();
    
    cout<<endl;
    cout<<endl;
    
    cout<<"A capacidade da lista: "<<l.imprmir_capacidade()<<endl;
    cout<<"Quantidade de elemtentos contido na lista: "<<l.tamaaa()<<endl;
    cout<<"O primeiro elemento da lista: ";l.imprimir_elemento_inicio();cout<<endl;
    cout<<"Situação da lista: ";l.situacao();cout<<endl;
    
    cout<<endl<<endl<<"Aumentando a capacidade da lista: ";l.aumentando_capacide();cout<<"A capacidade da lista foi aumentada para "<<l.imprmir_capacidade()<<endl<<endl;
    
    cout<<"Inserindo novos elementos"<<endl<<endl;
    
    cout<<"\n\nLista:"<<endl;
    
    l.inseri('X');
    l.inseri('Z');
    l.inseri('W');
    l.inseri('Y');
    
    
    l.mostrar();
    
    cout<<"A capacidade da lista: "<<l.imprmir_capacidade()<<endl;
    cout<<"Quantidade de elemtentos contido na lista: "<<l.tamaaa()<<endl;
    cout<<"O primeiro elemento da lista: ";l.imprimir_elemento_inicio();cout<<endl;
    cout<<"Situação da lista: ";l.situacao();cout<<endl;
    cout<<endl<<endl<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"Pilha composição"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    
    Pilha<string> p(3);
    
    cout<<"\n\nPilha composição:"<<endl;
    
    p.inserir_elemento_na_pilha_com("chaves");
    p.inserir_elemento_na_pilha_com("laga");
    //p.inserir_elemento_na_pilha_com("urubu");
    //p.inserir_elemento_na_pilha_com("vaca");
    //p.inserir_elemento_na_pilha_com("cachorro");

    p.mostrar_pilha_com();
    
    
    cout<<endl;
    cout<<endl;
    
    
    cout<<"A capacidade da pilha composição: "<<p.imprmir_capacidade_pilha_com()<<endl;
    cout<<"Quantidade de elemtentos contido na pilha composição: "<<p.tamanho_pilha_com()<<endl;
    cout<<"O primeiro elemento da pilha composição: ";p.mostrar_topo_pilha_com();cout<<endl;
    cout<<"Situação da pilha composição: ";p.situacao_da_pilha_com();cout<<endl;
    
    cout<<"\nRemovendo um elemento da pilha composição: ";p.remover_elemento_na_pilha_com();
    
    cout<<"\n\nPilha composição:"<<endl;
    p.mostrar_pilha_com();
    
    cout<<endl;
    cout<<endl;
    
    cout<<"A capacidade da pilha composição: "<<p.imprmir_capacidade_pilha_com()<<endl;
    cout<<"Quantidade de elemtentos contido na pilha composição: "<<p.tamanho_pilha_com()<<endl;
    cout<<"O primeiro elemento da pilha composição: ";p.mostrar_topo_pilha_com();cout<<endl;
    cout<<"Situação da pilha composição: ";p.situacao_da_pilha_com();cout<<endl;
    
    cout<<endl<<endl<<"Aumentando a capacidade da pilha composição: ";p.aumentando_capacide_pilha_com();cout<<"A capacidade da pilha composição foi aumentada para "<<p.imprmir_capacidade_pilha_com()<<endl<<endl;
    
    cout<<"Inserindo novos elementos"<<endl<<endl;
    
    cout<<"\n\nPilha composição:"<<endl;
    
    p.inserir_elemento_na_pilha_com("leão");
    p.inserir_elemento_na_pilha_com("gato");
    p.inserir_elemento_na_pilha_com("lambizomi");
    p.inserir_elemento_na_pilha_com("urubu");
    p.inserir_elemento_na_pilha_com("vaca");
    p.inserir_elemento_na_pilha_com("cachorro");

    
    p.mostrar_pilha_com();
    
    cout<<"A capacidade da pilha composição: "<<p.imprmir_capacidade_pilha_com()<<endl;
    cout<<"Quantidade de elemtentos contido na pilha composição: "<<p.tamanho_pilha_com()<<endl;
    cout<<"O primeiro elemento da pilha composição: ";p.mostrar_topo_pilha_com();cout<<endl;
    cout<<"Situação da pilha composição: ";p.situacao_da_pilha_com();cout<<endl;
    cout<<endl<<endl<<endl;

    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"Pilha Herança"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;    
    
    PilhaHeranca<float> w(4);
    
   w.inserir_elemento_na_pilha(10.56);
   // w.inserir_elemento_na_pilha(11.98);
   // w.inserir_elemento_na_pilha(12.12);
   // w.inserir_elemento_na_pilha(13.78);
    //w.inserir_elemento_na_pilha(10.78);
   
    w.mostrar_pilha();
    
    
    cout<<endl;
    cout<<endl;
    
    
    cout<<"A capacidade da pilha herança: "<<w.imprmir_capacidade_pilha()<<endl;
    cout<<"Quantidade de elemtentos contido na pilha herança: "<<w.tamanho_pilha()<<endl;
    cout<<"O primeiro elemento da pilha herança: ";w.mostrar_topo_pilha();cout<<endl;
    cout<<"Situação da pilha Herança: ";w.situacao_da_pilha();cout<<endl;
    
    cout<<"\nRemovendo um elemento da pilha herança: ";w.remover_elemento_na_pilha();
    
    cout<<"\n\nPilha composição:"<<endl;
    w.mostrar_pilha();
    
    cout<<endl;
    cout<<endl;
    
    cout<<"A capacidade da pilha herança: "<<w.imprmir_capacidade_pilha()<<endl;
    cout<<"Quantidade de elemtentos contido na pilha herança: "<<w.tamanho_pilha()<<endl;
    cout<<"O primeiro elemento da pilha herança: ";w.mostrar_topo_pilha();cout<<endl;
    cout<<"Situação da pilha herança: ";w.situacao_da_pilha();cout<<endl;
    
    cout<<endl<<endl<<"Aumentando a capacidade da pilha herança: ";w.aumentando_capacide_pilha();cout<<"A capacidade da pilha herança foi aumentada para "<<w.imprmir_capacidade_pilha()<<endl<<endl;
    
    cout<<"Inserindo novos elementos"<<endl<<endl;
    
    cout<<"\n\nPilha composição:"<<endl;
    
    w.inserir_elemento_na_pilha(50.78);
    w.inserir_elemento_na_pilha(999.78);
    w.inserir_elemento_na_pilha(11.98);
    w.inserir_elemento_na_pilha(12.12);
    w.inserir_elemento_na_pilha(13.78);
    w.inserir_elemento_na_pilha(10.78);
   
    w.mostrar_pilha();
    
    cout<<"A capacidade da pilha herança: "<<w.imprmir_capacidade_pilha()<<endl;
    cout<<"Quantidade de elemtentos contido na pilha herança: "<<w.tamanho_pilha()<<endl;
    cout<<"O primeiro elemento da pilha herança: ";w.mostrar_topo_pilha();cout<<endl;
    cout<<"Situação da pilha herança: ";w.situacao_da_pilha();cout<<endl;
    cout<<endl<<endl<<endl;

    
    
    
    
    
 
    /*out<<"Pilha Herança:"<<endl;
    PilhaHeranca<float> w(4);
  w.inserir_elemento_na_pilha(10.56);
  w.inserir_elemento_na_pilha(11.98);
  w.inserir_elemento_na_pilha(12.12);
  w.inserir_elemento_na_pilha(13.78);
   w.inserir_elemento_na_pilha(10.78);
   
    w.mostrar_pilha();
    
    
    cout<<"\nA capacidade da pilha é:"<<w.imprmir_capacidade_pilha()<<endl;
    cout<<"A lista contem "<<w.tamanho_pilha()<<" elementos"<<endl;
    cout<<"O primeiro elemento da pilha é:";w.mostrar_topo_pilha();cout<<endl;
    cout<<"Removendo um elemento da pilha"<<endl;w.remover_elemento_na_pilha();
    cout<<endl;cout<<endl;cout<<"Pilha Herança:"<<endl;w.mostrar_pilha();
    cout<<endl;
    cout<<endl;
    cout<<"\nA capacidade da pilha é:"<<w.imprmir_capacidade_pilha()<<endl;
    cout<<"A pilha contem "<<w.tamanho_pilha()<<" elementos"<<endl;
    cout<<"O primeiro elemento da pilha é:";w.mostrar_topo_pilha();cout<<endl;
    
    cout<<endl;cout<<"Aumentando a capacidade da pilha";w.aumentando_capacide_pilha();cout<<endl;
    cout<<"\n\nA capacidade da pilha é:"<<w.imprmir_capacidade_pilha()<<endl;
    
    cout<<"\nInserindo novos elementos"<<endl<<endl;
    w.inserir_elemento_na_pilha(80);
    w.inserir_elemento_na_pilha(90);
    
    cout<<endl;cout<<endl;cout<<"Pilha Herança:"<<endl;w.mostrar_pilha();
    cout<<endl;
    cout<<endl;
    cout<<"\nA capacidade da pilha é:"<<w.imprmir_capacidade_pilha()<<endl;
    cout<<"A lista contem "<<w.tamanho_pilha()<<" elementos"<<endl;
    cout<<"O primeiro elemento da lista é:";w.mostrar_topo_pilha();cout<<endl;
   
 */
    


return 0;
}
