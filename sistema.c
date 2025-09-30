#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int op;
    while (op!=6)
    {
        system("cls");
        printf("\nEscolha uma opcao:\n");
        printf("1 - Cadastro e login\n");
        printf("2 - Modulo pessoal\n");
        printf("3 - Modulo financeiro\n");
        printf("4 - Modulo academico\n");
        printf("5 - Modulo ultilidades\n");
        printf("6 - Sair\n");
        scanf("%d", &op);
        if (op==1)
        {
            system("cls");
            char login[20];           
    		int senha;                
    		char loginDigitado[20];   
    		int senhaDigitada;        
    		int logado = 0;
    		int i, iguais;

    		printf("--- CADASTRE-SE ---\n");

    
    		printf("Crie seu login: ");
    		scanf("%s", login);

    
    		while(1) 
			{
        		printf("Crie sua senha: ");
        		scanf("%d", &senha);
        		if (senha >= 100000 && senha != 123456) {
            	printf("Senha aceita!\n");
            	break;
   			} 
			else
	    	{
            	printf("Senha invalida! Tente novamente.\n");
        	}
    		}

    
    		printf("\n#### LOGIN ####\n");
    		while(logado == 0) {
        	printf("Digite seu login: ");
        	scanf("%s", loginDigitado);
        	printf("Digite sua senha: ");
        	scanf("%d", &senhaDigitada);

        
        	iguais = 1; 
        	for(i=0; i<20; i++) 
			{
            if(login[i] != loginDigitado[i]) 
			{
                iguais = 0;
                break;
            }
            if(login[i]==0 && loginDigitado[i]==0) { 
                break;
            }
  	  	    }	

        	if(iguais == 1 && senhaDigitada == senha) {
            printf("Login realizado com sucesso!\n");
            logado = 1;
        	} else 
			{
            printf("Login ou senha incorretos! Tente novamente.\n");
        	}
    		}

    		printf("Bem-vindo ao portal de servicos!\n");
			Sleep(2000);	
        }
        if (op==2)
        {
            system("cls");
            int escolha;
            printf("Escolha:\n1 - Verificar idade\n2 - Calcular IMC\n");
            scanf("%d", &escolha);
            if (escolha==1)
            {
                system("cls");
                int idade;
                printf("Quantos anos voce tem?\n");
                scanf("%d", &idade);
                if (idade < 16) 
				{
        			printf("Voce e menor de idade.\n");
        			printf("Nao pode votar.\n");
  				} else if (idade >= 16 && idade < 18) {
        		printf("Voto opcional.\n");
  		 		 }		 
				else 
				{ 
        			printf("Voce e maior de idade.\n");
        			printf("Voto obrigatorio.\n");
    			}
    			Sleep(2000);
            }
            if (escolha==2)
            {
                float peso, altura, imc;
	            printf("Insira a sua altura (em m):\n");
	            scanf("%f", &altura);
	            printf("Insira o seu peso (em Kg):\n");
	            scanf("%f", &peso);
	            imc = peso/(altura*altura);
	            printf("IMC = %.2f", imc);
                Sleep(1000);
            }
            
            
        }
        if (op==3)
        {
            system("cls");
            int escolha;
            printf("1 - Salario em 12 meses\n2 - Salario de periodo(diaria x dias trabalhados)\n3 - Conversao de reais para dolares ou euros\n");
            scanf("%d", &escolha);
            if (escolha==1)
            {
                int salario, total;
                printf("Digite o seu salario: \n");
                scanf("%d", &salario);
                total = salario*12;
                printf("Em 12 meses voce receberia %dR$", total);
                Sleep(2000);
            }
            if (escolha==2)
            {
                int dias;
                float diaria, total;
                printf("Quantos dias voce trabalhou?\n");
                scanf("%d", &dias);
                printf("Quanto voce recebe por dia?\n");
                scanf("%f",&diaria);
                total = dias*diaria;
                printf("Em %d dias voce recebera %.2fR$", dias, total);
                Sleep(2000);
            }
            if (escolha==3)
            {
                float reais;
                float dol = 5.30;
                float euro = 6.25;
                printf("Quantos reais deseja converter?\n");
                scanf("%f", &reais);
                printf("Valor em dolar = %.2f | Valor em euro = %.2f", reais/dol, reais/    euro);
                Sleep(2000);
            }
            
            
            
        }
        if (op==4)
        {
            system("cls");
            int escolha;
            printf("1 - Ler notas e classificacao\n2 - Soma, media e dobro da media\n");
            scanf("%d", &escolha);
            if (escolha==1)
            {
                float nota1,nota2, media;
                printf("\nNota 1:\n");
                scanf("%f", &nota1);
                printf("\nNota 2:\n");
                scanf("%f", &nota2);
                media = (nota1+nota2)/2;
                if (media >= 7)
	            {
		            printf("Voce esta aprovado");
                    Sleep(2000);
	            }   
	            else if (media <= 6.9 && media > 4) 
	            {
		            printf("Voce esta em recuperacao");
                    Sleep(2000);
	            }
	            else
	            {
		            printf("Voce esta reprovado");
                    Sleep(2000);
	            }
            }
            if (escolha==2)
            {
                float nota1,nota2, media, soma;
                printf("\nNota 1:\n");
                scanf("%f", &nota1);
                printf("\nNota 2:\n");
                scanf("%f", &nota2);
                media = (nota1+nota2)/2;
                soma = nota1 + nota2;
                printf("\nSoma: %.2f | Media: %.2f | Dobro da media: %.2f", soma, media, media*2);
                Sleep(2000);
            }
            
            
        }
        if (op==5)
        {
            system("cls");
            int escolha;
            printf("\n1 - Par ou impar\n2 - Numero entre 10 e 50\n3 - Area e perimetro\n4 - Horas em segundos e minutos\n");
            scanf("%d", &escolha);
            if (escolha==1)
            {
                int num;
                printf("Digite um numero:");
                scanf("%d", &num);
                if(num%2 == 0)
	            {
		            printf("O numero eh par");
                    Sleep(2000);
	            }
	            else
	            {
		            printf("O numero eh impar");
                    Sleep(2000);
	            }      
    
            }
            if (escolha==2)
            {
                int num;
	            printf("Digite um numero\n");
	            scanf("%d", &num);
	            if (num >= 10 && num <= 50)
	            {
		            printf("O numero esta entre 10 e 50");
                    Sleep(2000);
	            }
	            else
	            {
		            printf("O numero nao esta entre 10 e 50");
                    Sleep(2000);
	            }
            }
            if (escolha==3)
            {
                int escolha2;
                printf("Retangulo (1) ou circulo (2)?");
                scanf("%d", &escolha2);
                if (escolha2==1)
                {
                    float base, altura, area, perimetro;
                    printf("Digite a base:\n");
                    scanf("%f", &base);
                    printf("Digite a altura:\n");
                    scanf("%f", &altura);
                    area = base*altura;
                    perimetro = 2*(base+altura);
                    printf("Area = %.2f | Perimetro = %.2f", area, perimetro);
                    Sleep(2000);
                }
                if (escolha2==2)
                {
                    float pi = 3.1416;
                    int raio;
                    float peri, area;
                    printf("Qual o raio do circulo:\n");
                    scanf("%d", &raio);
                    peri = 2*pi*raio;
                    area = pi*raio*raio;
                    printf("Perimetro = %.2f | Area = %.2f", peri, area);
                    Sleep(2000);
                }
                
                
            }
            if (escolha==4)
            {
                system("cls");
                int segundos, horas, minutos, resto;
                printf("Segundos:\n");
                scanf("%d", &segundos);
                horas = segundos / 3600;
                resto = segundos % 3600;
                minutos = resto / 60;
                printf("%d segundos correspondem a %d horas e %d minutos", segundos, horas, minutos);
                Sleep(2000);
            }
            
            
        }
        
        
        
        

    }
    
    return 0;
}
