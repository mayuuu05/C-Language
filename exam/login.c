#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i, j;

//Strucutre 
struct UserInfo{

    char userGmail[32];
    char userPass[32];

};

//checkingFordomain
int checkDomain(char gmail[]){

    if (strlen(gmail) > 10){

        const char domain[10] = "@gmail.com";
        j = 0;
        
        for (i = strlen(gmail) - 10; i < strlen(gmail); i++){

            if(gmail[i] != domain[j]){

                puts("Invalid!!! domain name must be '@gmail.com'!");
                return 0;
            }
            
            j++;

        }

        return 1;

    } else {

        puts("\nInvalid!!! too small email Length!");
        return 0;

    }

}


//Check full gmailAddress
int checkFullGmail(char gmail[]){

    int checkGmail = 0;
    //Check For Alpahbets
    for (i = 0; i < strlen(gmail) - 10; i++)
        if((gmail[i] >= 'A' && gmail[i] <= 'Z') 
        || (gmail[i] >= 'a' && gmail[i] <= 'z')){
    
            checkGmail = 1;
            break;
    
        }
            


    if(checkGmail){

        checkGmail = 0;
        //check For Digits
        for (i = 0; i < strlen(gmail) - 10; i++)
            if(gmail[i] >= '0' && gmail[i] <= '9'){
    
                checkGmail = 1;
                break;
    
            }

        if(checkGmail){

            checkGmail = 0;
            //check For Space
            for (i = 0; i < strlen(gmail) - 10; i++)
                if((gmail[i] >= 33 && gmail[i] <= 47) 
                || (gmail[i] >= 58 && gmail[i] <= 64) 
                || (gmail[i] >= 91 && gmail[i] <= 96) 
                || gmail[i] == 32){
    
                    checkGmail = 1;
                    break;
        
                }

            if(checkGmail){

                puts("\nInvalid!!! Gmail must not contain 'space' or 'Special Character'!");
                return 0;

            } else {

                return 1;

            }

        } else {

            puts("\nInvalid!!! Gmail must include 'Digits'!");
            return 0;

        }

    } else {

        puts("\nInvalid!!! Gmail must include 'Alphabets'!");
        return 0;

    }

}

//check Full Password
int checkFullPassword(char pass[]){

    int checkPass = 0;
    int passLength = strlen(pass);

    //Check For Length
    if (passLength < 8 || passLength > 32){

        puts("\nInvalid!!! Password Length!");
        return 0;

    } else {

        //Check For Capital Alphabet
        for (i = 0; i < passLength; i++)
            if(pass[i] >= 'A' && pass[i] <= 'Z'){

                checkPass = 1;
                break;

            }
                

        if (checkPass){

            checkPass = 0;
            //Check For Small Alphabet
            for (i = 0; i < passLength; i++)
                if(pass[i] >= 'a' && pass[i] <= 'z'){

                    checkPass = 1;
                    break;

                }
                    

            if (checkPass){

                checkPass = 0;
                //Check For Digits
                for (i = 0; i < passLength; i++)
                    if(pass[i] >= '0' && pass[i] <= '9'){

                        checkPass = 1;
                        break;

                    }

                if(checkPass){

                    checkPass = 0;
                    // Check For Special Character
                    for (i = 0; i < passLength; i++)
                        if((pass[i] >= 33 && pass[i] <= 47) 
                        || (pass[i] >= 58 && pass[i] <= 64) 
                        || (pass[i] >= 91 && pass[i] <= 96)){

                            checkPass = 1;
                            break;

                        }

                    if (checkPass){

                        puts("Registration Successful!");
                        return 1;

                    } else {

                        puts("\nInvalid!!! Password must contain at least one special character!");
                        return 0;

                    }

                } else {

                    puts("\nInvalid!!! Password must contain 'Digits'!");
                    return 0;

                }
                        

            } else {

                puts("\nInvalid!!! Password must contain 'Small alphabet'!");
                return 0;

            }

        } else {

            puts("\nInvalid!!! Password must contain 'Capital alphabet'!");
            return 0;

        }

    }

}


//mainMethod
void main(){

    struct UserInfo user;

    int checkGmail, checkPass;

    char loginGmail[32], loginPass[32];

    FILE *filePointer;

    filePointer = fopen("LoginRecords.txt", "w");

        //Registration -  Taking gmail from user (with validation)
        printf("\n----Create new user----\n");

        getGmail:
        printf("\n---------------\n");
        printf("Create email : ");
        scanf(" %[^\n]", &user.userGmail);

        checkGmail = checkDomain(user.userGmail);

        if(checkGmail)
            checkGmail = checkFullGmail(user.userGmail);
        else
            goto getGmail;

        //Registration - Taking Password from user (with validation)
        if(checkGmail){

            getPass:
            printf("Create Password : ");
            scanf(" %[^\n]", &user.userPass);

            checkPass = checkFullPassword(user.userPass);

            if(checkPass == 0){

                printf("\n---------------\n");
                goto getPass;

            }

        }
                
    printf("\n-------Login--------\n");

    for (i = 0; i < 3; i++){

        printf(":Attempt %d:\n", i + 1 );

        printf("Enter email : ");
        scanf(" %[^\n]", &loginGmail);

        printf("Enter password : ");
        scanf(" %[^\n]", &loginPass);

        fprintf(filePointer, "User Email : %s",loginGmail);
        fprintf(filePointer, "\nUser Password : %s",loginPass);

        if (strcmp(loginGmail, user.userGmail) == 0 
        && strcmp(loginPass, user.userPass) == 0)
        {
            fprintf(filePointer, "\n-----------------");
            puts("Login Successfull");
            fprintf(filePointer, "\nLogin Successfull\n");
            fprintf(filePointer, "-----------------\n");
            break;

        } else {   
            fprintf(filePointer, "\n-----------------------------");
            puts("Invalid username or password!");
            fprintf(filePointer, "\nInvalid username or password!\n");
            fprintf(filePointer, "-----------------------------\n");
            continue;

        }

    }

}
