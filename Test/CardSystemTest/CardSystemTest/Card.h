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

struct CardInfo
{
	string CardName;
	int CardIndex;
	int CardType;
	int CardCost;
	int CardValue;
};

vector<CardInfo> Deck;
vector<CardInfo> Hand;
queue<CardInfo> DrawPile;
vector<CardInfo> DiscardPile;
vector<CardInfo> ExceptionPile;

CardInfo MakeCard(CardInfo InCardInfo, vector<CardInfo> &InDeck);
void ShowCardInfo(CardInfo inCardInfo);
void ShuffleCardAndIntoDrawPile(vector<CardInfo> &InDeck, queue<CardInfo>& InDrawPile); // ���ð� ���ÿ� DrawPile�� �־���
void DrawCard(queue<CardInfo> &InDeck, vector<CardInfo> &InHand);
void DiscardCard(vector<CardInfo> &InHand, vector<CardInfo> &DiscardPile, CardInfo &InCard); //ī�� ������(�ڵ忡��)
void SortCard(vector<CardInfo> &SortPile); // ��, ���� ī�� ����, �ڵ� ���� CardIndex�� ������ �� ���
void SortCard(queue<CardInfo>& SortPile);

void ShowPile(vector<CardInfo> &InDeck);
void ShowPile(queue<CardInfo> &InDeck);


string VarCardName;
int VarCardIndex;
int VarCardType;
int VarCardCost;
int VarCardValue;
CardInfo VarCardInfo;
