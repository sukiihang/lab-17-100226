#include<iostream>
using namespace std;

char* myString(char*&p ,int N){
	p = new char[N+1];
	for(int i = 0; i < N;i++) p[i] = 'A'+i;
	p[N] = 0;
	return p;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
