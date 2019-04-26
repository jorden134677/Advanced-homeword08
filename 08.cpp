#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    int deal=0; 
    int cus[100]={0};
	
	while(deal<=100){
		
		int money,time,id,cho;
		
		printf("現在有%d筆交易\n",deal);
		printf("請輸入您的客戶號碼:");
		scanf("%d",&id);
		if(id<=100){
		    printf("請輸入您要提款或存款(提款:1,存款:2):");
		    scanf("%d",&cho);
		    if(cho==1){
			    if(cus[id]>0){
			        printf("請輸入您要提款多少:");
			        scanf("%d",&money);
			        if(cus[id]-money>=0){
			        	cus[id]-=money;
			        	printf("顧客if%d存款為%d\n",id,cus[id]);
		                printf("\n");
			        	printf("\n");
			        	deal++;
			    	}
				    else{
			    		printf("您不能提款\n");
			    	}
		        }
		    	else{
				    printf("您不能提款\n");
			    } 
		    }
		    else if(cho==2){
		    	printf("請輸入您要存款多少:");
		        scanf("%d",&money);
		        cus[id]+=money;
		        printf("顧客if%d存款為%d\n",id,cus[id]);
		        printf("\n");
		        deal++;
		    } 
		    else{
		    	printf("為無效動作,請重新輸入。\n");
		    	printf("\n");
		    }
		}
		else{
			printf("為無效使用者id,請重新輸入。\n");
			printf("\n");
		} 
	}
	
	system("PAUSE");
	return 0;
}
