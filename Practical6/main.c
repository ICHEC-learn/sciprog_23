#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

int n,p,q,i,j,k;
n=5;
p=3;
q=4;
double A[n][p],B[p][q],C[n][q];
for(i=0;i<n;i++){
for(j=0;j<p;j++){

A[i][j]=i+j;}}

for(i=0;i<p;i++){
for(j=0;j<q;j++){
B[i][j]=i-j;}}

for(i=0;i<n;i++){
for(j=0;j<q;j++){
C[i][j]=0.0;}}

matmul(n,p,q,A,B,C);

printf("Matrix A:");
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<p;j++){
printf("%.1f",A[i][j]);
printf(" ");}
printf("\n");}
printf("\n");

printf("Matrix B:");
printf("\n");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
printf("%.1f",B[i][j]);
printf(" ");}
printf("\n");}
printf("\n");

printf("The result of Matrix Multiplication A.B is matrix C:");
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<q;j++){
printf("%.1f",C[i][j]);
printf(" ");}
printf("\n");}

return 0;
}