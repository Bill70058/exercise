#ifndef LANDOWNERV1_H
#define LANDOWNERV1_H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>


using namespace std;

class LandOwnerV1
{
    public:
        LandOwnerV1();
        LandOwnerV1(string);
        LandOwnerV1(string,string,int,long);//昵称，性别，金币，经验
        ~LandOwnerV1();

        string GetNickName() { return m_NickName; }
        void SetNickName(string val) { m_NickName = val; }
        string GetSex() { return m_Sex; }
        void SetSex(string val) { m_Sex = val; }
        int GetGold() { return m_Gold; }
        void SetGold(int val) { m_Gold = val; }
        long GetExp() { return m_Exp; }
        void SetExp(long val) { m_Exp = val; }

        void TouchCard(int CardCount);//摸牌
        void ShowInfo();
        void InitCards();//初始化手牌数组，牌组数组，默认牌数数组
        void ShowCards(const vector<int>&);//显示集合中的牌面
    protected:

    private:
        string m_NickName;
        string m_Sex;
        int m_Gold;
        long m_Exp;
        vector<int> currCards;//当前玩家的手牌数组
        vector<int>packCards;//默认的一副牌，从1~54
        vector<int>surplusCards;//摸牌后，牌组剩余的牌
        bool isContains(int cardNum); //剩余牌中是否包含cardNum这个牌面
        void deleteCard(vector<int>&, int);
};

#endif // LANDOWNERV1_H
