#include <bits/stdc++.h>
using namespace std;

void Insertion(int arr[], int &size, int insertIndex, int value)
{
    if (insertIndex < 0 || insertIndex > size)
    {
        cout << "Please enter a valid index!!!";
        return;
    }
    int *arr2 = new int[++size];
    for (int i = 0; i < size; i++)
    {

        if (insertIndex > i)
            arr2[i] = arr[i];
        else if (insertIndex == i)
            arr2[i] = value;
        else if (i > insertIndex)
            arr2[i] = arr[i - 1];
    }

    cout << "\nThe new array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    delete[] arr2;
}

void Deletion(int arr[], int &size, int deletionIndex)

{
    if (deletionIndex < 0 || deletionIndex > size)
    {
        cout << "Please enter a valid index!!!";
        return;
    }
    int *arr2 = new int[--size];
    for (int i = 0; i < size; i++)
    {
        if (deletionIndex > i)
            arr2[i] = arr[i];
        else
            arr2[i] = arr[i + 1];
    }

    cout << "\nThe new array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    delete[] arr2;
}

int main()
{
    int n;
    cout << "Enter size of the array:";
    cin >> n;
    int *arr = new int[n];
    cout << endl;
    cout << "Enter elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int choice;
    cout << "\nChoose an option:\nEnter 1 for Insertion:\nEnter 2 for Deletion:\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        int value;
        cout << "Enter the value for insert:";
        cin >> value;
        int index;
        cout << "\nChoose the index for Insertion:\nEnter 1 for first index:\nEnter 2 for middle index:\nEnter 3 for last index:\nEnter 4 for other index:\n";
        cin >> index;

        switch (index)
        {
        case 1:
            Insertion(arr, n, 0, value);
            break;

        case 2:
            Insertion(arr, n, (n / 2), value);
            break;
        case 3:
            Insertion(arr, n, n, value);
            break;
        case 4:
            int other;
            cout << "\nEnter the index for insertion:";
            cin >> other;
            Insertion(arr, n, other, value);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
        break;

    case 2:
        int choice;
        cout << "\nChoose the option for delete:\nEnter 1 for delete first index:\nEnter 2 for delete middle index:\nEnter 3 for last index:\nEnter 4 for any index:\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Deletion(arr, n, 0);
            break;
        case 2:
            Deletion(arr, n, (n / 2));
            break;
        case 3:
            Deletion(arr, n, n - 1);
            break;
        case 4:
            int other;
            cout << "\nEnter the index for deletion:";
            cin >> other;
            Deletion(arr, n, other);
            break;
        default:
            cout << "Invalid input!!!";
            break;
        }
        break;
    default:
        cout << "Invalid input!!";
        break;
    }
    return 0;
}