#include <stdio.h>
#include <string.h>

int kmp(char* text, char* pattern)
{
	int n;
	int m;
	int i;
	int p;
	int ans;
	char next[10000];
	
	
	n = strlen(text);
	m = strlen(pattern);
	p = -1;
	ans = 0;
	
	next[0] = -1;
	for (i = 1; i < m; i ++)
	{
		while (p != -1 && pattern[i] != pattern[p+1]){
			p = next[p];
		}
		if (pattern[i] == pattern[p+1]){
			p++;
		} 
		else {
		}
		next[i] = p;
	}

	p = -1;		
	for (i = 0; i < n; i ++)
	{
		while (p != -1 && text[i] != pattern[p+1]){
			p = next[p];
		}
		if (text[i] == pattern[p+1]){
			p ++;
		}
		else {
		}
		if (p == m-1)
		{
			ans ++;
			printf("%d ", i - p + 1);
			p = next[p];
		}
		else{
		}
	}
	
	if (ans == 0){
		puts("False");
	}
	else {
	}
	
	return 0;
}

int main(){
	kmp("hello", "llo");
	return 0;
}