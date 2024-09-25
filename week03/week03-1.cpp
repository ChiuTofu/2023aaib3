///week03-1.cpp考試題目:除惡務盡，但無法執行。
///因為range-based for 迴圈必須在c++(2011之後)才能使用
///如果使用c++98(1998年版本c++)會無法正確編譯，迴圈出不來
///codeblacks 17.12裡勾選setting-compiler勾選第2個
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(char c:s){
		if(c!='2')cout<<c;
	}
	cout<<"\n";
}
