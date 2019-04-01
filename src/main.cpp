#include "mergeSort.hh"
#include "quickSort.hh"
#include "introSort.hh"


void test(int n, float mnoznik);
void testReverse(int n);



int main()
{
    std::cout << "MergeSort:\t\tQuickSort\t\tIntroSort" << std::endl << std::endl;

    test(1000000, 0.0);

    // test(10000, 0.0);
    // test(50000, 0.0);
    // test(100000, 0.0);
    // test(500000, 0.0);
    // test(1000000, 0.0);
    // std::cout << std::endl;

    // test(10000, 0.25);
    // test(50000, 0.25);
    // test(100000, 0.25);
    // test(500000, 0.25);
    // test(1000000, 0.25);
    // std::cout << std::endl;

    // test(10000, 0.50);
    // test(50000, 0.50);
    // test(100000, 0.50);
    // test(500000, 0.50);
    // test(1000000, 0.50);
    // std::cout << std::endl;

    // test(10000, 0.75);
    // test(50000, 0.75);
    // test(100000, 0.75);
    // test(500000, 0.75);
    // test(1000000, 0.75);
    // std::cout << std::endl;

    // test(10000, 0.95);
    // test(50000, 0.95);
    // test(100000, 0.95);
    // test(500000, 0.95);
    // test(1000000, 0.95);
    // std::cout << std::endl;

    // test(10000, 0.99);
    // test(50000, 0.99);
    // test(100000, 0.99);
    // test(500000, 0.99);
    // test(1000000, 0.99);
    // std::cout << std::endl;

    // test(10000, 0.997);
    // test(50000, 0.997);
    // test(100000, 0.997);
    // test(500000, 0.997);
    // test(1000000, 0.997);
    // std::cout << std::endl;

    // testReverse(10000);
    // testReverse(50000);
    // testReverse(100000);
    // testReverse(500000);
    // testReverse(1000000);
    // std::cout << std::endl;

}


void test(int n, float mnoznik)
{
    std::cout << n/1000 <<"tys," << mnoznik*100 << "%-sorted at begin:" << std::endl;


    float A_time_mSort(0);
    float A_time_qSort(0);
    float A_time_iSort(0);

    // for(int i = 100; i>0; i--)
    {
        clock_t t;
        float time_mSort(0);
        float time_qSort(0);
        float time_iSort(0);

        // [DEBUG]
        // std::cout << "Podaj wielkosc: ";
        // std::cin >> n;

        // Alocate memory for N t
        std::vector<int> arr1;

        FillArray(arr1, n);
        iSortAsc(arr1, 0, ((int)(mnoznik*n)), 2*log(n)/M_LN2);
        
        std::vector<int> arr2(arr1);
        std::vector<int> arr3(arr1);



        t = clock();
            mSortAsc(arr1, 0, n-1);
        t = clock() - t;
            // checkAsc(arr1);

        time_mSort += ((float)t)/CLOCKS_PER_SEC;
    
        t = clock();
            qSortAsc(arr2,0,n-1);
        t = clock() - t;
            // checkAsc(arr2);

        time_qSort += ((float)t)/CLOCKS_PER_SEC;

        t = clock();
            iSortAsc(arr3, 0, n-1, 2*log(n)/M_LN2);
        t = clock() - t;
            // checkAsc(arr3);

        time_iSort += ((float)t)/CLOCKS_PER_SEC;


        A_time_mSort += time_mSort;
        A_time_qSort += time_qSort;
        A_time_iSort += time_iSort;
    }
    
    std::cout << A_time_mSort << "\t\t" << A_time_qSort << "\t\t" << A_time_iSort << std::endl << std::endl;
    // std::cout << A_time_mSort/100.0 << "\t\t" << A_time_qSort/100.0 << "\t\t" << A_time_iSort/100.0 << std::endl << std::endl;
}


void testReverse(int n)
{
        std::cout << n/1000 <<"tys," << "reverse-sorted at begin:" << std::endl;


    float A_time_mSort(0);
    float A_time_qSort(0);
    float A_time_iSort(0);

    for(int i = 100; i>0; i--)
    {
        clock_t t;
        float time_mSort(0);
        float time_qSort(0);
        float time_iSort(0);

        // [DEBUG]
        // std::cout << "Podaj wielkosc: ";
        // std::cin >> n;

        // Alocate memory for N t
        std::vector<int> arr1;

        FillArray(arr1, n);
        iSortDesc(arr1, 0, n, 2*log(n)/M_LN2);
        
        std::vector<int> arr2(arr1);
        std::vector<int> arr3(arr1);



        t = clock();
            mSortAsc(arr1, 0, n-1);
        t = clock() - t;
            // checkAsc(arr1);

        time_mSort += ((float)t)/CLOCKS_PER_SEC;
    
        t = clock();
            qSortAsc(arr2,0,n-1);
        t = clock() - t;
            // checkAsc(arr2);

        time_qSort += ((float)t)/CLOCKS_PER_SEC;

        t = clock();
            iSortAsc(arr3, 0, n-1, 2*log(n)/M_LN2);
        t = clock() - t;
            // checkAsc(arr3);

        time_iSort += ((float)t)/CLOCKS_PER_SEC;


        A_time_mSort += time_mSort;
        A_time_qSort += time_qSort;
        A_time_iSort += time_iSort;
    }
    
    std::cout << A_time_mSort/100.0 << "\t\t" << A_time_qSort/100.0 << "\t\t" << A_time_iSort/100.0 << std::endl << std::endl;
}