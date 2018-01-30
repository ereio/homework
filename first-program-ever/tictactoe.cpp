#include <stdio.h>


int main(void){

struct Program_size {
  tictactoe_board;
} tictactoe_board *newboard = malloc(sizeof(*new_board));

typedef struct tictactoe_board_description {
  char square[3][3];
} tictactoe_board

return 0;
}

int init_board(tictactoe_board *board){
  int i = 0;
  int j = 0;

  for(i = 0; i < 3; i++){
    for (j = 0; j<3; j++){
       board->square[i][j] = '_'
    }
  }
  return 1;
}
