#include<stdio.h>
#include<map>
#include<string>
#include<iostream>
using namespace std;
map<char,int> mapa;
string linha;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			mapa.clear();
			int k;
			scanf("%d",&k);
			for (int i=1;i<=k;i++)
				{
					char x;
					scanf(" %c",&x);
					int p;
					scanf("%d",&p);
					mapa[x]=p;
				}
			int m;
			scanf("%d",&m);
			getline(cin,linha);
			int soma=0;
			for (int i=1;i<=m;i++)
			{
				getline(cin,linha);
				int sz=linha.size();
				for (int j=0;j<sz;j++)
					{
						if (mapa.find(linha[j])!=mapa.end())
							soma+=mapa[linha[j]];
					}
			}
			double answer=soma;
			answer/=100;
			printf("%.2lf$\n",answer);

		}
	return 0;
}