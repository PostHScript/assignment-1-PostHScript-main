

/* Ive been having trouble figuring out how to work with vscode,i wrote this code on xcode and brought it over, 
and for some reason vscode wont read the defualt header files (iostream),not sure how to procceed but the code
 does work. I also wanted to talk to you about coding conventions and if its okay for me to use the code i am
  already familair with (we mostly used cout as opposed to printf for example). */


#include <iostream>

using namespace std;
int number;
int main(int argc, const char * argv[])
{
    
 while (true)
 {
     printf ("  1. Attack\n  2. Defend\n  3. Use Item\n  4. Exit\n");
        cin >> number ;
     
                            if (number == 1)
                                {
                                        printf (" 1. Weapon Attack\n 2. Magic Attack\n 3. Back\n");
                                        cin >> number;
                                                    if (number == 1)
                                                    {
                                                            printf ("Success!\n");
                                                    }
                                                    if (number == 2)
                                                    {
                                                            printf ("Success!\n");
                                                    }
                                }
                             if (number == 2)
                                 {
                                     printf ("Success!\n");
                                 }
                             if (number == 3)
                                 {
                                     printf (" 1. Potion\n 2. Elixir\n 3. Back\n");
                                     cin >> number;
                                                 if (number == 1)
                                                 {
                                                         printf ("Success!\n");
                                                 }
                                                 if (number == 2)
                                                 {
                                                         printf ("Success!\n");
                                                 }
                                 }
                             if (number == 4)
                                 {
                                     break;
                                 }
 }
    return 0;
}
