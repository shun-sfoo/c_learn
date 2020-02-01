#include "main.h"
#include "maze.h"
#include "stack.h"
#include <stdio.h>

struct point predecessor[MAX_ROW][MAX_COL] = {
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
    {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}},
};

void visit(int row, int col, item_t pre) {
  item_t visit_point    = {row, col};
  maze[row][col]        = 2;
  predecessor[row][col] = pre;
  push(visit_point);
}

int main(void) {
  item_t p = {0, 0};

  maze[p.row][p.col] = 2;
  push(p);

  while (!is_empty()) {
    p = pop();
    if (p.row == MAX_ROW - 1 /* goal */
        && p.col == MAX_COL - 1)
      break;
    if (p.col + 1 < MAX_COL /* right */
        && maze[p.row][p.col + 1] == 0)
      visit(p.row, p.col + 1, p);
    if (p.row + 1 < MAX_ROW /* down */
        && maze[p.row + 1][p.col] == 0)
      visit(p.row + 1, p.col, p);
    if (p.col - 1 >= 0 /* left */
        && maze[p.row][p.col - 1] == 0)
      visit(p.row, p.col - 1, p);
    if (p.row - 1 >= 0 /* up */
        && maze[p.row - 1][p.col] == 0)
      visit(p.row - 1, p.col, p);
    print_maze();
  }
  if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1) {
    printf("(%d, %d)\n", p.row, p.col);
    while (predecessor[p.row][p.col].row != -1) {
      p = predecessor[p.row][p.col];
      printf("(%d, %d)\n", p.row, p.col);
    }
  } else
    printf("No path!\n");

  return 0;
}
