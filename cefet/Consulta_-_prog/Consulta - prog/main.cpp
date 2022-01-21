
#include "Medico.hpp"
#include "Consulta.hpp"
#include "Paciente.hpp"
#include "Pessoa.hpp"
#include "Consultorio.hpp"


Medico criaMedico();
Consulta criaConsulta();
Paciente criaPaciente();

int menu();

int main(){
    
    int op;
    
    vector<Medico> medico;
    vector<Paciente> paciente;
    vector<Consulta> consulta;

    Medico m;
    Consulta c;
    Paciente p;
    
    Consultorio x;
    
    cout<<"--------------------------"<<endl;
    cout<<"----Serviço de cadastro---"<<endl;
    cout<<endl<<endl;
    cout<<"Click ENTER"<<endl;
    getchar();
    do{
        
        op=menu();
        
        switch(op){
            case 1:
                m=criaMedico();
                x.cadastrarMedico(m);
                break;
            case 2:
                c = criaConsulta();
                x.cadastrarConsulta(c);
                break;
            case 3:
                p = criaPaciente();
                x.cadastrarPaciente(p);
                break;
            case 4:
                x.imprimirListaDeConsultas();
                break;
            case 5:
                x.imprimirListaDePacientes();
                break;
            case 6:
                x.imprimirListaDeMedicos();
                break;
            case 7:
                system("clear");
                cout<<"--------------------------"<<endl;
                break;
            default:
                cout<<"Escolha uma opção válida"<<endl;
        }
    }while(op != 0);
    
    return 0;
}

Medico criaMedico(){
    
    string nome, endereco, telefone, identidade,especialidade;
    char sexo;
    int cpf, crm;
    
    cout<<"Digite o nome do médico: "<<endl;
    cin.ignore();
    getline(cin, nome);
    cout<<"Digite o endereço do médico: "<<endl;
    getline(cin, endereco);
    cout<<"Digite o telefone do médico: "<<endl;
    getline(cin, telefone);
    cout<<"Digite a identidade do médico: "<<endl;
    getline(cin, identidade);
    cout<<"Digite o sexo do médico: "<<endl;
    cin>>sexo;
    cout<<"Digite o CPF do médico: "<<endl;
    cin>>cpf;
    cout<<"Digite o CRM: "<<endl;
    cin>>crm;
    cout<<"Digite a especialidade"<<endl;
    getline(cin, especialidade);
    
    // Medico m( crm, especialidade, nome, endereco, telefone, identidade, sexo, cpf);
    Medico m;
    return m;
}


Consulta criaConsulta(){
    
    string nome, endereco, telefone, identidade;
    char sexo;
    int cpf;
    string data, hora;
    Medico medico;
    Paciente paciente;
    
    cout<<"Marcador de consulta"<<endl;
    cout<<"Indique a data da consulta: "<<endl;
    cin.ignore();
    getline(cin, data);
    cout<<"Indique a hora da consulta: "<<endl;
    getline(cin, hora);
    
    Consulta c( data, hora);
    return c;
}


Paciente criaPaciente(){
    
    string nome, endereco, telefone, identidade;
    char sexo;
    int cpf;
    string relato, data_ult, medicacao;
    
    cout<<"Digite o nome do médico: "<<endl;
    cin.ignore();
    getline(cin, nome);
    cout<<"Digite o endereço do médico: "<<endl;
    getline(cin, endereco);
    cout<<"Digite o telefone do médico: "<<endl;
    getline(cin, telefone);
    cout<<"Digite a identidade do médico: "<<endl;
    getline(cin, identidade);
    cout<<"Digite o sexo do médico: "<<endl;
    cin>>sexo;
    cout<<"Digite o relato: "<<endl;
    getline(cin, relato);
    cout<<"Digite a última data do ocorrido: "<<endl;
    getline(cin, data_ult);
    cout<<"Digite a medicação: "<<endl;
    getline(cin, medicacao);

    //Paciente p(relato, data_ult, medicacao, nome, endereco, telefone, identidade, sexo, cpf);
    Paciente p;
    return p;
}


int menu(){
    
    int op;
    
    cout<<"1 - Cadastrar Médico"<<endl;
    cout<<"2 - Cadastrar Consulta"<<endl;
    cout<<"3 - Cadastrar paciente"<<endl;
    cout<<"4 - Imprimir lista de Consultas"<<endl;
    cout<<"5 - Imprimir lista de Pacientes"<<endl;
    cout<<"6 - Imprimir lista de Medicos"<<endl;
    cout<<"5 - Limpar"<<endl;
    cout<<"0 - Sair"<<endl;
    
    cout<<"Digite sua escolha: "<<endl;
    cin>>op;
    
    return op;
}