// ===== BIBLIOTECAS =====
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// ===== CONSTANTES GLOBAIS =====
const char CARDS[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'd', 'K', 'Q', 'J' };

// ===== VARIÁVEIS GLOBAIS =====
char playersDeck[21][2];
int playersCardsQty[2] = {0, 0};

// ===== PROTÓTIPOS =====
void setup();

void getCard(int player);
void printDeck(int player);
void fillDeck(int player, char character);

// ===== MAIN =====
int main() 
{
	setup();
	
	
	
}

// ===== FUNÇÕES =====
void setup() {
	printf("====== JOGO DE 21 - BLACKJACK ======\n");

	// Configura a semente da função rand() com o valor em segundos da hora atual, para gerar números aleatórios.
	srand((int)time(NULL));

	// Executa a configuração inicial para todos os jogadores
	for (int player = 0; player < 2; player++) {
		
		// Preenche a mão do jogador com vazio
		fillDeck(player, '*');

		// Compra 2 cartas
		for(int i=0; i<2; i++)
			getCard(player);

		// APAGAR - imprime a mão do jogador
		printDeck(player);
	}

}

void getCard(int player)
{
	// Adiciona uma carta aleatória à mão de um jogador
	playersDeck[playersCardsQty[player]][player] = CARDS[rand() % 13];
	printf("%d\n", rand());

	// Acrescenta 1 à contagem de cartas
	playersCardsQty[player]++;
	
}

void printDeck(int player) 
{
	for (int i = 0; i < 21; i++)
		printf("%c ", playersDeck[i][player]);

	printf("\n");
}

void fillDeck(int player, char character)
{
	for (int i = 0; i < 21; i++)
		playersDeck[i][player] = character;
}