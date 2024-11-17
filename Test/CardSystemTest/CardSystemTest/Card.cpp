#include "Card.h"

int main()
{
	for (int i = 0; i < 5; i++) // 카드정보 입력
	{


		cout << "CardName : ";
		cin >> VarCardInfo.CardName;

		cout << "\n" << "CardIndex : ";
		cin >> VarCardInfo.CardIndex;

		cout << "\n" << "CardType : ";
		cin >> VarCardInfo.CardType;

		cout << "\n" << "CardCost : ";
		cin >> VarCardInfo.CardCost;

		cout << "\n" << "CardValue : ";
		cin >> VarCardInfo.CardValue;

		MakeCard(VarCardInfo, Deck);

		cout << endl;
		cout << "-------------------------------------------" << endl;

	}

	for (int i = 0; i < Deck.size(); i++)
	{
		ShowCardInfo(Deck[i]);
	}

	ShuffleCardAndIntoDrawPile(Deck, DrawPile);
	

	//for (int i = 0; i < DrawPile.size(); i++)
	//{
	//	ShowCardInfo(DrawPile.front());
	//	//DrawPile.pop();

	//	PoP을 해주면 DrawPile size가 작아져서 for문이 제대로 돌지 않는다.. 어떻게 해야?
	//}

	while (!DrawPile.empty())
	{
		ShowCardInfo(DrawPile.front());
		DrawCard(DrawPile, Hand);
	}


	return 0;
}

CardInfo MakeCard(CardInfo InCardInfo, vector<CardInfo> &InDeck)
{
	InDeck.push_back(InCardInfo);

	return CardInfo();
}

void ShowCardInfo(CardInfo inCardInfo)
{
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "CardName : " << inCardInfo.CardName << endl;
	cout << "CardIndex : " << inCardInfo.CardIndex << endl;
	cout << "CardType : " << inCardInfo.CardType << endl;
	cout << "CardCost : " << inCardInfo.CardCost << endl;
	cout << "CardValue : " << inCardInfo.CardValue << endl;
}

void ShuffleCardAndIntoDrawPile(vector<CardInfo> &InDeck, queue<CardInfo>& InDrawPile)
{
	random_shuffle(InDeck.begin(), InDeck.end());
	
	for (int i = 0; i < InDeck.size(); i++)
	{
		InDrawPile.push(InDeck[i]);
	}
	
	cout << endl << "Card Shuffled!" << endl<<endl;
}

void DrawCard(queue<CardInfo> &InDeck, vector<CardInfo> &InHand)
{
	if (InDeck.empty() != true)
	{
		InHand.push_back(InDeck.front());
		InDeck.pop();
	}
}


void DiscardCard(vector<CardInfo> &DiscardPile, CardInfo& InCard)
{

}

void ExceptCard(vector<CardInfo> &ExceptionPile)
{
}

void SortCard(vector<CardInfo> &SortPile)
{
}

void ShowDeck(vector<CardInfo> &InDeck)
{
}

void ShowHand(vector<CardInfo> &Hand)
{
}

void ShowDrawPile(queue<CardInfo> &DrawPile)
{
}

void ShowDiscardPile(vector<CardInfo> &DiscardPile)
{
}

void ShowExceptionPile(vector<CardInfo> &ExceptionPile)
{
}
