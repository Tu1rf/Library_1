#include <proj1_ref.cpp>
using namespace std;


int main() {

    /*     Variables     */
    int number_1, number_2, number_extra;

    //    y/n Variables    //
    char yes_no_choose, y_n_opt, yes_n_opt, y_no_opt, yes_no_opt;

    /*      Start       */

    cout << "\t\tGame-On\t\t" << endl;

    cout << "Will you play?";
    cout << "\t(y/n): ";
    cin >> yes_no_choose;

    if (yes_no_choose == 'y')
    {

        game:
        /*      Number Insertion        */
        cout << "Enter First Number: ";
        cin >> number_1;
        cout << "Enter Second Number: ";
        cin >> number_2;

        cout << "Want to add another Number?    ";
        cout << "\t(y/n): ";
        cin >> y_n_opt;

        if (y_n_opt == 'y')
        {
            
            number_choosing:
            cout << "Enter The Extra Number: ";
            cin >> number_extra;

            cout << "Continue?";
            cout << "\t(y/n): ";
            cin >> yes_n_opt;

            if (yes_n_opt == 'y')
            {
                int operator_to_be_used;
                cout << endl;
                opt();
                cin >> operator_to_be_used;
                cout << endl;

                if (operator_to_be_used == 1)
                {
                    cout << "The Sum of These Numbers is " << sum(number_1, number_2, number_extra) << endl;
                }
                
                else if (operator_to_be_used == 2)
                {
                    cout << "The Difference of These Numbers is " << difference(number_1, number_2, number_extra) << endl;
                }

                else if (operator_to_be_used == 3)
                {
                    cout << "The Product of These Numbers is " << product(number_1, number_2, number_extra) << endl;
                }

                else if (operator_to_be_used == 4)
                {
                    cout << "The Sum of These Numbers is " << sum(number_1, number_2, number_extra) << endl;
                    cout << "The Difference of These Numbers is " << difference(number_1, number_2, number_extra) << endl;
                    cout << "The Product of These Numbers is " << product(number_1, number_2, number_extra) << endl;
                }
            }

            else if (yes_n_opt == 'n')
            {
                cout << "Aww. Try Again !" << endl;
                goto number_choosing;
            }
            
            
        }

        else if (y_n_opt == 'n')
        {
            cout << "Continue?";
            cout << "\t(y/n): ";
            cin >> yes_n_opt;

            if (yes_n_opt == 'y')
            {
                int operator_to_be_used;
                cout << endl;
                opt();
                cin >> operator_to_be_used;

                if (operator_to_be_used == 1)
                {
                    cout << "The Sum of These Numbers is " << sum(number_1, number_2) << endl;
                }
                
                else if (operator_to_be_used == 2)
                {
                    cout << "The Difference of These Numbers is " << difference(number_1, number_2) << endl;
                }

                else if (operator_to_be_used == 3)
                {
                    cout << "The Product of These Numbers is " << product(number_1, number_2) << endl;
                }

                else if (operator_to_be_used == 4)
                {
                    cout << "The Sum of These Numbers is " << sum(number_1, number_2) << endl;
                    cout << "The Difference of These Numbers is " << difference(number_1, number_2) << endl;
                    cout << "The Product of These Numbers is " << product(number_1, number_2) << endl;
                }
            }

            else if (yes_n_opt == 'n')
            {
                cout << endl << "Aww. Try Again !" << endl;
                goto game;
            }
        }
        

        cout << "Would you like to play again?";
        cout << "\tChoose (y/n): ";
        cin >> y_no_opt;

        if (y_no_opt == 'y')
        {
            goto game;
        }
        
        else if (y_no_opt == 'n')
        {
            cout << "Th4nk You f0r P1aying :)" << endl;
        }
        
    }

    else if (yes_no_choose == 'n')
    {
        cout << endl << "You sure you want to quit?";
        cout << "\t(y/n): ";
        cin >> yes_no_opt;

        if (yes_no_opt == 'y')
        {
            cout << ";-; OK..." << endl;
        }
        
        else if (yes_no_opt == 'n')
        {
            cout << "You scared me there for a second mate!" << endl << endl;
            goto game;
        }
        
    }
    
    return 0;
}