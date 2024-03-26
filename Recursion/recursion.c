#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int recursion(int number);
int sumAll(int n);
int fibonacci(int n);
bool isPolindrom(char str[]);
int Exponent(int base, int exp);
void Reverse(char* str,int start, int end);

int main(){
   printf("recuırsion exercise factorial\n");
   printf("%d\n",recursion(5));
   printf("recursion exercise summ all number 1 to n:\n");
   printf("%d\n", sumAll(5));
   printf("recursion exercise fibonacci:\n");
   printf("%d\n",recursion(5));
   printf("recursion exercıse polındrom:\n");
   printf("%d\n",isPolindrom("12321"));
   printf("exponent:\n");
   printf("%d\n",Exponent(2,3));
   printf("reverse:\n");
   char* str="ayse";
   int lenght=sizeof(str)/sizeof(char);
   Reverse(str,0,lenght-1);
   printf("%s\n",str);




return 0;
}
int recursion(int number){
 if(number==1 || number==0) return 1;
 else{
   return number*recursion(number-1);
 }

}
int sumAll(int n){

  if(n==0) return 0;
  else{
    return n + sumAll(n-1);
  
  }

}
int fibonacci(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else{
	  return fibonacci(n-1) + fibonacci(n-2);
	
	}

}

bool isPolindrom(char* str){
	int lenght=sizeof(str)/sizeof(char);
     if(lenght<=1) return true;
     else{
     char first=str[0];
     char end=str[lenght-1];
        if(first!=end) return false;
     }
     char newStr[lenght-2];
     int startIndex=1;
     for(int i=0;i<lenght-3;i++){
        newStr[i]=str[startIndex];
	startIndex++;
     
     }
    isPolindrom(newStr);

}
int Exponent(int base ,int exp){
	if(exp==0) return 1;
	else if(base==0) return 0;
	else{
	  return base*Exponent(base,exp-1);	
	}
}
void Reverse(char* str,int start,int end){
	if(start>=end) return ;
	else{
          char temp=str[start];
	  str[start]=str[end];
	  str[end]=temp;
           Reverse(str,start+1,end-1);
	  }
}

