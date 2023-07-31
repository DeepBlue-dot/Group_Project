#include <iostream>
#include <array>
#include <string>

using namespace std;

int main ()
{
    int choice, num=0;
    string employee[100][4] = {" "};
    int employee_no[100][7] = {0};
    do
    {
        cout << "Choose menu" << endl;
        cout << "\t1.Add" << endl;
        cout << "\t2.Update" << endl;  
        cout << "\t3.Display" << endl; 
        cout << "\t4.Search" << endl;
        cout << "\t5.Exit" << endl;  
        cin >> choice;

        if(choice == 1)
        {
            int n;
            cout << "Enter number of employees to be add:\n";
            cin >> n;

            for(int i=0; i<n; i++,num++)
            {
                cout << "Enter employee ID:" << endl;
                cin >> employee[num][0];
                cout << "Enter employee name:" << endl;
                cin >> employee[num][1];
                cout << "Enter employee Age:"<< endl;
                cin >> employee[num][2];
                cout << "Enter employee Sex:"<< endl;
                cin >> employee[num][3];
                cout << "Enter employee Expiriance:"<< endl;
                cin >> employee_no[num][0];
                cout << "Enter employee Scalary:"<< endl;
                cin >> employee_no[num][1];
                //pesion
                employee_no[num][2] = 0.08*employee_no[num][1];
                //tax
                if(employee_no[num][1] <= 600)
                {
                    employee_no[num][3] = 0;
                }
                else if(employee_no[num][1] > 600 && employee_no[num][1] <= 4000)
                {
                    employee_no[num][3] = 0.1*employee_no[num][1];
                }
                else if(employee_no[num][1] > 4000 && employee_no[num][1] <= 8000)
                {
                    employee_no[num][3] = 0.2*employee_no[num][1];
                }
                else if(employee_no[num][1] > 8000 && employee_no[num][1] <= 12000)
                {
                    employee_no[num][3] = 0.3*employee_no[num][1];
                }
                else if(employee_no[num][1] > 12000)
                {
                    employee_no[num][3] = 0.4*employee_no[num][1];
                }
                //bonuse
                if(employee_no[num][0] > 5)
                {
                    employee_no[num][4] = 1000;
                }
                else if(employee_no[num][0] > 10)
                {
                    employee_no[num][4] = 2500;
                }
                else
                {
                    employee_no[num][4] = 0;
                }
                employee_no[num][5] = employee_no[num][1]+employee_no[num][4];
                employee_no[num][6] = employee_no[num][5] - (employee_no[num][2]+employee_no[num][3]);
            }

        }
        else if(choice ==2)
        {
            int i;
            string id;
            cout <<"Enter employees ID number for update:\n";
            cin.ignore();
            getline(cin, id);
            for(int i=0; i < num; i++)
            {
                if(employee[i][0] == id)
                {
                    cout << "Enter employee " << i+1  << " new ID:" << endl;
                    cin >> employee[i][0];
                    cout << "Enter employee " << i+1  << " new name:" << endl;
                    cin >> employee[i][1];
                    cout << "Enter employee " << i+1  << " new Age:"<< endl;
                    cin >> employee[i][2];
                    cout << "Enter employee " << i+1 << " new Sex:"<< endl;
                    cin >> employee[i][3];
                    cout << "Enter employee " << i+1  << " new Expiriance:"<< endl;
                    cin >> employee_no[i][0];
                    cout << "Enter employee " << i+1  << " new Scalary:"<< endl;
                    cin >> employee_no[i][1];
                    //pesion
                    employee_no[i][2] = 0.08*employee_no[i][1];
                    //tax
                    if(employee_no[i][1] <= 600)
                    {
                        employee_no[i][3] = 0;
                    }
                    else if(employee_no[i][1] > 600 && employee_no[i][1] <= 4000)
                    {
                        employee_no[i][3] = 0.1*employee_no[i][1];
                    }
                    else if(employee_no[i][1] > 4000 && employee_no[i][1] <= 8000)
                    {
                        employee_no[i][3] = 0.2*employee_no[i][1];
                    }
                    else if(employee_no[i][1] > 8000 && employee_no[i][1] <= 12000)
                    {
                        employee_no[i][3] = 0.3*employee_no[i][1];
                    }
                    else if(employee_no[i][1] > 12000)
                    {
                        employee_no[i][3] = 0.4*employee_no[i][1];
                    }
                    //bonuse
                    if(employee_no[i][0] > 5)
                    {
                        employee_no[i][4] = 1000;
                    }
                    else if(employee_no[i][0] > 10)
                    {
                        employee_no[i][4] = 2500;
                    }
                    else
                    {
                        employee_no[i][4] = 0;
                    }
                    employee_no[i][5] = employee_no[i][1]+employee_no[i][4];
                    employee_no[i][6] = employee_no[i][5] - (employee_no[i][2]+employee_no[i][3]);
                    break;
                }
                else if(i == num-1)
                {
                    cout << "ID not Found.\n";
                }
            }

        }
        else if(choice ==3)
        {
            cout << "ID\tName\tage\tsex\tExpi\tScalary\tpesion\ttax\tbonuse\tGross_s\tNet_s"<<endl;
            for(int i=0; i < num; i++)
            {
                for(int j=0; j < 4; j++)
                {
                    cout << employee[i][j] << "\t";
                }
                for(int j=0; j < 7; j++)
                {
                    cout << employee_no[i][j] << "\t";
                }
                cout << endl;
            }
        }
        else if(choice ==4)
        {
            int c;
            string id;
            cout << "Search with: \n\t1.ID \n\t2.Name: \n";
            cin >> c;
            switch (c)
            {
                case 1:
                    cout << "Enert Search ID:\n";
                    cin.ignore();
                    getline(cin, id);
                    for(int i=0; i < num; i++)
                    {
                        if(employee[i][0] == id)
                        {
                            cout << "ID\tName\tage\tsex\tExpi\tScalary\tpesion\ttax\tbonuse\tGross_s\tNet_s"<<endl;
                            for(int j=0; j < 4; j++)
                            {
                                cout << employee[i][j] << "\t";
                            }
                            for(int j=0; j < 7; j++)
                            {
                                cout << employee_no[i][j] << "\t";
                            } 
                            cout << endl;
                            break;
                        }
                        else if(i == num-1)
                        {
                            cout << "ID not Found.\n";
                        }
                    }
                    break;
                case 2:
                    cout << "Enert Search name:\n";
                    cin.ignore();
                    getline(cin, id);
                    for(int i=0; i < num; i++)
                    {
                        if(employee[i][1] == id)
                        {
                            cout << "ID\tName\tage\tsex\tExpi\tScalary\tpesion\ttax\tbonuse\tGross_s\tNet_s"<<endl;
                            for(int j=0; j < 4; j++)
                            {
                                cout << employee[i][j] << "\t";
                            }
                            for(int j=0; j < 7; j++)
                            {
                                cout << employee_no[i][j] << "\t";
                            } 
                            cout << endl;
                            break;
                        }
                        else if(i == num-1)
                        {
                            cout << "Name not Found.\n";
                        }
                    }
                    break;
            
            default:
                cout << "Invalid Input.\t";
                break;
            }

        }
        else if(choice == 5)
        {
            return 0;
        }

    } while (true);
    

}