#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void encrypt1()
{
    int  pi[80]={1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2 ,7, 9, 5, 0, 2, 8, 8, 4, 1, 9, 7, 1, 6, 9, 3, 9, 9, 3, 7, 5, 1,0, 5, 8, 2, 0, 9, 7, 4, 9, 4, 4, 5, 9, 2, 3, 0, 7, 8, 1 ,6, 4, 0, 6, 2, 8, 6, 2, 0, 8, 9, 9};
    char temp_pass[80];
    char crypt_pass[80];
    crypt_pass[0]='A';
    
    printf("\n%c",crypt_pass[0]);
    system("CLS");
    printf("\nENTER YOUR PASSWORD:-\t");
    scanf("%s",&temp_pass);
    
    for(int i=0;temp_pass[i]!='\0';i++)
    {
        int d=temp_pass[i];
        int f=pi[i];
        int e=d+f;
        crypt_pass[i+1]=e;
        
    }
    
    printf("\nYOUR CRYPTIC PASSWORD IS:- %s",crypt_pass);
    getch();


}

void encrypt2()
{
    int gr[80]= { 6, 1, 8, 0, 3, 3, 9, 8, 8, 7, 4, 9, 8, 9, 4, 8, 4, 8, 2, 0, 4, 5, 8, 6, 8, 3, 4, 3, 6, 5, 6, 3, 8, 1, 1, 7, 7, 2, 0, 3, 0, 9, 1, 7, 9, 8, 0, 5, 7, 6, 2, 8, 6, 2, 1, 3, 5, 4, 4, 8, 6, 2, 2, 7, 0, 5, 2, 6, 0, 4, 6, 2, 8, 1, 8, 9, 0, 2, 4, 4};
    char temp_pass[80];
    char crypt_pass[80];
    crypt_pass[0]='B';
    
    printf("\n%c",crypt_pass[0]);
    system("CLS");
    printf("\nENTER YOUR PASSWORD:-\t");
    scanf("%s",&temp_pass);
    
    for(int i=0;temp_pass[i]!='\0';i++)
    {
        int d=temp_pass[i];      
        int f=gr[i];       
        int e=d+f;
        crypt_pass[i+1]=e;
        
    }    
    printf("\nYOUR CRYPTIC PASSWORD IS:- %s",crypt_pass);
    getch();

}
void decrypt1(char temp_encrypt_pass[80]){
    int  pi[80]={1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2 ,7, 9, 5, 0, 2, 8, 8, 4, 1, 9, 7, 1, 6, 9, 3, 9, 9, 3, 7, 5, 1,0, 5, 8, 2, 0, 9, 7, 4, 9, 4, 4, 5, 9, 2, 3, 0, 7, 8, 1 ,6, 4, 0, 6, 2, 8, 6, 2, 0, 8, 9, 9};
    char decrypt_pass[80];
    int x=strlen(temp_encrypt_pass);
    
    for(int i=0;i<x;i++){
        
            int d=temp_encrypt_pass[i+1];
            int f=pi[i];
            int e=d-f;
            decrypt_pass[i]=e;   
    }
    decrypt_pass[x-1]='\0';
    printf("\nYOUR DECRYPTIC PASSWORD IS:- %s",decrypt_pass);
    getch();

}
void decrpyt2(char temp_encrypt_pass[80]){
    int gr[80]= { 6, 1, 8, 0, 3, 3, 9, 8, 8, 7, 4, 9, 8, 9, 4, 8, 4, 8, 2, 0, 4, 5, 8, 6, 8, 3, 4, 3, 6, 5, 6, 3, 8, 1, 1, 7, 7, 2, 0, 3, 0, 9, 1, 7, 9, 8, 0, 5, 7, 6, 2, 8, 6, 2, 1, 3, 5, 4, 4, 8, 6, 2, 2, 7, 0, 5, 2, 6, 0, 4, 6, 2, 8, 1, 8, 9, 0, 2, 4, 4};
    char decrypt_pass[80];
    int x = strlen(temp_encrypt_pass);
    for(int i=0;i<x;i++){
            
            int d=temp_encrypt_pass[i+1];
            int f=gr[i];
            int e=d-f;
            decrypt_pass[i]=e;        
    }
    decrypt_pass[x-1]='\0';
    
    printf("\nYOUR CRYPTIC PASSWORD IS:- %s",decrypt_pass);
    getch();


}
void decrypt(){
    char temp_decrypt[80];
    printf("\nENTER YOUR STRING TO BE DECYPTED:-\t");
    scanf("%s",&temp_decrypt);
    if(temp_decrypt[0]=='A'){
        decrypt1(temp_decrypt);
    }
    if(temp_decrypt[0]=='B'){
        decrpyt2(temp_decrypt);
    }
    

}

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
                encrypt2();
            }
        
  

}

int main()
{
    
  
    int choice;
    do{
        system("CLS");
        printf("\nHOW CAN WE HELP YOU:-");
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
                    decrypt();
                    break;
                case 3:
                    exit(0);
                default:
                    printf("\n\tWRONG CHOICE");
            }

    }while(choice!=3);

           
    
    return 0;
}