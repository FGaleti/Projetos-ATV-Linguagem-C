#include<stdio.h>

double soma (double n1, double n2);
double sub (double n3, double n4);
double div (double n5, double n6);
double mult (double n7, double n8);
    int main(){
        printf(" %.2f\n",soma(8,3));
        printf(" %.2f\n",sub(8,3));
        printf(" %.2f\n",div(8,3));
        printf(" %.2f\n",mult(8,3));
       return 0;
        }
        double sub(double n3, double n4){
              return n3-n4;
        }
         double soma(double n1, double n2){
            return n1+n2;
        }
        double div(double n5, double n6){
              return n5*n6;
        }
         double mut(double n7, double n8){
            return n7/n8;
        }