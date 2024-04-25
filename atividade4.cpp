#include <iostream> <locate>

using namespace std;


/*1 – Peça para o usuário digitar um número de 1 a 7, e mostre
o dia da semana correspondente, por exemplo, se o usuário
digitar 1, mostre Domingo.Se o usuário digitar 2, mostre
Segunda - Feira, e assim por diante.Caso o usuário digite
algum outro número mostre dia invalido*/

//int main() {
//	setlocale(LC_ALL, "pt_BR.UTF-8");
//
//	int num;
//	cout << "Insira um número de 1 a 7: ";
//	cin >> num;
//
//	switch (num)
//	{
//	case 1:
//		cout << "Domingo";
//		break;
//	case 2:
//		cout << "Segunda-Feira";
//		break;
//	case 3:
//		cout << "Terça-Feira";
//		break;
//	case 4:
//		cout << "Quarta-Feira";
//		break;
//	case 5:
//		cout << "Quinta-Feira";
//		break;
//	case 6:
//		cout << "Sexta-Feira";
//		break;
//	case 7:
//		cout << "Sábado";
//		break;
//	default:
//		cout << "Dia inválido";
//		break;
//	}
//
//}



//2 – Peça para o usuário informar dois números e a operação
//matemática que ele deseja(+, -, *ou / ), mostre o resultado
//da conta de acordo com a operação que ele escolheu

//int main() {
//		setlocale(LC_ALL, "pt_BR.UTF-8");
//	
//		float num1;
//		float num2;
//		char operacao;
//		int resultado;
//	
//		cout << "Informe um número: ";
//		cin >> num1;
//	
//		cout << "Informe outro número: ";
//		cin >> num2;
//	
//		cout << "Informe a operação matemática que deseja (+ , - , * , /)";
//		cin >> operacao;
//	
//		switch (operacao)
//		{
//		case '+':
//			resultado = num1 + num2;
//			cout << "O resultado é: " << resultado;
//			break;
//		case '-':
//			resultado = num1 - num2;
//			cout << "O resultado é: " << resultado;
//			break;
//		case '*':
//			resultado = num1 * num2;
//			cout << "O resultado é: " << resultado;
//			break;
//		case '/':
//			resultado = num1 / num2;
//			cout << "O resultado é: " << resultado;
//			break;
//		default:
//			break;
//		}
//	}


//3 – Peça para o usuário digitar uma letra, se a letra for A, E, I,
//O ou U, mostre vogal, caso ele digite outra letra, mostre
//consoante

//int main() {
//		setlocale(LC_ALL, "pt_BR.UTF-8");
//	
//		char letra;
//		
//		cout << "Digite uma letra:";
//		cin >> letra;
//	
//		switch (letra)
//		{
//		case 'a':
//		case 'A':
//			{
//			cout << "A letra " << letra << " é uma vogal!";
//			break;
//			}
//		case 'e':
//		case 'E':
//			{
//			cout << "A letra " << letra << " é uma vogal!";
//			break;
//			}
//		case 'i':
//		case 'I':
//			{
//			cout << "A letra " << letra << " é uma vogal!";
//			break;
//			}
//		case 'o':
//		case 'O':
//			{
//			cout << "A letra " << letra << " é uma vogal!";
//			break;
//			}
//		case 'u':
//		case 'U':
//			{
//			cout << "A letra " << letra << " é uma vogal!";
//			break;
//			}
//		default:
//			cout << "A letra " << letra << " é uma consoante";
//			break;
//		}
//	}