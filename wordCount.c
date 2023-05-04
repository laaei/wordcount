#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
  
int main(int argc, char *argv[]) {  
    if (argc < 3) {  
        printf("Usage: %s <input_file_name>\n", argv[0]);  
        exit(EXIT_FAILURE);  
    }  
  
    FILE *fp = fopen(argv[2], "r");  
    if (fp == NULL) {  
        printf("打开失败: %s\n", argv[2]);  
        exit(EXIT_FAILURE);  
    }  
    int words = 0,count=0;  
    if(!strcmp(argv[1],"-c")){
    	char ch;
    	while ((ch = fgetc(fp)) != EOF) {
        	count++;
    	} 
    	printf("字符数为：%d",count);
	}
    
    else if(!strcmp(argv[1],"-w")){
    	char word;
    	int words=1;
    	
    	while ((word = fgetc(fp)) != EOF) {
        	if (word==' ' || word==','){
        		words++;
			}
    	} 
		printf("单词数为：%d",words);
	}
	else{
		printf("参数错误");
	}
    fclose(fp);  
  
    return 0;  
}