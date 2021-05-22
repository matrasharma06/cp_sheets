int main()
{
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int  arr_size = 6;
    int max_ele = arr[0];
    int min_ele = arr[0];
    
    for(int i = 1; i < arr_size; i++)
    {
        if (arr[i] > max_ele)    
            max_ele = arr[i];
        
        if (arr[i] < min_ele)    
            min_ele = arr[i];
    }
    
    cout << "Minimum element is " << min_ele << endl;
    cout << "Maximum element is " << max_ele;
    
    return 0;
}