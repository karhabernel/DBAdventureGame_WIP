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
	//  -> while문으로 처리함
	//}

	SortCard(DrawPile);

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


void DiscardCard(vector<CardInfo> &InHand, vector<CardInfo> &DiscardPile, CardInfo& InCard)
{
	for (int i = 0; i < InHand.size(); i++)
	{
			//if (find(InHand.begin(), InHand.end(), InCard) != InHand.end())
		if(InHand[i].CardName == InCard.CardName 
			&& InHand[i].CardIndex == InCard.CardIndex
			&& InHand[i].CardType == InCard.CardType
			&& InHand[i].CardCost == InCard.CardCost
			&& InHand[i].CardValue == InCard.CardValue
			)
			{
				DiscardPile.push_back(InCard);
				InHand.erase(InHand.begin() + i);
				cout << endl << "InCard : " << InCard.CardName << endl << "DiscardCard : " << InHand[i].CardName << endl;
				break;
			}
	}	
}

void SortCard(vector<CardInfo> &SortPile)
{
	vector<CardInfo> TempCardPile;
	int MaxIndex = 0;
	
	// todo.
	// Index가 낮은 순서대로 정렬하여 Temp로 빼내고, insert로 첫항으로 밀어주기

}

void SortCard(queue<CardInfo>& SortPile)
{
	queue<CardInfo> TempCardPileQueue;
	int MaxIndex = 0;
}

void ShowPile(vector<CardInfo> &InDeck)
{
}

void ShowPile(queue<CardInfo>& InDeck)
{
}
