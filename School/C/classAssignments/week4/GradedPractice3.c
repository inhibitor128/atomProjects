/*******************************************************************************************
Name
Dates:  9/28/2021 - 10/4/2021
Program Description:  Write a menu-driven program that allow the user to pick a
               number to reveal the title of a kids' movie.
********************************************************************************************/
#include<stdio.h>

int main()
{
  //declare variables
  int num;

  //display menue
  printf ("Menue\n");
  printf("1 - Shrek\n");
  printf("2 - Babe\n");
  printf("3 - Dumbo\n");
  printf("4 - Exit Program\n");

  printf("\nEnter your choice: ");
  scanf("%i", &num);

  if(num < 0 || num > 4)
    printf("Error: Please enter a valid choice");
    else
      switch(num)
      {
        case 1:
          printf("   SSSSSSSSSSSSSSS hhhhhhh                                                                        kkkkkkkk           \n");
          printf(" SS:::::::::::::::Sh:::::h                                                                        k::::::k           \n");
          printf("S:::::SSSSSS::::::Sh:::::h                                                                        k::::::k           \n");
          printf("S:::::S     SSSSSSSh:::::h                                                                        k::::::k           \n");
          printf("S:::::S             h::::h hhhhh           eeeeeeeeeeee    rrrrr   rrrrrrrrr       eeeeeeeeeeee    k:::::k    kkkkkkk\n");
          printf("S:::::S             h::::hh:::::hhh      ee::::::::::::ee  r::::rrr:::::::::r    ee::::::::::::ee  k:::::k   k:::::k \n");
          printf(" S::::SSSS          h::::::::::::::hh   e::::::eeeee:::::eer:::::::::::::::::r  e::::::eeeee:::::eek:::::k  k:::::k  \n");
          printf("  SS::::::SSSSS     h:::::::hhh::::::h e::::::e     e:::::err::::::rrrrr::::::re::::::e     e:::::ek:::::k k:::::k   \n");
          printf("    SSS::::::::SS   h::::::h   h::::::he:::::::eeeee::::::e r:::::r     r:::::re:::::::eeeee::::::ek::::::k:::::k    \n");
          printf("       SSSSSS::::S  h:::::h     h:::::he:::::::::::::::::e  r:::::r     rrrrrrre:::::::::::::::::e k:::::::::::k     \n");
          printf("            S:::::S h:::::h     h:::::he::::::eeeeeeeeeee   r:::::r            e::::::eeeeeeeeeee  k:::::::::::k     \n");
          printf("            S:::::S h:::::h     h:::::he:::::::e            r:::::r            e:::::::e           k::::::k:::::k    \n");
          printf("SSSSSSS     S:::::S h:::::h     h:::::he::::::::e           r:::::r            e::::::::e         k::::::k k:::::k   \n");
          printf("S::::::SSSSSS:::::S h:::::h     h:::::h e::::::::eeeeeeee   r:::::r             e::::::::eeeeeeee k::::::k  k:::::k  \n");
          printf("S:::::::::::::::SS  h:::::h     h:::::h  ee:::::::::::::e   r:::::r              ee:::::::::::::e k::::::k   k:::::k \n");
          printf(" SSSSSSSSSSSSSSS    hhhhhhh     hhhhhhh    eeeeeeeeeeeeee   rrrrrrr                eeeeeeeeeeeeee kkkkkkkk    kkkkkkk\n");
          break;
        case 2:
          printf("8 888888888o          .8.          8 888888888o   8 8888888888   \n");
          printf("8 8888    `88.       .888.         8 8888    `88. 8 8888         \n");
          printf("8 8888     `88      :88888.        8 8888     `88 8 8888         \n");
          printf("8 8888     ,88     . `88888.       8 8888     ,88 8 8888         \n");
          printf("8 8888.   ,88'    .8. `88888.      8 8888.   ,88' 8 888888888888 \n");
          printf("8 8888888888     .8`8. `88888.     8 8888888888   8 8888         \n");
          printf("8 8888    `88.  .8' `8. `88888.    8 8888    `88. 8 8888         \n");
          printf("8 8888      88 .8'   `8. `88888.   8 8888      88 8 8888         \n");
          printf("8 8888    ,88'.888888888. `88888.  8 8888    ,88' 8 8888         \n");
          printf("8 888888888P .8'       `8. `88888. 8 888888888P   8 888888888888 \n");
          break;
        case 3:
          printf("____            _        \n");
          printf("|    \\_ _ _____| |_ ___ \n");
          printf("|  |  | | |     | . | . |\n");
          printf("|____/|___|_|_|_|___|___|\n");
          break;
        default: printf("\nPrgram exit. Good bye.\n");
      }

  return 0;
}
