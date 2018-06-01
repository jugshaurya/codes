#include <iostream>
#include <cstring> //for  strtok()

using namespace std;
bool getdelimiterCondition(char* delimiter, char el){
    bool result=false;
    for(int i=0; i<strlen(delimiter); i++){
        if(el==delimiter[i]){
            result = result || true;
        }
    }
    return result;
}
char* mystrtok(char* str, char* delimiter){
   
     
    static char*input = NULL;
    
    if(str != NULL){
        input=str;
    }
    
    if(input == NULL){
        return NULL;
    }
    
    char* output = new char[strlen(input)+1];
    
    int i=0;
    while(input[i]!='\0'){
        if( getdelimiterCondition(delimiter ,input[i]) ){
            //return output
            input=input+i+1;
            output[i]='\0';
            if(output[0]!='\0'){ 
                return output;
            }
            else{
                output[0] ='x';
                // input=input+1;
                // i--;
                continue;
            }
                
        }else{
            // else store the char into output array
            output[i] = input[i];
        }
        i++;
    }
    output[i]='\0';
    input=NULL;
    return output;
}

int main(){

	char str[]="Hie there! ,,I love, coding.";
    char del[]=" !,";
	char* ptr =NULL;

	// char* strtok(char* str, char* delimiters)
	ptr = mystrtok(str, del);

	while(ptr!=NULL){
	   // cout<<"ssa";
		cout<<ptr<<endl;
		ptr= mystrtok(NULL, del);
	}
	
	return 0;
}