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
void ShuffleCardAndIntoDrawPile(vector<CardInfo> &InDeck, queue<CardInfo>& InDrawPile); // 셔플과 동시에 DrawPile에 넣어줌
void DrawCard(queue<CardInfo> &InDeck, vector<CardInfo> &InHand);
void DiscardCard(vector<CardInfo> &InHand, vector<CardInfo> &DiscardPile, CardInfo &InCard); //카드 버리기(핸드에서)
void SortCard(vector<CardInfo> &SortPile); // 덱, 버린 카드 더미, 핸드 등을 CardIndex로 정렬할 때 사용
void SortCard(queue<CardInfo>& SortPile);

void ShowPile(vector<CardInfo> &InDeck);
void ShowPile(queue<CardInfo> &InDeck);


string VarCardName;
int VarCardIndex;
int VarCardType;
int VarCardCost;
int VarCardValue;
CardInfo VarCardInfo;
