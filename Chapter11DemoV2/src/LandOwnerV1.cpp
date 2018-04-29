#include "LandOwnerV1.h"
#include <iostream>
#include <vector>


using namespace std;

LandOwnerV1::LandOwnerV1()
{
    //ctor
    SetNickName("Ĭ�ϵ���");
    SetSex("����");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
    InitCards();
}

LandOwnerV1::LandOwnerV1(string nickName):m_NickName(nickName)
{
    SetSex("����");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner(string)" << endl;
    InitCards();

}

LandOwnerV1::LandOwnerV1(string nickName,string sex,int gold,long exp):m_NickName(nickName),m_Sex(sex),m_Gold(gold),m_Exp(exp)
{
    cout << "LandOwner(string,string,int,long)" << endl;
    InitCards();
}

void LandOwnerV1::ShowInfo()
{
    cout << "�ǳ�:" << GetNickName() << endl;
    cout << "�Ա�:" << GetSex() << endl;
    cout << "���:" << GetGold() << endl;
    cout << "����:" << GetExp() << endl;

}

///��ʼ���������飬�������飬Ĭ����������
void LandOwnerV1::InitCards()
{
    //����Ĭ�ϵ�һ������
    for(int i = 0; i < 54; i++){
        packCards.push_back(i+1);//push_back��������������ĩβ����һ��Ԫ��
        surplusCards.push_back(packCards.at(i));
    }
    currCards.clear();///������������

    ShowCards(packCards);
}
/*//C���Ե�д��
 void LandOwnerV1::ShowCards(const vector<int>& cards)
 {

     for(int i = 0; i < cards.size(); i++)
     {
         cout << cards[i] << ",";

     }
     cout << endl;
 }
*/

/*///ʹ�õ�����
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    for(vector<int>::const_iterator iter = cards.begin(); iter!= cards.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}
*/
/*///ʹ���Զ��ƶ�����
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    for(auto iter = cards.begin(); iter!= cards.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}
*/

/*///for������� - c++11
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    for(auto card:cards)
    {
        cout << card << ",";
    }
    cout <<endl;
}
*/

///ʹ���㷨�ķ�ʽ�������������ݸ��Ƶ�cout�󶨵ĵ�������
///#include <iteraror>    #include <algorithm>
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    copy(cards.cbegin(), cards.cend(),ostream_iterator<int>(cout,","));
    cout << endl;
}
void LandOwnerV1::TouchCard(int cardCount)
{
    srand(time(NULL)); //ʱ������
    //�������һ��ʣ���Ƽ������е��ƣ���ӵ�currCards�����У���surplusCards��ɾ��������
    for(int i = 0; i < cardCount; i++){
        int randIndex = rand() % 54; //0-53֮����������
        //�жϣ�������ɵ��������Ƿ���ʣ���Ƽ�����
        if(isContains(packCards[randIndex])){
            currCards.push_back(packCards[randIndex]);//���������Ʒ��뵱ǰ��������
            //��ʣ�����Ƽ�����ɾ��������
        }
    }
}


void LandOwnerV1::deleteCard(vector<int>& cardVec ,int card)
{
    //��ͨ����
    /*
    for(auto iter = cardVec.begin(); iter!= cardVec.end();){
        if(*iter == card){//����ҵ�����ɾ��Ԫ��
            iter = cardVec.erase(card);//����ķ���ֵָ����ɾ��Ԫ�ص���һԪ��
        }else{
            ++iter;//�����ж���һԪ���Ƿ���ͬ
        }
    }
    */
    auto iter = find(cardVec.begin(),cardVec.end(), card);
    if(iter != cardVec.end()){
        cardVec.erase(card);
    }
}

///ʹ���㷨����
bool LandOwnerV1::isContains(int cardNum)
{
    vector<int>::iterator iter = find(surplusCards.begin(),surplusCards.end(),cardNum);
    /*
    if(iter == surplusCards.end()){
        return false;
    }
    */
    return iter == surplusCards.end();
/*///��ͨ����
    for(int i = 0; i < surplusCards.size(); i++){
        if(surplusCards[i] == cardNum){
            return true;
        }
    }
    return false;
    */
}









LandOwnerV1::~LandOwnerV1()
{
    //dtor
    cout << GetNickName() << "���ͷţ�" <<endl;
}
