#include<stdio.h>

typedef struct arr{
    int i;
    int j;
}ARR;

#define ROWS 10
#define COLS 10

int display(int p,int q)
{
//	if(p==r||q==s){
		if(p%2==0 && q%2!=0)
			return p;
	//	else if(q+2==s)
	//		return p;
	//	else if(p-2==r)
	//		return s;
		else if(p%2!=0 && q%2==0)
			return q;
	}

void printlines(char a[ROWS][COLS],int p,int q)
{
    
    char horline='_',verline='|';
// 	if (display(p,q,r,s)==r && p==r){
	 
//         for(int i=0;i<10;i++)
//         {
//             for(int j=0;j<10;j++)
//             {
//                 if(i==r && j==s-1)
//                 {
//                     printf("_");
//                     a[i][j]=horline;
//                 }
//                 else
//                     printf("%c",a[i][j]);
//             }
//             printf("\n");
//         }
// 	  printf("\n");			
//         }
   
// 	else if(display(p,q,r,s)==s && q==s)
// 	{
//     for(int i=0;i<10;i++)
//         {
//             for(int j=0;j<10;j++)
//             {
//                 if(i==r-1 && j==s)
//                 {
//                     printf("|");
//                     a[i][j]='|';
//                 }
//                 else
//                     printf("%c",a[i][j]);
//             }
//           printf("\n");
//         }
//           printf("\n");
     
// 	}

	if(display(p,q)==p ){

      for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(i==p && j==q)
                {
                    printf("_");
                    a[i][j]=horline;
                }
                else
                    printf("%c",a[i][j]);
                    //for horizontal lines
                //    if()
            }
          printf("\n");
        }
          printf("\n");
	}
	
	else if(display(p,q)==q ){
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(i==p && j==q)
                {
                    printf("|");
                    a[i][j]=verline;
                     if(q>0 && q<7){
                        if(a[p-1][q-1]==horline && a[p+1][q-1]==horline){
                            if(a[p][q-2]==verline){
                                a[i][j-1]='S';
                                printf("%c",a[i][j-1]);
                            }
                        }
                    }
                }
                else
                    printf("%c",a[i][j]);
                //     //for vertical lines
                // if(q>0 && q<7){
                //         if(a[p][q-2]==verline){
                //             if(a[p-1][q-1]==horline && a[p+1][q-1]==horline){
                //                 printf("S");
                //                 a[i][j-1]='S'
                //             }
                //         }
                //     }
            }
           printf("\n");
        }
          printf("\n");
	}
	
}
int main() {
int p,q,r,s;
char a[ROWS][COLS];
int i=0,j=0,n=0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i% 2 == 0 && j%2==0) {
                a[i][j]='.';
                printf(".");  // Print a dot at even positions
            }
			else
			{
			  printf(" ");
			  a[i][j]=' ';
			}
        }
        printf("\n");
    }
	while(n<40){
		printf("Enter index of start and end points: ");
		scanf("%d %d",&p,&q);
		printlines(a,p,q);
	}
}