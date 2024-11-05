#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

#define Attack 0;
#define Defense 1;
#define Skill 2;
#define Buff 3;
#define Disadvantage 4;

using namespace std;

class CardInfo
{
	string CardName;
	int CardIndex;
	int CardType;
	int Cost;
	int Value;
};

vector<CardInfo> Deck;
vector<CardInfo> Hand;
queue<CardInfo> DrawPile;
vector<CardInfo> DiscardPile;
vector<CardInfo> ExceptionPile;

CardInfo MakeCard(string CardName, int CardIndex, int CardType, int Cost, int Value);
void ShuffleCard(vector<CardInfo> Deck);
void DrawCard(queue<CardInfo> Deck, CardInfo);
void DiscardCard(vector<CardInfo> DiscardPile, CardInfo);
void ExceptCard(vector<CardInfo> ExceptionPile, CardInfo);
void SortCard(vector<CardInfo> SortPile); // ��, ���� ī�� ����, �ڵ� ���� CardIndex�� ������ �� ���

void ShowDeck(vector<CardInfo> Deck);
void ShowHand(vector<CardInfo> Hand);
void ShowDrawPile(queue<CardInfo> DrawPile);
void ShowDiscardPile(vector<CardInfo> DiscardPile);
void ShowExceptionPile(vector<CardInfo> ExceptionPile);