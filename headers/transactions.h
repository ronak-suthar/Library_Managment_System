#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

int main(void);
void add(void);
void issue(int);
void return_book(int);
//user* find_user(int);
stock* find_book(int);
void set_dates(struct tm*,struct tm*);
struct tm set_issue_day(void);
struct tm set_return_day(void);
void issued_books(int);
#endif