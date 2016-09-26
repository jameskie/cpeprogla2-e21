#include<iostream>
#include<string.h>
using namespace std;
char str1[100],str2[200],word[100],yesno;
int n,flag,chooser;
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
int choose(int chooser);
char again(char yesno);

void prob1() 
{
	cout<<"\nSTRING COMPARE";
	cin.ignore();
	cout<<"\nEnter a first word (str1): ";
	gets(str1);
	cout<<"\nEnter a second word (str2): ";
	gets(str2);
	if(strcmp(str1,str2)==0) cout<<"equal =)\n";
	else if(strcmp(str1,str2)>0) cout<<"positive \n";
	else if(strcmp(str1,str2)<0) cout<<"negative \n";
}

void prob2() 
{
	cout<<"\nSTRING COPY"<<endl;
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter a second word (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcpy(str1, str2);
}

void prob3() 
{
	cout<<"\nSTRING CONCATENATION"<<endl;
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter a second word (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2);
}

void prob4() 
{
	cout<<"\nPALINDROME"<<endl;
	cin.ignore();
	cout<<"\nEnter a word: ";
	gets(word);
	n=strlen(word);
	for(int i=0;i<n;i++) 
	{
		if(word[i]!=word[n-(i+1)]) flag=0;
		else flag=1;
    }
    if (flag==1) cout<<word<<" is a Palindrome.";
    else if (flag==0) cout<<word<<" is not a Palindrome.";
}

void prob5() 
{
	cout<<"\nCAPITALIZATION"<<endl;
	cin.ignore();
	cout<<"\nEnter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) 
	{
		if(word[i]==32) word[i+1]-=32;
	}
	cout<<word<<endl;
}

void prob6() 
{
	cout<<"\nREVERSE VERTICAL ORDER"<<endl;
	cin.ignore();
	cout<<"\nEnter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) 
	{
		if (word[i]==32) 
		{
			int j=i+1;
			while(word[j]!=32&&j<n) 
			{
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) 
	{
		cout<<word[k];
		k++;
	}
}

int choose(int chooser) 
{
	cout<<"Choose a problem # to solve (1-6): ";
	cin>>chooser;
	switch(chooser) 
	{
		case 1:
			prob1();
			again(yesno);
			break;
		case 2:
			prob2();
			again(yesno);
			break;
		case 3:
			prob3();
			again(yesno);
			break;
		case 4:
			prob4();
			again(yesno);
			break;
		case 5:
			prob5();
			again(yesno);
			break;
		case 6:
			prob6();
			again(yesno);
			break;
		default:
			break;
	}
	return chooser;
}

char again(char yesno) 
{
	cout<<"\nSolve another problem? [y/n] ";
	cin>>yesno;
	if (yesno=='y') 
	{
		system("cls");
		choose(chooser);
	}
	else if (yesno=='n') 
	{
		cout<<"\nThanks for using this program \n";
	}
	else 
	{
		again(yesno);
	}
	return yesno;
}

main() 
{
	choose(chooser);
}
