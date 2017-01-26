#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<<"\t\t CHECK IF THE STRINGS ARE ANAGRAMS";
	string strFirst, strSecond;
	int lenFirst, lenSecond, intCounter;
	intCounter=0;
	bool isAnagram=true;
	cout<<"\n\nEnter the first string: "; getline(cin,strFirst);
	cout<<"\nEnter the second string: "; getline(cin,strSecond);
	lenFirst = strFirst.size();
	lenSecond= strSecond.size();
	//Compare the lengths. FOr the strings to be anagrams the lenghts must be equal
	if(lenFirst!= lenSecond) 
	{
		cout<<"\n\nThese strings are not anagrams as they are of different length"<<endl;
		return 0;
	}
	for(int i=lenSecond-1; i>=0;i--)
	{
		if(strFirst[intCounter] == strSecond[i])
		{
			intCounter++;
			continue;
		}
		else
		{
			cout<<"\nThese strings are not anagrams."<<endl;
			isAnagram=false;
			return 0;
		}
	}
	if(isAnagram)
	{
		cout<<"\nThe string are anagrams";
	}		
}