#include <stdio.h>
#include <math.h>
int main(void)
{
        double bNumber, Number, Result;           //���Ӽ��˳�������ı���
        int No;                //����������ֵı���
        while(1)
        {
                //����
                printf (" _______________________________________________ \n");
                printf ("|��ѡ����Ҫ����ķ���:                          |\n");
                printf ("|---------------------------------------------- |\n");
                printf ("|  �ӷ��밴_1                                   |\n");
                printf ("|  �����밴_2                                   |\n");
                printf ("|  �˷��밴_3                                   |\n");
                printf ("|  �����밴_4                                   |\n");
                printf ("|  �˷��밴_5                                   |\n");
                printf ("|  �������밴_6                                 |\n");
                printf ("|  �˳��밴_0                                   |\n");
                printf ("|_______________________________________________|\n");
                printf ("Please write down the number:");
                scanf ("%d",&No);
                if (No == 1)
                {
                        //        �ӷ�
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = bNumber + Number;
                        printf (" �����: %lf\n\n",Result);
                }
                else if (No == 2)
                {
                        //        ����
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = bNumber - Number;
                        printf (" �����: %lf\n\n",Result);
                }
                else if (No == 3)
                {
                        //        �˷�
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = bNumber * Number;
                        printf (" �����: %lf\n\n",Result);
                }
                else if (No == 4)
                {
                        //        ����
                        printf ("        �����뱻����:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        if(Number == 0){      //�жϳ����Ƿ�Ϊ0
                        printf("        ��������Ϊ 0 \n");
                    }
                        else{
                        Result = bNumber / Number;
                        printf (" �����: %lf\n\n",Result);
                    }
                }  
				   else if (No == 5)
                {
                        //        �˷� 
                        printf ("        ������ָ��:");
                        scanf ("%lf",&bNumber);
                        printf ("        ����������:");
                        scanf ("%lf",&Number);
                 if(Number==0)//ָ��Ϊ�� 
                        {
                        Result = 1;
                    }
                 else if(Number<0) //ָ��Ϊ�� 
                    {
                    	Number=abs(Number);
                    	 Result = bNumber;
                        for(int i = 1;i<Number;i++)
                        {
                        Result = Result*bNumber;
                        } 
                         Result = 1.0/Result;
                     printf (" �����: %lf\n\n",Result);	
				}
                 else
                        {                        
                        Result = bNumber;
                        for(int i = 1;i<Number;i++)
                        {
                        Result = Result*bNumber;
                    }
                    } 
                        printf (" �����: %lf\n\n",Result);
                }  
			  else if (No == 6)
                {
                        //        ������ 
                        printf ("        ���������:");
                        scanf ("%lf",&bNumber);
                        printf ("        ���������:");
                        scanf ("%lf",&Number);
                        Result = pow(bNumber,1.0/Number);
                        printf (" �����: %lf\n\n",Result);
                }        
                else if (No == 0)
                {
                        //�˳�����
                        break;
                }
                else
                {
                        //�����ѡ���
                        printf("  ��������ȷ�����֡�\n");
                }
        }
        return 0;
}
