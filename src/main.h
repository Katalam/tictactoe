const int _sqrs = 9;
int sum_rows[3];
int sum_columns[3];
int sum_diag[2];

void print_game(int *sqr);
int check_win(int *sqr);
void increment_sums(int idx);
void decrement_sums(int idx);
