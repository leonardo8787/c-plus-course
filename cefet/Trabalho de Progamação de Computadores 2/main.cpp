#include "Paciente.hpp"
#include "Consultorio.hpp"

int main(){

    char sexo;
    string nome, endereco;
    string cpf;
    float peso;
    string nome_consultorio;
    string endereco_consultorio;
    string telefone_consultorio;
    string medico;
    int ab;
    int decisao, decisao2;
    
    string vago="VAGO";
    char zero='0';
    float zero2=0;
    
    Paciente pa[100], imp;
    Consultorio co;
    
    
    cout << "CONSULTÓRIO" << endl;
    
    cout << "Digite o nome do consultório: " << endl;
    getline(cin, nome_consultorio);
    co.setNomeconsultorio(nome_consultorio);
    
    cout << "Digite o endereço do consultório: " << endl;
    
    cin.ignore();
    getline(cin, endereco_consultorio);
    
    co.setEnderecoconsultorio(endereco_consultorio);
    cout << "Digite o telefone do consultório: " << endl;
    cin>>telefone_consultorio;
    co.setTelefoneconsultorio(telefone_consultorio);
    
    cout << "Digite o nome do médico: " << endl;
    cin.ignore();
    getline(cin, medico);
    co.setMedico(medico);
    
    cout << "--------------------------------------------------------" << endl;
    
    cout << "Há três vagas disponíveis no consultório" << endl;
    
    cout << "--------------------------------------------------------" << endl;
    
    cout << "Adicionar mais pessoas na agenda do consultório? " << endl;
    cout << " sim - 1" << endl;
    cout << " não - 2" << endl;
    cin >> decisao;
    if(decisao == 1){
        for(int i=0; i<3 ; i++){
            // system("clear");
            cout<<endl;
            getchar();
            cout << "Digite o nome do paciente: " << endl;
            getline(cin, nome);
            pa[i].setNome(nome);
            cout << "Digite o sexo: " << endl;
            cin>>sexo;
            pa[i].setSexo(sexo);
            cout << "Digite o peso: " << endl;
            cin>>peso;
            pa[i].setPeso(peso);
            cout << "Digite o CPF: " << endl;
            
            cin.ignore();
            getline(cin, cpf);
            pa[i].setCpf(cpf);
            
            cout << "Digite o endereço: " << endl;
            getline(cin, endereco);
            pa[i].setEndereco(endereco);
            cout<<endl;
        }
        
        cout << "--------------------------------------------------------" << endl;
        
        cout << "Deseja tirar algum paciente da lista? " << endl;
        cout << " sim - 1" << endl;
        cout << " não - 2" << endl;
        cin >> decisao2;
        if(decisao2 == 1){
            imp.imprime(pa);
            cout << "Qual: " << endl;
            cin>>ab;
            pa[ab].setNome(vago);
            pa[ab].setSexo(zero);
            pa[ab].setPeso(zero2);
            pa[ab].setCpf(vago);
            pa[ab].setEndereco(vago);
        }
        
        cout << "--------------------------------------------------------" << endl;
        
        cout << "Lista de pacientes: " << endl;
        imp.imprime(pa);
        
        cout << "--------------------------------------------------------" << endl;
        
    }
    cout << endl;
    
    cout << "--------------------------------------------------------" << endl;
    
    if(decisao == 2){
        cout << "Lista vazia" << endl;
    }
    
    return 0;
}