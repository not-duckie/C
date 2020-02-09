#include<stdio.h>

void multiply(int array1[5][5], int m, int n)
{ int p,q,arr2[5][5],arr3[5][5],sum=0;
	
	printf("Enter the number of rows and colums of second matrix\n");
	scanf("%d %d", &p, &q);
	
	if(n!=q) {
		printf("The matix cannot be multiplied\n");
		exit(1);
	}

	printf("Enter the elements of second matix\n");
	for(int i =0;i<p;i++)
	{	for(int j=0;j<q;j++)
			{ scanf("%d", &arr2[i][j]);
			}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<p;k++){
			   sum = sum + (array1[i][k]*arr2[k][j];
			}
		arr3[i][j]=sum;
		sum=0;}
	}
printf("the reulting matix is\n");
	for(int i =0;i<p;i++)
	{	for(int j=0;j<q;j++)
			{ printf("%d ", arr3[i][j]);
			}
		printf("\n");
	}


}


void add(int array1[5][5], int m, int n) { 

	int p,q,sum=0,arr2[5][5], arr3[5][5];
	
	printf("Enter the rows and columns of second matrix\n");
	
	scanf("%d %d", &p, &q);
	
	if(p!=m&&q!=n){
		printf("The addition is not possible\n");
		exit(0);}
	
	printf("Enter the elements of second matix\n");
	for(int i =0;i<p;i++)
	{	for(int j=0;j<q;j++)
			{ scanf("%d", &arr2[i][j]);
			}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) {
			arr3[i][j]=array1[i][j]+arr2[i][j];
		}
	}
printf("the reulting matix is\n");
	for(int i =0;i<p;i++)
	{	for(int j=0;j<q;j++)
			{ printf("%d ", arr3[i][j]);
			}
		printf("\n");
	}

}




void transpose(int array1[5][5], int m, int n)
{ int arr2[5][5];

	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		arr2[j][i]=array1[i][j];}
	}


	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		printf("%d ", arr2[i][j]);}
	printf("\n");}

}



int main()
{ int x=0, m=0, n=0, array1[5][5];
	printf("Enter the number of rows and columns\n");
	scanf("%d\n%d",&m ,&n);
	printf("Enter the elements of the matix\n");
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++){	
			scanf("%d", &array1[i][j]);
		}
	}
printf("-------------MENU----------------\n");
printf("1:\tMulitplication\n");
printf("2:\tAddition\n");
printf("3:\tTranspoase\n");
scanf("%d", &x);
switch(x)
{  case 1 : multiply(array1, m, n);
	break;
   case 2 : add(array1, m, n);
   break;
   case 3 : transpose(array1, m, n);
   break;
   default : printf("Please Enter a valid response");
}
return 0;
}
