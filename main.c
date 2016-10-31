#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define username "Soraia Alves Rocha"


int main(int argc, char *argv[])
{
	//fix utf-8 characters
	setlocale(LC_ALL, "");
	
	//loader
	int i;	
	for(; i < 10; i++)
	{
		
		
		printf("Carregando sistema [%d%%]...\r", i*10);
		printchar(i);
		delay(1000);
		system("cls");
	
	}
		
	system("cls");	
	for(i = 0; i < 10; ++i) 
	{
		printchar(i);
		delay(500);
	}
	
	system("color f");
	
	delay(1000);
	
	printf("\n\nSeja bem-vindo(a) %s!\n\n", username);
	printf("##########################################################\n");	
	printf("#         Este software foi desenvolvido por:\n#\n#\n# Aluno: Leonardo Ferreira Moura \
	\n# Matricula: 2016103732\n# Unidade: Rio Comprido\n# Turma: 136\n");
	printf("##########################################################\n\n");	
	
	
	printf("\n\n\nPara simular ou ver o código-fonte de um exercício, digite o número da questão desejada [1 - 16]...\n\nQuestão:");
	
	int questionid;
	scanf("%d", &questionid);
	system("cls");
	printf("Tudo bem, você escolheu a questão %d, agora você precisa me dizer se quer simular o exercício ou exibir o código-fonte.\
	\n\n\nUse o comando use [-simular] para simular o exercício como usuário final, ou o comando [-codigo] para ver o código-fonte utilizado, você tambem pode utilizar o comando [-voltar] para voltar ao menu anterior!\n", questionid);
	
	QuestionCMD(questionid);
	return 0;
}

int QuestionCMD(int questionid)
{
	char *cmd[32];
	char *subject[512];
	
	GetQuestionSubject(questionid, &subject);
	
	printf("\n\n$comando:");
	scanf("%s", &cmd);
	
	if(!strcmp(cmd, "-simular") || !strcmp(cmd, "simular"))
	{
		
	}
	else
	{
		if(!strcmp(cmd, "-codigo") || !strcmp(cmd, "codigo"))
		{
			system("cls");
			system("color a");
			printf("Questão %d). %s\n\n",questionid, subject);
			
			PrintQuestionAnswer(questionid);
		}
		else if(!strcmp(cmd, "-voltar") || !strcmp(cmd, "voltar"))
		{
			system("cls");
			printf("Escolha uma questão para simular como o usuário final ou ver o código fonte do exercício [1 - 16].\n\nQuestão:");
			int question;
			
			scanf("%d", &question);
			
			if(1 > question > 16)
			{
				printf("[ERRO] Você precisa escolher uma questão de 1 à 16, por favor, digite a questão desejada...\n\nQuestão:");
			}
			else
			{
				system("cls");
				printf("Tudo bem, você escolheu a questão %d, agora você precisa me dizer se quer simular o exercício ou exibir o código-fonte.\
				\n\n\nUse o comando use [-simular] para simular o exercício como usuário final, ou o comando [-codigo] para ver o código-fonte utilizado, você tambem pode utilizar o comando [-voltar] para voltar ao menu anterior!\n", question);
				QuestionCMD(question);
			}
		}
		else
		{
			printf("[ERRO]: Comando inválido, digite um dos comandos: [-simular] ou [-codigo] ou [-voltar]");
			QuestionCMD(questionid);
		}
	}
	return 0;
}

