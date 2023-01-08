/*
* Problem :  Write a C program, which adds up columns and rows of given table as shown in the following figure.
*/

#include <stdio.h>

void storeValues(int total_row, int total_col, int cell_values[], int sum_of_col[]){
  int rowCount = 1;
  int cellCount = 0;
  int cell_value;
  int index = 0;

  while(1){
    // Exit or Continue adding values
    if(cellCount == total_col){
      if(rowCount == total_row){
        break;
      }else{
        rowCount++;
        cellCount = 0;
      }
    }

   // Store the values
    printf("Value of Column %d | Row %d", (cellCount + 1), (rowCount));
    scanf("%d", &cell_value);

    // Do the sum of the column
    if(rowCount == 1){
      sum_of_col[cellCount] = 0;
      sum_of_col[cellCount] += cell_value; 
      printf("%d", sum_of_col[cellCount]);
    }else{
      sum_of_col[cellCount] += cell_value;
    }
    
    // Add row value in the array
    cell_values[index] = cell_value;

    // Increment the count
    cellCount++;
    index++;
  }
}

void createTable(int total_row, int total_col,int cell_values[]){
  int rowCount = 1;
  int cellCount = 0;
  int index = 0;

  while(1){
    // Exit or Continue printing cell values
    if(cellCount == total_col){
      if(rowCount == total_row){
        break;
      }else{
        printf("\n");
        rowCount++;
        cellCount = 0;
      }
    }

    // Print the row values
    printf("%d\t", cell_values[index]);
    index++;
    cellCount++;
  }
}

void printSums(int no_of_cols ,int sum_of_col[]){
  int cellCount = 0;
  int index = 0;

  printf("\n\n");
  while(1){
    if(cellCount == no_of_cols){
      printf("\n");
      break;
    }

    // Print the sum
    printf("%d\t", sum_of_col[index]);
    cellCount++;
    index++;
  }
}

int main(){
  int no_of_cols, no_of_rows;
  int total_cell;

  // Get number of columns
  printf("Number of columns : ");
  scanf("%d", &no_of_cols);

  // Get number of rows
  printf("Number of rows : ");
  scanf("%d", &no_of_rows);

  // Setting values
  total_cell = no_of_rows * no_of_cols;
  int cell_values[total_cell];
  int sum_of_col[no_of_cols];

  // Store row values
  storeValues(no_of_rows, no_of_cols, cell_values, sum_of_col);

  // Create the table
  createTable(no_of_rows, no_of_cols, cell_values);

  // Print the sum
  printSums(no_of_cols, sum_of_col);

  return 0;
}