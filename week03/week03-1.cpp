///week03-1.cpp�Ҹ��D��:���c�ȺɡA���L�k����C
///�]��range-based for �j�饲���bc++(2011����)�~��ϥ�
///�p�G�ϥ�c++98(1998�~����c++)�|�L�k���T�sĶ�A�j��X����
///codeblacks 17.12�̤Ŀ�setting-compiler�Ŀ��2��
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