int PrintQuestionAnswer(int questionid)
{
	switch(questionid)
	{
		case 1:
		{
			printf("\nCódigo-fonte:\n\n-----------------------------------------------------------\n");
			
			PrintStringByChar("#include <stdio.h>\n\nint main(int argc, char *argv[])\n{\n");
			delay(500);
			PrintStringByChar("	int valorConta, valorPagamento, troco;\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Insira o valor da conta e o valor do pagamento:\");\n\n");
			delay(500);
			PrintStringByChar("	scanf(\"%d%d\", &valorConta, &valorPagamento);\n\n");
			delay(500);
			PrintStringByChar("	valorConta *= 1.1;\n");
			delay(500);
			PrintStringByChar("	troco = valorPagamento - valorConta;\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Valor total a pagar: %d, Troco: %d\", valorConta, troco);\n\n");
			PrintStringByChar("	return 0;\n}");
			printf("\n-----------------------------------------------------------\n\n");
			printf("Para voltar ao menu anterior digite o comando [-voltar], para simular este exercicio como o usuario final utilize o comando [-simular]...");
			QuestionCMD(1);
			break;
		}
		case 2:
		{
			printf("\nCódigo-fonte:\n\n-----------------------------------------------------------\n");
			
			PrintStringByChar("#include <stdio.h>\n\nint main(int argc, char *argv[])\n{\n");
			delay(500);
			PrintStringByChar("	double CTemp, FTemp;\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Digite a temperatura em Farenheit para converter para Celsius:\");\n\n");
			delay(500);
			PrintStringByChar("	scanf(\"%f\", &FTemp);\n\n");
			delay(500);
			PrintStringByChar("	CTemp = (5.0/9.0)*(FTemp-32);\n\n");
			delay(500);
			PrintStringByChar("	printf(\"A temperatura %f em Farenheit equivale a %f em Celsius\", FTemp, CTemp);\n\n");
			delay(500);
			PrintStringByChar("	return 0;\n}");
			printf("\n-----------------------------------------------------------\n\n");
			printf("Para voltar ao menu anterior digite o comando [-voltar], para simular este exercicio como o usuario final utilize o comando [-simular]...");
			QuestionCMD(2);	
			break;
		}
		case 3:
		{
			printf("\nCódigo-fonte:\n\n-----------------------------------------------------------\n");
			
			PrintStringByChar("#include <stdio.h>\n\nint main(int argc, char *argv[])\n{\n");
			delay(500);
			PrintStringByChar("	int h, m, s, total;\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Insira as horas, minutos e segundos:\");\n\n");
			delay(500);
			PrintStringByChar("	scanf(\"%d%d%d\", &h, &m, &s);\n\n");
			delay(500);
			PrintStringByChar("	total = (h/3600)+(m/60)+s;\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Desde que o dia começou já se passaram %d segundos.\", total);\n\n");
			delay(500);
			PrintStringByChar("	return 0;\n}");
			printf("\n-----------------------------------------------------------\n\n");
			printf("Para voltar ao menu anterior digite o comando [-voltar], para simular este exercicio como o usuario final utilize o comando [-simular]...");
			QuestionCMD(3);	
			break;
		}
		case 4:
		{
			printf("\nCódigo-fonte:\n\n-----------------------------------------------------------\n");
			
			PrintStringByChar("#include <stdio.h>\n\nint main(int argc, char *argv[])\n{\n");
			PrintStringByChar("	int a, b, c, d, e;\n	double MA, MH;\n\n");
	
			PrintStringByChar("	printf(\"Insira os 5 valores para calcular as médias:\");\n\n");
			delay(500);
			PrintStringByChar("	scanf(\"%d%d%d%d%d\", &a, &b, &c, &d, &e);\n\n");
			delay(500);
			PrintStringByChar("	//calcular média aritimética\n	MA = (a+b+c+d+e)/5;\n\n");
			delay(500);
			PrintStringByChar("	//calcular média harmônica\n	MH = 5/((1/a)+ (1/b)+ (1/c)+ (1/d)+ (1/e));\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Média Aritimética = %f, Média Harmônica = %f\", MA, MH);\n\n");
			delay(500);
			PrintStringByChar("	return 0;\n}");
			printf("\n-----------------------------------------------------------\n\n");
			printf("Para voltar ao menu anterior digite o comando [-voltar], para simular este exercicio como o usuario final utilize o comando [-simular]...");
			QuestionCMD(4);
			break;
		}
		case 5:
		{
			printf("\nCódigo-fonte:\n\n-----------------------------------------------------------\n");
			
			PrintStringByChar("#include <stdio.h>\n\nint main(int argc, char *argv[])\n{\n");
			delay(500);
			PrintStringByChar("	int a, b;\n	double result;\n	char c;\n\n");
			delay(500);
			PrintStringByChar("	printf(\"Digite dois valores numéricos e um símbolo [+, -, / ou *] para realizar uma operação\");\n\n");
			delay(500);
			PrintStringByChar("	scanf(\"%d%d%c\", &a, &b, &c);\n\n");
			delay(500);
			PrintStringByChar("	while(c != '+' && c != '-' && c != '*' && c != '/')\n	{\n		printf(\"Você precisa inserir um símbolo válido [+, -, / ou *]\");\n");
			delay(500);
			PrintStringByChar("		scanf(\"%d%d%c\", &a, &b, &c);\n	}\n\n");
			delay(500);
			PrintStringByChar("	switch('c')\n");
			delay(500);
			PrintStringByChar("	{\n		case '+': result = a + b;\n		case '-': result = a - b;\n		case '*': result = a * b;\n		case '/': result = a / b;\n");
			delay(500);
			PrintStringByChar("	}\n\n");
			delay(500);
			PrintStringByChar("	printf(\"O resultado da conta %d%c%d é %f\", a, c, b, result);\n\n");
			delay(500);
			PrintStringByChar("	return 0;\n}");
			printf("\n-----------------------------------------------------------\n\n");
			printf("Para voltar ao menu anterior digite o comando [-voltar], para simular este exercicio como o usuario final utilize o comando [-simular]...");
			QuestionCMD(5);
			break;
		}
		case 6:
		{
			printf("\nCódigo-fonte:\n\n-----------------------------------------------------------\n");
			
			PrintStringByChar("#include <stdio.h>\n\nint main(int argc, char *argv[])\n{\n");
			delay(500);
			PrintStringByChar("	int A, B, C;\n\n	scanf(\"%d%d%d\", &A, &B, &C);\n\n");
			delay(500);
			PrintStringByChar("	//verificar se é um triângulo\n");
			delay(500);
			PrintStringByChar("	if(A + B > C && A + C > B && B + C > A)\n	{\n");
			delay(500);
			PrintStringByChar("		if(A == B && A == C) printf(\"Triângulo equilátero!\");\n\n");
			delay(500);
			PrintStringByChar("		else\n		{\n");
			delay(500);
			PrintStringByChar("			if(A != B && A != C && B != C) printf(\"Triângulo escaleno!\");\n");
			delay(500);
			PrintStringByChar("			else printf(\"Triângulo isósceles!\");\n		}\n	}\n	else printf(\"Não é um triângulo!\");\n");
			delay(500);
			PrintStringByChar("	return 0;\n}");
			printf("\n-----------------------------------------------------------\n\n");
			printf("Para voltar ao menu anterior digite o comando [-voltar], para simular este exercicio como o usuario final utilize o comando [-simular]...");
			QuestionCMD(6);
			break;
		}
	}
	return 0;
}

