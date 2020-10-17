#include<iostream>
using namespace std;

void binod(char mat[][5], int a[], int b[] ,int index=0)
{
	string output="";
	if(index==8)
	return;
	
	if(index % 4 == 0){
        cout<<mat[a[index]][b[index]-1];
    }
	else if(index % 4 == 1)
		cout<<mat[a[index]+1][b[index]];
		
	else if(index % 4 == 2)
		cout<<mat[a[index]][b[index]+1];
		
	else
		cout<<mat[a[index]-1][b[index]];
    binod(mat,a,b,index+1);
}

int main()
{
	int a[8]={0,1,1,4,4,3,1,3};
	int b[8]={2,2,2,0,2,3,0,1};
	
	char mat[5][5]={ 
		
		{'Z','E','B','C','Y'},
		{'X','A','L','T','S'},
		{'E','M','S','Q','R'},
		{'E','A','O','L','V'},
		{'D','R','G','H','H'}
		
	};
	
	binod(mat,a,b);
	
	return 0;
}		