#include <stdio.h>

int main()
{

//variaveis	
int i, j, menor;
float totalA, totalB, totalC, totalD, totalE, alturatotal = 0, pesototal = 0, pesoper = 0;
float timeA[11][3], timeB[11][3], timeC[11][3], timeD[11][3], timeE[11][3];	

//TIME A (obtencao - idade, peso e altura)

printf ("\nPROGRAMA DE INSCRICAO DOS ATLETAS\n");
printf ("\nTime A\n\n");
for (i = 0; i < 11; i++){
	printf ("Insira os dados do jogador %d (idade / peso / altura):\n", i+1);
	for (j = 0; j < 3; j++){
		scanf("%f", &timeA[i][j]);
	}
	printf ("\n");
}
			//impressao do time
printf ("O time A e:\n");
printf ("-------\t -----\t----\t------\n");
printf ("Jogador\t Idade\tPeso\tAltura\n");
printf ("-------\t -----\t----\t------\n");
for (i = 0; i < 11; i++){
	j = 0;
	printf ("%d\t", i+1);
	printf ("%.0f\t", timeA[i][j]);
	j++;
	printf ("%.2f\t", timeA[i][j]);
	j++;
	printf ("%.2f\n", timeA[i][j]);
}
printf ("-----------------------------------------------------------------");

//TIME B (obtencao - idade, peso e altura)
printf ("\nTime B\n\n");
for (i = 0; i < 11; i++){
	printf ("Insira os dados do jogador %d (idade / peso / altura):\n", i+1);
	for (j = 0; j < 3; j++){
		scanf("%f", &timeB[i][j]);
	}
	printf ("\n");
}
			//impressao do time
printf ("O time B e:\n");
printf ("-------\t -----\t----\t------\n");
printf ("Jogador\t Idade\tPeso\tAltura\n");
printf ("-------\t -----\t----\t------\n");
for (i = 0; i < 11; i++){
	j = 0;
	printf ("%d\t", i+1);
	printf ("%.0f\t", timeB[i][j]);
	j++;
	printf ("%.2f\t", timeB[i][j]);
	j++;
	printf ("%.2f\n", timeB[i][j]);
}
printf ("------------------------");

//TIME C (obtencao - idade, peso e altura)
printf ("\nTime C\n\n");
for (i = 0; i < 11; i++){
	printf ("Insira os dados do jogador %d (idade / peso / altura):\n", i+1);
	for (j = 0; j < 3; j++){
		scanf("%f", &timeC[i][j]);
	}
	printf ("\n");
}
			//impressao do time
printf ("O time C e:\n");
printf ("-------\t -----\t----\t------\n");
printf ("Jogador\t Idade\tPeso\tAltura\n");
printf ("-------\t -----\t----\t------\n");
for (i = 0; i < 11; i++){
	j = 0;
	printf ("%d\t", i+1);
	printf ("%.0f\t", timeC[i][j]);
	j++;
	printf ("%.2f\t", timeC[i][j]);
	j++;
	printf ("%.2f\n", timeC[i][j]);
}
printf ("-----------------------------------------------------------------");

//TIME D (obtencao - idade, peso e altura)
printf ("\nTime D\n\n");
for (i = 0; i < 11; i++){
	printf ("Insira os dados do jogador %d (idade / peso / altura):\n", i+1);
	for (j = 0; j < 3; j++){
		scanf("%f", &timeD[i][j]);
	}
	printf ("\n");
}
			//impressao do time
printf ("O time D e:\n");
printf ("-------\t -----\t----\t------\n");
printf ("Jogador\t Idade\tPeso\tAltura\n");
printf ("-------\t -----\t----\t------\n");
for (i = 0; i < 11; i++){
	j = 0;
	printf ("%d\t", i+1);
	printf ("%.0f\t", timeD[i][j]);
	j++;
	printf ("%.2f\t", timeD[i][j]);
	j++;
	printf ("%.2f\n", timeD[i][j]);
}
printf ("-----------------------------------------------------------------");

//TIME E (obtencao - idade, peso e altura)
printf ("\nTime E\n\n");
for (i = 0; i < 11; i++){
	printf ("Insira os dados do jogador %d (idade / peso / altura):\n", i+1);
	for (j = 0; j < 3; j++){
		scanf("%f", &timeE[i][j]);
	}
	printf ("\n");
}
			//impressao do time
printf ("O time E e:\n");
printf ("-------\t -----\t----\t------\n");
printf ("Jogador\t Idade\tPeso\tAltura\n");
printf ("-------\t -----\t----\t------\n");
for (i = 0; i < 11; i++){
	j = 0;
	printf ("%d\t", i+1);
	printf ("%.0f\t", timeE[i][j]);
	j++;
	printf ("%.2f\t", timeE[i][j]);
	j++;
	printf ("%.2f\n", timeE[i][j]);
}
printf ("----------------------------------");

// (A) menores de 18 anos
for (i = 0; i < 11 ;i++){
	if (timeA[i][0] < 18) menor++;
	if (timeB[i][0] < 18) menor++;
	if (timeC[i][0] < 18) menor++;
	if (timeD[i][0] < 18) menor++;
	if (timeE[i][0] < 18) menor++;
}
printf ("\n\na) %d jogadores sao menores de 18 anos", menor);

// (B) media de idade de cada time
for (i = 0; i < 11; i++){
	totalA = totalA + timeA[i][0];
	totalB = totalB + timeB[i][0];
	totalC = totalC + timeC[i][0];
	totalD = totalD + timeD[i][0];
	totalE = totalE + timeE[i][0];
}
printf ("\nb) A media de idade do time A foi de %.1f anos", totalA/11);
printf ("\n   A media de idade do time B foi de %.1f anos", totalB/11);
printf ("\n   A media de idade do time C foi de %.1f anos", totalC/11);
printf ("\n   A media de idade do time D foi de %.1f anos", totalD/11);
printf ("\n   A media de idade do time E foi de %.1f anos", totalE/11);

// (C) media de altura de todos os jogadores do campeonato

for (i = 0; i < 11; i++){
	alturatotal = alturatotal + timeA[i][2];
	alturatotal = alturatotal + timeB[i][2];
	alturatotal = alturatotal + timeC[i][2];
	alturatotal = alturatotal + timeD[i][2];
	alturatotal = alturatotal + timeE[i][2];
}
printf ("\nc) A media de altura do campeonato e de %.2f metros", alturatotal/55);

// (D) porcentagem de jogadores com mais de 80 quilos 
for (i = 0; i < 11; i++){
	if (timeA[i][1] > 80) pesototal++;
	if (timeB[i][1] > 80) pesototal++;
	if (timeC[i][1] > 80) pesototal++;
	if (timeD[i][1] > 80) pesototal++;
	if (timeE[i][1] > 80) pesototal++;
}
pesoper = (pesototal*100)/55;
printf ("\nd) A porcentagem com jogadores com mais de 80 quilos e de: %f", pesoper);


getch();
return 0;	
}
