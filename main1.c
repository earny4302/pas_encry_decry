#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
static int  pi[80]={'1', '4', '1', '5', '9', '2', '6', '5', '3', '5', '8', '9', '7', '9', '3', '2', '3', '8','4', '6', '2', '6', '4', '3', '3', '8', '3', '2' ,'7', '9', '5', '0', '2', '8', '8', '4', '1', '9', '7', '1','6', '9', '3', '9', '9','3', '7', '5', '1', '0', '5', '8', '2', '0', '9', '7', '4', '9', '4', '4', '5','9', '2', '3', '0', '7', '8', '1' ,'6', '4', '0', '6', '2', '8', '6', '2', '0', '8', '9', '9'};
/*void decrypt(){

}
void decrypt1(){

}
void decrpyt2(){

}*/

void encrypt(){ 
            time_t s, val = 1; 
            struct tm* current_time; 
            s = time(NULL); 
            current_time = localtime(&s); 
    
            int x= (current_time->tm_hour)+(current_time->tm_min)+(current_time->tm_sec);
            if(x%2==0){
                encrypt1();
            }
            
            if (x%2!=0)
            {
                //encrypt2();
            }
        
  

}
void encrypt1(){
    char temp_pass[80];
    char crypt_pass[81];
    crypt_pass[0]=1;
    system("CLS");
    printf("\nENTER YOUR PASSWORD:-\t");
    scanf("%s",&temp_pass);
    for(int i=0;temp_pass[i]!='\0';i++){
        crypt_pass[i+1]=temp_pass[i]+pi[i];
    }
    system("cls");
    printf("\nYOUR CRYPTIC PASSWORD IS:- %s",&crypt_pass);


}
/*void encrypt2(){

}*/

int main()
{
    
  
    int choice;
    do{
        system("CLS");
        printf("\nHOW CAN WER HELP YOU:-");
        printf("\n01.ENCRYPT A PASSWORD");
        printf("\n02.DECRYPT A PASSWORD");
        printf("\n03.EXIT");
        printf("\n\nENTER YOUR CHOICE(1-3):-\t");
        scanf("%d",&choice);
         switch(choice){
                case 1:
                    encrypt();
                    break;
                case 2:
                    //decrypt();
                    break;
                case 3:
                    exit(0);
                default:
                    printf("\n\tWRONG CHOICE");
            }

    }while(choice>3);

           
    
    return 0;
}