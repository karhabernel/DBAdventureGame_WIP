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
void DrawCard(queue<CardInfo> & InDeck, CardInfo);
void DiscardCard(vector<CardInfo> &DiscardPile, CardInfo);
void ExceptCard(vector<CardInfo> &ExceptionPile, CardInfo);
void SortCard(vector<CardInfo> &SortPile); // ��, ���� ī�� ����, �ڵ� ���� CardIndex�� ������ �� ���

void ShowDeck(vector<CardInfo> &InDeck);
void ShowHand(vector<CardInfo> &Hand);
void ShowDrawPile(queue<CardInfo> &DrawPile);
void ShowDiscardPile(vector<CardInfo> &DiscardPile);
void ShowExceptionPile(vector<CardInfo> &ExceptionPile);

string VarCardName;
int VarCardIndex;
int VarCardType;
int VarCardCost;
int VarCardValue;
CardInfo VarCardInfo;
