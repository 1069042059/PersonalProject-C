#pragma once
#include<iostream>
#include<queue>
#include<unordered_map>
#include<fstream>
#include<string>

using namespace std;

#define Separator(x) (isspace(x) || (!IsNum(x) && !isalpha(x))) 
#define IsNum(x) (x >= '0' && x <= '9')

#define OUTWORD 0 // ��ǰû��ʶ�𵽺Ϸ�����
#define P1 1
#define P2 2
#define P3 3
#define NotAWord 4 
#define VALIDWORD 5 //��ǰʶ���˺Ϸ�����
#define ERROR 6
#define WORDCOUNT 20

/*
������:MySort
���� :ǰ10���������������򷽷���
*/
bool MySort(const pair<int, string>&word1, const pair<int, string>&word2);


/*
������:TransitionStoreWord
����:״̬ת�Ʋ�����ȷ�ĵ�����ȡ���ַ�����
����:@state��ǰ״̬
	 @input:��ǰ����
	 @word:��һ���Ϸ��ĵ��ʱ���⵽�������洢�����
����:@int:��״̬
*/
int TransitionStoreWord(int state, char input, string &word);

/*
������:InsertToHashTable
����:�ڹ�ϣ���в���Ϸ��ĵ��ʡ�������TransitionStoreWord()����
����:@word:�Ϸ��ĵ���
����:void
*/
void InsertToHashTable(string &word);

/*
������:WordFrequency
����:����ÿ���������ļ��г��ֵĴ������洢��һ����ϣ�����������ת����InsertToHashTable�İ�װ��
����:@filename:��Ҫͳ�Ƶ��ʵ��ļ�
����:void
*/
void WordFrequency(char *filename);

/*
��������:TopTenWords
����:��ʾƵ����ߵ�10�����ʡ�
����:
����:vector<pair<int, string>>:ǰ10�����ʼ�����������б�
*/
vector<pair<int, string>> TopTenWords();

/*
������:OutputToFile
���� :��ǰ10�������������Ϊ��output.txt�����ļ���
���� :@top10words:top10�����б�
����:int:��������ȷ��Ϊ0������Ϊ - 1��
*/
int OutputToFile(vector<pair<int, string>> & Top10words,char *filename);

/*
������:StandardOutput
����:���ǰ10�����ʵ���׼���
����:@ top10words : top10�����б�
����:int:��������ȷ��Ϊ0������Ϊ - 1��
*/
int StandardOutput(vector<pair<int, string>> & Top10words);