int GetQuestionSubject(int questionid, char subject[])
{
	switch(questionid)
	{
		case 1:
		{
			sprintf(subject, "Montar um programa para ler o valor de uma conta e calcular o valor a pagar já acrescido da gorjeta do garçom (10%% do valor da conta). O programa deverá solicitar também o valor em dinheiro utilizado pelo cliente para pagar a conta e informar o troco.");
			break;
		}
		case 2:
		{
			sprintf(subject, "Escreva um programa que faz a conversão de temperaturas de Fahrenheit para Celsius, segundo a fórmula conhecida:\n\nC = 5/9(F-32)");
			break;
		}
		case 3:
		{
			sprintf(subject, "Escreva um programa que recebe um horário (horas, minutos e segundos) e determina quantos segundos já se passaram desde que o dia começou.");
			break;
		}
		case 4:
		{
			sprintf(subject, "Faça um programa que receba cinco valores e calcule suas médias:\n\nMédia Aritimética = (a+b+c+d+e)/5\n\nMédia Harmônica = 5/(1/a +1/b +1/c +1/d +1/e)");
			break;
		}
		case 5:
		{
			sprintf(subject, "Faça um algoritmo que leia 2 valores numéricos e um símbolo. Caso o símbolo seja um dos relacionados abaixo efetue a operação correspondente com os valores.\n\n\"+\" operação de soma \
			\n\"-\" operação de subtração\n\"*\" operação de multiplicação\n\"\\\" operação de divisão");
			break;
		}
		case 6:
		{
			sprintf(subject, "Dados 3 valores A, B, C, verifique se podem ser valores de lados um triângulo (cada lado ser menor do que a soma dos outros dois) e, se for, determine se o triângulo é eqüilátero (todos os lados iguais), isósceles (somente dois lados iguais) ou escaleno (todos diferentes).");
			break;
		}
		case 7:
		{
			sprintf(subject, "Escrever um programa que lê o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula:\n\nMA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7  \
			\nA atribuição de conceitos obedece a tabela abaixo:\n\n\nMédia de Aproveitamento ---> Conceito\n9,0 ---> A\n7,5 e < 9,0 ---> B\n6,0 e < 7,5 ---> C\n4,0 e < 6,0 ---> D\n< 4,0 ---> E\n\nO programa deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento,\
o conceito correspondente e a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E. ");
			break;
		}
		case 8:
		{
		
		}
		case 9:
		{
		
		}
		case 10:
		{
		
		}
		case 11:
		{
		
		}
		case 12:
		{
		
		}
		
		case 13:
		{
		
		}
		case 14:
		{
		
		}
		case 15:
		{
		
		}
		case 16:
		{
		
		}		
	}
	return 0;
}

