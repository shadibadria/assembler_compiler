#include"data_image.h"

FILE * file_pointer;
int index_of_datatable = 0;

/*append to file function*/

void append_command_to_file(char * filename, data_image data) {
  file_pointer = fopen(filename, "a");
  if (file_pointer == NULL) {
    printf("error creating file %s \n", filename);
    exit(0);
  }
  
  fputs(data.Adress, file_pointer);
  fputs("      ", file_pointer);
  fputs(data.opcode, file_pointer);
  fputs(data.funct, file_pointer);
  fputs(data.adress_method, file_pointer);
  fputs("        ", file_pointer);
  fputs(data.TAG, file_pointer);

  fputs("\n", file_pointer);

}


void append_register_to_file(char * filename, char * register_number) {
  file_pointer = fopen(filename, "a");
  if (file_pointer == NULL) {
    printf("error creating file %s \n", filename);
    exit(0);
  }

  fputs(register_number, file_pointer);

  fputs("\n", file_pointer);

}
void close_file() {
  fclose(file_pointer);

}
void append_extern_tofile(char * filename) {
  int i=0;
  file_pointer = fopen(filename, "a");
  if (file_pointer == NULL) {
    printf("error creating file %s \n", filename);
    exit(0);
  }

    for(i=0;i<100;i++){
        if(strstr(arr[i].TAG,"E")!=NULL){
      fputs(arr[i].label_name, file_pointer);
      fputs("        ", file_pointer);
        fputs(arr[i].Adress, file_pointer);

  fputs("\n", file_pointer);

        }
    }

}