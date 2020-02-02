#include "main.h"
#include "maze.h"
#include "queue.h"
#include <stdio.h>

void visit(int row, int col) {
  item_t visit_point = {row, col, head - 1};
  maze[row][col]     = 2;
  enqueue(visit_point);
}