int printchar(int step)
{
	switch(step)
	{
		case 0: 
		{
			system("color f");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| | _____  _____ | |");
			printf("\n| ||_   _||_   _|| |");
			printf("\n| |  | |    | |  | |");
			printf("\n| |  | '    ' |  | |");
			printf("\n| |   \\ `--' /   | |");
			printf("\n| |    `.__.'    | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 1:
		{
			system("color c");
			printf("\n .-----------------.");
			printf("\n| .--------------. |");
			printf("\n| | ____  _____  | |");
			printf("\n| ||_   \\|_   _| | |");
			printf("\n| |  |   \\ | |   | |");
			printf("\n| |  | |\\ \\| |   | |");
			printf("\n| | _| |_\\   |_  | |");
			printf("\n| ||_____|\\____| | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 2:
		{
			system("color f");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |     _____    | |");
			printf("\n| |    |_   _|   | |");
			printf("\n| |      | |     | |");
			printf("\n| |      | |     | |");
			printf("\n| |     _| |_    | |");
			printf("\n| |    |_____|   | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
			
		}
		case 3:
		{
			system("color c");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |     ______   | |");
			printf("\n| |   .' ___  |  | |");
			printf("\n| |  / .'   \\_|  | |");
			printf("\n| |  | |         | |");
			printf("\n| |  \\ '.___.'\\  | |");
			printf("\n| |   '._____.'  | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 4:
		{
			system("color f");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |      __      | |");
			printf("\n| |     /  \\     | |");
			printf("\n| |    / /\\ \\    | |");
			printf("\n| |   / ____ \\   | |");
			printf("\n| | _/ /    \\ \\_ | |");
			printf("\n| ||____|  |____|| |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 5:
		{
			system("color c");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |  _______     | |");
			printf("\n| | |_   __ \\    | |");
			printf("\n| |   | |__) |   | |");
			printf("\n| |   |  __ /    | |");
			printf("\n| |  _| |  \\ \\_  | |");
			printf("\n| | |____| |___| | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 6:
		{
			system("color f");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |     _____    | |");
			printf("\n| |    |_   _|   | |");
			printf("\n| |      | |     | |");
			printf("\n| |      | |     | |");
			printf("\n| |     _| |_    | |");
			printf("\n| |    |_____|   | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 7:
		{
			system("color c");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |     ____     | |");
			printf("\n| |   .'    `.   | |");
			printf("\n| |  /  .--.  \\  | |");
			printf("\n| |  | |    | |  | |");
			printf("\n| |  \\  '--'  /  | |");
			printf("\n| |   `.____.'   | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;	
		}
		case 8:
		{
			system("color f");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |     ______   | |");
			printf("\n| |   .' ___  |  | |");
			printf("\n| |  / .'   \\_|  | |");
			printf("\n| |  | |         | |");
			printf("\n| |  \\ '.___.'\\  | |");
			printf("\n| |   '._____.'  | |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		case 9:
		{
			system("color c");
			printf("\n .----------------. ");
			printf("\n| .--------------. |");
			printf("\n| |      __      | |");
			printf("\n| |     /  \\     | |");
			printf("\n| |    / /\\ \\    | |");
			printf("\n| |   / ____ \\   | |");
			printf("\n| | _/ /    \\ \\_ | |");
			printf("\n| ||____|  |____|| |");
			printf("\n| |              | |");
			printf("\n| '--------------' |");
			printf("\n '----------------' ");
			break;
		}
		
	}
	return 0;
}

int delay(int mseconds)
{
    long pause;
    clock_t now,then;

    pause = mseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
    return 0;
}

int PrintStringByChar(char str[])
{
	int i = 0;
	while (str[i] != '\0') {
	  putchar(str[i]);
	  usleep(100000);
	  i++;
	}
	return 0;
}
