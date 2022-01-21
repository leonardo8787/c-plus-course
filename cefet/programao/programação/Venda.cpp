#include "Venda.hpp"

    Venda::Venda(){}
    
    Venda::Venda(Cliente c, Funcionario f, Item i){
    	cadastrarCliente(c);
    	cadastrarFuncionario(f);
    	cadastrarItem(i);
    }
    
    void Venda::setId(int id){
        this->id=id;
    }
    int Venda::getId(){
        return this->id;
    }
        
    void Venda::setLocalentrega(string local_entrega){
        this->local_entrega=local_entrega;
    }
    string Venda::getLocalentrega(){
        return this->local_entrega;
    }
    
    void Venda::setDataentrega(string data_entrega){
        this->data_entrega=data_entrega;
    }
    string Venda::getDataentrega(){
        return this->data_entrega;
    }
    
    void Venda::setReferencia(string referencia){
        this->referencia=referencia;
    }
    string Venda::getReferencia(){
        return this->referencia;
    }
        
    void Venda::setTotalvenda(float totalvenda){
        this->total_venda=totalvenda;
    }
    float Venda::getTotalvenda(){
        return this->total_venda;
    }
    
    void Venda::imprimirListaDeCliente(){
    	int size = this->cliente.size();
    	
    	cout << "\n===============" << endl;
    	cout << "CLIENTES" << endl;
    	cout << "===============" << endl;
    	
    	if (size == 0) {
    		cout << "\nNão existe clientes cadastradas" << endl;
    	} else {
    		for(int i=0; i < size; i++) {
    		    cout << "Codigo: " << this->cliente[i].getCodigo() << endl;
    		    cout << "Nome: " << this->cliente[i].getNome() << endl;
    			cout << "Endereco: " << this->cliente[i].getEndereco() << endl;
    			cout << "Telefone: " << this->cliente[i].getTelefone() << endl;
    		}
    	}
    }
    
    void Venda::cadastrarCliente(Cliente c){
    	this->cliente.push_back(c);
    }
    
    
    void Venda::cadastrarFuncionario(Funcionario f){
    	this->funcionario=f;
    }
    void Venda::imprimirFuncionario(){
        cout<<"Funcionário: " << this->funcionario.getNome() << endl;
    }
    
    void Venda::imprimirListaDeItem(){
    	int size = this->item.size();
    	
    	cout << "\n===============" << endl;
    	cout << "ITEM" << endl;
    	cout << "===============" << endl;
    	
    	if (size == 0) {
    		cout << "\nNão existe itens cadastradas" << endl;
    	} else {
    		for(int i=0; i < size; i++) {
    			cout << "\nCódigo: " << this->item[i].getItem() << endl;
    			cout << "Descrição: " << this->item[i].getDescricao() << endl;
    			cout << "Valor: " << this->item[i].getValor() << endl;
    		}
    	}
    }
    
    void Venda::cadastrarItem(Item i){
    	this->item.push_back(i);
    }