#include "LandOwnerV1.h"
#include <iostream>
#include <vector>


using namespace std;

LandOwnerV1::LandOwnerV1()
{
    //ctor
    SetNickName("默认地主");
    SetSex("保密");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
    InitCards();
}

LandOwnerV1::LandOwnerV1(string nickName):m_NickName(nickName)
{
    SetSex("保密");
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
    cout << "昵称:" << GetNickName() << endl;
    cout << "性别:" << GetSex() << endl;
    cout << "金币:" << GetGold() << endl;
    cout << "经验:" << GetExp() << endl;

}

///初始化手牌数组，牌组数组，默认牌数数组
void LandOwnerV1::InitCards()
{
    //生成默认的一副手牌
    for(int i = 0; i < 54; i++){
        packCards.push_back(i+1);//push_back函数用于在容器末尾插入一个元素
        surplusCards.push_back(packCards.at(i));
    }
    currCards.clear();///清零手牌数组

    ShowCards(packCards);
}
/*//C语言的写法
 void LandOwnerV1::ShowCards(const vector<int>& cards)
 {

     for(int i = 0; i < cards.size(); i++)
     {
         cout << cards[i] << ",";

     }
     cout << endl;
 }
*/

/*///使用迭代器
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    for(vector<int>::const_iterator iter = cards.begin(); iter!= cards.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}
*/
/*///使用自动推断类型
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    for(auto iter = cards.begin(); iter!= cards.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
}
*/

/*///for区间遍历 - c++11
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    for(auto card:cards)
    {
        cout << card << ",";
    }
    cout <<endl;
}
*/

///使用算法的方式，将容器的内容复制到cout绑定的迭代器中
///#include <iteraror>    #include <algorithm>
void LandOwnerV1::ShowCards(const vector<int>& cards)
{
    copy(cards.cbegin(), cards.cend(),ostream_iterator<int>(cout,","));
    cout << endl;
}
void LandOwnerV1::TouchCard(int cardCount)
{
    srand(time(NULL)); //时间种子
    //随机生成一张剩余牌集合中有的牌，添加倒currCards集合中，从surplusCards中删除这张牌
    for(int i = 0; i < cardCount; i++){
        int randIndex = rand() % 54; //0-53之间的随机数字
        //判断：随机生成的这张牌是否在剩余牌集合中
        if(isContains(packCards[randIndex])){
            currCards.push_back(packCards[randIndex]);//将摸的手牌放入当前手牌数组
            //在剩余手牌集合中删除这张牌
        }
    }
}


void LandOwnerV1::deleteCard(vector<int>& cardVec ,int card)
{
    //普通做法
    /*
    for(auto iter = cardVec.begin(); iter!= cardVec.end();){
        if(*iter == card){//如果找到，就删除元素
            iter = cardVec.erase(card);//这里的返回值指向已删除元素的下一元素
        }else{
            ++iter;//继续判断下一元素是否相同
        }
    }
    */
    auto iter = find(cardVec.begin(),cardVec.end(), card);
    if(iter != cardVec.end()){
        cardVec.erase(card);
    }
}

///使用算法查找
bool LandOwnerV1::isContains(int cardNum)
{
    vector<int>::iterator iter = find(surplusCards.begin(),surplusCards.end(),cardNum);
    /*
    if(iter == surplusCards.end()){
        return false;
    }
    */
    return iter == surplusCards.end();
/*///普通做法
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
    cout << GetNickName() << "被释放！" <<endl;
}
