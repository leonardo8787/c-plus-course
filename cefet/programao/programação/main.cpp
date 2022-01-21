#include "Cliente.hpp"
#include "Venda.hpp"
#include "Funcionario.hpp"
#include "Item.hpp"

Cliente criarCliente();
Funcionario criarFuncionario();
Item criarItem();
int menu();
void imprimir(vector<Cliente> a, vector<Funcionario> b,vector<Item> c);

int main(){

    int op;
    
    vector<Cliente> clientes;
    vector<Funcionario> funcionarios;
    vector<Item> itens;
    
    Cliente c;
    Funcionario f;
    Item p;
    Venda v;
    
    do{
        op=menu();
        switch(op){
            case 0:
                return 1;
                break;
            case 1:
                f=criarFuncionario();
                funcionarios.push_back(f);
                break;
            case 2:
                c=criarCliente();
                clientes.push_back(c);
                break;
            case 3:
                p=criarItem();
                itens.push_back(p);
                break;
            case 4:
            cout<<endl;
                imprimir(clientes,funcionarios,itens);
                break;
            default:
                cout<<"Está opção não existe"<<endl;
        }
    }while(op != 0);
    
    return 0;
}

Cliente criarCliente(){
    
    string nome_cliente, endereco_cliente;
    int telefone_cliente, codigo_cliente;

    cout<<"Digite o código do cliente: "<<endl;
    cin>>codigo_cliente;
    cout<<"Digite o nome do cliente: "<<endl;
    cin.ignore();
    getline(cin,nome_cliente);
    cout<<"Digite o endereço do cliente: "<< endl;
    getline(cin, endereco_cliente);
    cout<<"Digite o telefone do cliente: "<<endl;
    cin>>telefone_cliente;
    
    Cliente cliente(codigo_cliente, endereco_cliente, nome_cliente, telefone_cliente);
    return cliente;
}

Funcionario criarFuncionario(){
    /*
    string nome_funcionario; 
    int matricula_funcionario;
    string telefone_funcionario;
    float salario_funcionario;
    
    cout<<"Digite o salário do funcionário: "<<endl;
    cin>>salario_funcionario;
    cout<<"Digite a matricula do funcionário: "<<endl;
    cin>>matricula_funcionario;
    cout<<"Digite o nome do funcionário: "<< endl;
    cin.ignore();
    getline(cin, nome_funcionario);
    cout<<"Digite o telefone do funcionário: "<<endl;
    getline(cin, telefone_funcionario);
    
    Funcionario funcionario(matricula_funcionario, salario_funcionario, nome_funcionario, telefone_funcionario);
    return funcionario;*/
}

Item criarItem(){
    
    int codigo_produto;
    string descricao_produto;
    float preco_produto;
    
    cout<<"Digite o preço do produto: "<<endl;
    cin>>preco_produto;
    cout<<"Digite o código do produto: "<<endl;
    cin>>codigo_produto;
    cout<<"Digite a descrição do produto: "<<endl;
    cin.ignore();
    getline(cin, descricao_produto);
    
    Item item(codigo_produto, descricao_produto, preco_produto);
    return item;
}

int menu(){
    
    int op;
    
    cout<<"1 - Cadastrar funcionário"<<endl;
    cout<<"2 - Cadastrar cliente"<<endl;
    cout<<"3 - Cadastrar Item"<<endl;
    cout<<"4 - Imprimir listas"<<endl;
    cout<<"0 - sair"<<endl;
    cin>>op;

    
    return op;
}

void imprimir(vector<Cliente> a, vector<Funcionario> b,vector<Item> c){
    for(int i=0; i<a.size(); i++ ){
        cout<<a[i].getNome()<<endl;
        cout<<a[i].getCodigo()<<endl;
        cout<<a[i].getEndereco()<<endl;
        cout<<a[i].getTelefone()<<endl;
    }
    for(int i=0; i<b.size(); i++ ){
        cout<<b[i].getNome()<<endl;
        cout<<b[i].getMatricula()<<endl;
        cout<<b[i].getTelefone()<<endl;
    }
    for(int i=0; i<c.size(); i++ ){
        cout<<c[i].getItem()<<endl;
        cout<<c[i].getValor()<<endl;
        cout<<c[i].getDescricao()<<endl;
    }
}
