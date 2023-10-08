# include <stdio.h>
# include <string.h>

int main( )
{
    FILE *filePointer ;
	FILE *fn;
	FILE *fa;
	char ch;
	char arr[15],arr1[15],arr2[15];

	filePointer = fopen("input.txt", "r") ;

	if ( filePointer == NULL )
	{
		printf( "Input.txt file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;
	}

	do {
        ch = fgetc(filePointer);
        arr[0] = ch;

        if(arr[0]>='0'&&arr[0]<='9'){
            arr1[0]=arr[0];
            printf("%c\n",arr1[0]);
            fn=fopen("numbers.txt","a");
            fputs(arr1,fn);
        }
        else{
            arr2[0]=arr[0];
            printf("%c\n",arr2[0]);
            fa=fopen("alphabets.txt","a");
            fputs(arr2,fa);
        }

    } while (ch != EOF);
      if(fn==NULL){
            printf("File not open\n");
        }
    else{
            printf("Number.txt Opened\n");
    }
    if(fa == NULL){
        printf("File Not Opened\n");
    }
    else{
        printf("Alphabets.txt opened\n");
    }



	return 0;
}
