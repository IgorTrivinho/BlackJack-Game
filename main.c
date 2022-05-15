// ===== BIBLIOTECAS =====
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// ===== CONSTANTES =====
const char CARDS[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'd', 'K', 'Q', 'J' };

// ===== PROTÓTIPOS =====
void getCard(char* deck);
void printDeck(char* deck);

// ===== MAIN =====
int main() 
{
	char playerDeck[21];
	getCard(playerDeck);
	printDeck(playerDeck);
	
	
	
}

// ===== FUNÇÕES =====
void getCard(char* deck) {

	srand((int)time(NULL));

	for (int i = 0; i < 21; i++)
	{
		deck[i] = CARDS[rand() % 13];
	}
	
}

void printDeck(char* deck) {
	for (int i = 0; i < 21; i++)
		printf("%c ", deck[i]);
}