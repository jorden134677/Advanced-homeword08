#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    int deal=0; 
    int cus[100]={0};
	
	while(deal<=100){
		
		int money,time,id,cho;
		
		printf("�{�b��%d�����\n",deal);
		printf("�п�J�z���Ȥḹ�X:");
		scanf("%d",&id);
		if(id<=100){
		    printf("�п�J�z�n���کΦs��(����:1,�s��:2):");
		    scanf("%d",&cho);
		    if(cho==1){
			    if(cus[id]>0){
			        printf("�п�J�z�n���ڦh��:");
			        scanf("%d",&money);
			        if(cus[id]-money>=0){
			        	cus[id]-=money;
			        	printf("�U��if%d�s�ڬ�%d\n",id,cus[id]);
		                printf("\n");
			        	printf("\n");
			        	deal++;
			    	}
				    else{
			    		printf("�z���ണ��\n");
			    	}
		        }
		    	else{
				    printf("�z���ണ��\n");
			    } 
		    }
		    else if(cho==2){
		    	printf("�п�J�z�n�s�ڦh��:");
		        scanf("%d",&money);
		        cus[id]+=money;
		        printf("�U��if%d�s�ڬ�%d\n",id,cus[id]);
		        printf("\n");
		        deal++;
		    } 
		    else{
		    	printf("���L�İʧ@,�Э��s��J�C\n");
		    	printf("\n");
		    }
		}
		else{
			printf("���L�ĨϥΪ�id,�Э��s��J�C\n");
			printf("\n");
		} 
	}
	
	system("PAUSE");
	return 0;
}
