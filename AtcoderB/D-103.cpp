#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << 1+1 << endl;
	cout << 3-4 << endl;
	cout << 2*3 << endl;
	cout << 7/3 << endl;
	/*
	C++では整数同士で割り算をした場合、結果は小数点以下を切り捨てた値になる
	小数点以下を切り捨てないで計算する場合は7.0/3.0のように.0をつける。
	*/
	cout << 7%3 << endl;
	//割った時の余りを返す。
	//多くの場合、割り算はできるだけ後の方が正確な結果になる。
	//0で割ると実行時エラー
}