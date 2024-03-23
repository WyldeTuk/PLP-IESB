 #include <bits/stdc++.h>
 #include <iostream>
 #include <string>
 
 using namespace std;
 
 int main(){
 	
 	struct alunos{
 		
 		int id;
 		string nome;
 		int idade;
 		char genero;
 		string matricula;
 		string curso;
 		float renda;
 		bool trabalha;
 		
	 };
	 
	 alunos aluno1;
	 
	 cout << "insira seu id: ";
	 cin >> aluno1.id;
	 
	 cout << "insira seu nome: ";
	 cin >> aluno1.nome;
	 
	 cout << "insira seu idade: ";
	 cin >> aluno1.idade;
	 
	 cout << "insira seu genero: ";
	 cin >> aluno1.genero;
	 
	 cout << "insira sua matricula: ";
	 cin >> aluno1.matricula;
	 
	 cout << "insira seu curso: ";
	 cin >> aluno1.curso;
	 
	 cout << "insira sua renda: ";
	 cin >> aluno1.renda;
	 
	 cout << "vocc trabalha: (True=1/False=0)";
	 cin >> aluno1.trabalha;
	 
	 cout << "\nAs informacoes do " << aluno1.nome << " sao: \n->ID: " <<aluno1.id<< " \n->Idade: " << aluno1.idade << "\n->Genero: " << aluno1.genero <<"\n->Matricula: " <<aluno1.matricula<< "\n->Curso: " <<aluno1.curso<< "\n->renda: " <<aluno1.renda<< "\n->Trabalha :" <<aluno1.trabalha<<endl;

	 return 0;
 }
