#include <stdio.h>
#include <string.h>
 
int isLeapYear(int);

typedef unsigned char u8;
 
int main(int argc, char const *argv[])
{
	int year;
	int month;
    int day;
    int endDayOfMonth;//ÿ���µ����һ��
    int totaldays; //total days together with licuter
 while(1)
 {
    printf("��������(yyyy-mm-dd):");
	scanf("%d-%d-%d", &year, &month , &day);//���������
    totaldays = 0;

    if (year < 2019)
    {
        printf("С�ɰ�������2019��3��2����һ����أ�������ǣ������������𣺣�");
        return 0;
    }
    else if (year >2019)
    {
        for (u8 i_year = 0; i_year < (year-2019) ;i_year ++)
        {
            if (isLeapYear(year))
                totaldays += 366;
            else 
                totaldays += 365;
        }
    }

    for(u8 i = 1;i < month;i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            endDayOfMonth = 31;
        else if (i == 2)
        {
            if (isLeapYear(year))
                endDayOfMonth = 29;
            else 
                endDayOfMonth = 28;
        }
        else 
            endDayOfMonth = 30;

        totaldays += endDayOfMonth ;           
    }

    totaldays += day ;
    totaldays -= 60 ;

	printf("С�ɰ��������Ѿ���һ�� %d ���� \r\n",totaldays);

    printf("δ��ҲҪһֱ��һ�𣬰����ϣ�\r\n");

 }
	
	return 0;
}
 
//�ж�����
int isLeapYear(int y) 
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		return 1;
    
	return 0;
}
 
