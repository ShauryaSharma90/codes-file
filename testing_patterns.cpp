    #include <iostream>
    using namespace std;

    int pa(int a)
    {
        // *             *
        // * *         * *
        // * * *     * * *
        // * * * * * * * *
        // * * * * * * * *
        // * * *     * * *
        // * *         * *
        // *             *

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a * 2; j++)
            {
                if (j <= i || i + j >= a * 2 - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << "\n";
        }
        for(int k=0;k<a;k++){
            for(int l=0;l<a*2;l++){
                if(l+k<=a-1 || l>=k)
                    cout << "* ";
                else 
                    cout << "  ";
            }
        }
        // for (int k = 0; k < a; k++)
        // {
        //     for (int j = 0; j < a; j++)
        //     {
        //         if (j + k <= a - 1)
        //         {
        //             cout << "* ";
        //         }
        //         else
        //         {
        //             cout << "  ";
        //         }
        //     }
        //     for (int j = 0; j < a; j++)
        //     {
        //         if (j >= k)
        //             cout << "* ";
        //         else
        //             cout << "  ";
        //     }
        //     cout << "\n";
        // }
        // return 0;
    }

    int main()
    {
        int a = 4;
        pa(a);
        return 0;
    }
