#include <stdio.h>
#include <string.h>
#define maxLength 11
#define maxGrade 100
int main()
{
    int n,i,tmpG,maxG,minG;
    char tmpName[maxLength],tmpId[maxLength];
    char maxName[maxLength],maxId[maxLength];
    char minName[maxLength],minId[maxLength];
    scanf("%d",&n);

    maxG=0;minG=maxGrade;
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",tmpName,tmpId,&tmpG);
        if(tmpG>maxG)
        {
            /*find the max*/
            maxG=tmpG;
            strcpy(maxName,tmpName);
            strcpy(maxId,tmpId);
        }
        if(tmpG<minG)
        {
            /*find the min*/
            minG=tmpG;
            strcpy(minName,tmpName);
            strcpy(minId,tmpId);
        }
    }

    printf("%s %s\n%s %s",maxName,maxId,minName,minId);
    return 0;
}
