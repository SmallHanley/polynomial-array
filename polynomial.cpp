#include <iostream>
#include <cstdio>
using namespace std;

typedef struct{
	int degree;
	float coef;
}poly;


int main(){
	poly term[100];
	int sa = 0, fa = 0, sb = 0, fb = 0, sc = 0, fc = 0;
	while(1){
		cin >> term[fa].coef;
		cin >> term[fa].degree;
		fa++;
		char c = getchar();
		if(c == '\n')	break;
	}
	sb = fb = fa;
	while(1){
		cin >> term[fb].coef;
		cin >> term[fb].degree;
		fb++;
		char c = getchar();
		if(c == '\n')	break;
	}
	for(int i = sa; i < fa; i++){
		cout << term[i].coef << "x^" << term[i].degree;
		if(i != fa - 1){
			cout << " + ";
		}
	}
	cout << endl;
	for(int i = sb; i < fb; i++){
		cout << term[i].coef << "x^" << term[i].degree;
		if(i != fb - 1){
			cout << " + ";
		}
	}
	cout << endl;
	sc = fc = fb;
	int ta = sa;
	int tb = sb;
	while(ta < fa && tb < fb){
		if(term[ta].degree == term[tb].degree){
			term[fc].degree = term[ta].degree;
			term[fc].coef = term[ta].coef + term[tb].coef;
			ta++;
			tb++;
			fc++;
		}
		else if(term[ta].degree > term[tb].degree){
			term[fc].degree = term[ta].degree;
			term[fc].coef = term[ta].coef;
			ta++;
			fc++;
		}
		else{
			term[fc].degree = term[tb].degree;
			term[fc].coef = term[tb].coef;
			tb++;
			fc++;
		}
	}
	for(; ta < fa; ta++){
		term[fc].degree = term[ta].degree;
		term[fc].coef = term[ta].coef;
		fc++;
	}
	for(; tb < fb; tb++){
		term[fc].degree = term[tb].degree;
		term[fc].coef = term[tb].coef;
		fc++;
	}
	for(int i = sc; i < fc; i++){
		cout << term[i].coef << "x^" << term[i].degree;
		if(i != fc - 1){
			cout << " + ";
		}
	}
	cout << endl;
	cout << "second modify" << endl;
	return 0;
} 
