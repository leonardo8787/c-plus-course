#include "Pessoafisica.hpp"
#include "Pessoajuridica.hpp"
#include "Pessoa.hpp"

#include<vector>

int main(){
    
    string cnpj, cpf, nome, endereco;
    int op, op2, op3;
    int lim, lim_2;
    vector<Pessoafisica> lista_de_pessoas;
    vector<Pessoajuridica> lista_de_empresas;
    string nome_pessoa, nome_empresa, endereco_empresa;
    
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Tecle Enter para dar início"<<endl;
    getchar();
    
    cout<<"Quantas pessoas deseja cadastrar: "<<endl;
    cin>>lim;
    
    Pessoafisica pfisica[lim];
    
    for(int i=0; i<lim; i++){
        cout<<"---------------------------------------------------"<<endl;
        cout<<"SERVIÇO DE CADASTRO"<<endl;
        cout<<endl;
        
        cout<<"Digite o nome da pessoa: "<<endl;
        cin.ignore();
        getline(cin, nome_pessoa);
        cout<<"Digite o CPF: "<<endl;
        getline(cin, cpf);
        cout<<"Digite o endereço: "<<endl;
        getline(cin, endereco);
        
        pfisica[i].setNome(nome_pessoa);
        pfisica[i].setEndereco(endereco);
        pfisica[i].setCpf(cpf);
        
        lista_de_pessoas.push_back(pfisica[i]);
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Está pessoa esta ligada a um CNPJ: "<<endl;
        cout<<"Sim - 1"<<endl;
        cout<<"Não - 2"<<endl;
        cin>>op;
        
        if(op == 1){
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Quantos CNPJ's está pessoa esta associada: "<<endl;
            cin>>lim_2;
            
            Pessoajuridica pjuridica;
            
            for(int j=0; j<lim_2 ; j++){
                cout<<"Digite o nome da empresa: "<<endl;
                cin.ignore();
                getline(cin, nome_empresa);
                cout<<"Digite o CNPJ: "<<endl;
                getline(cin, cnpj);
                cout<<"Digite o endereço da empresa: "<<endl;
                getline(cin, endereco_empresa);
                
                pjuridica.setNome(nome_empresa);
                pjuridica.setEndereco(endereco_empresa);
                pjuridica.setCnpj(cnpj);
                
                pfisica[i].cadastrarPJ(pjuridica);
                lista_de_empresas.push_back(pjuridica);
            }
        }
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Empresas";
    cout<<endl;
    for(int j=0; j<lista_de_empresas.size(); j++){
        cout<<lista_de_empresas[j].getCnpj()<<endl;
    }
    cout<<endl;
    cout<<"Pessoas"<<endl;
    for(int i=0; i<lista_de_pessoas.size(); i++ ){
        cout<<lista_de_pessoas[i].getNome()<<endl;
    }
    cout<<endl;
    cout<<"Lista de associações"<<endl;
    for(int i=0; i<lista_de_pessoas.size(); i++ ){
        for(int j=0; j<lista_de_empresas.size(); j++){
            cout<<lista_de_pessoas[i].getNome() << "-->" << lista_de_empresas[j].getCnpj() <<endl;
        }
    }
    cout<<endl;
    return 0;
    }

