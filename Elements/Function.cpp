#include<bits/stdc++.h>
#include"pTOE.cpp"
using namespace std;
double get_atomic(string s){
    for(int i=1;i<=115;i++)
        if(s==elements[i].symbol)
            return elements[i].atomic;
    return -1;
}
string get_character(string s){
	for(int i=1;i<=115;i++)
		if(s==elements[i].symbol)
			return elements[i].character;
	return "无";
}
int get_number(string s){
    for(int i=1;i<=115;i++)
        if(s==elements[i].symbol)
            return elements[i].number;
    return -1;
}
string get_left(string s){
    for(int i=0;i<s.length();i++)
        if(s[i]=='+')
            return s.substr(0,i);
    return "None";
}
string get_right(string s){
    for(int i=0;i<s.length();i++)
        if(s[i]=='+')
            return s.substr(i+1,s.length()-i-1);
    return "None";
}
void getM(int qest,string a,int base,double fz){
    int len=a.length(),num,k=0;
    string b;
    qest==1?k=0:k=1;
    for(int i=k;i<len;i++){
        if(a[i]>='A'&&a[i]<='Z'){
            if(a[i+1]>='a'&&a[i+1]<='z'){
                b=a.substr(i,2);
                if(a[i+2]>='0'&&a[i+2]<='9'){
                    num=qest*base*(a[i+2]-'0');
                    i++;
                }
                else num=qest*base;
				i++;
			}
            else if(a[i+1]>='0'&&a[i+1]<='9'){
                b=a.substr(i,1);
                num=qest*base*(a[i+1]-'0');
                i++;
            }
            else {
                b=a.substr(i,1);num=qest;
            }
			cout<<b<<"%:"<<num*get_atomic(b)/fz*100.0<<"%"<<endl;
        }
        else if(a[i]=='('){
            int j=i+1;
            while(a[j]!=')') 
                j++;
            string c=a.substr(i,j-i);
            getM(a[j+1]-'0',c,qest,fz);
            i=j+1;
            return;
        }
    }
}
void createNewFill(){
    Fill();
    return ;
}