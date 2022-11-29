#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int reversed=0,remainder,original_num=num;
	while(num!=0)
	{
		remainder=num%10;
		reversed=reversed*10+remainder;
		num=num/10;
	}
	if(reversed==original_num)
	{
		cout<<"the number is palindrome"<<endl;
	}
	else
	{
		cout<<"thios is not palindrome";
	}
	
	return 0;
}
	

