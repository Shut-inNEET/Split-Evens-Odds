// Split Evens-Odds.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "unorderedLinkedList.h"

int main()
{
    intLinkedList list;
    int input;

    cout << "Enter integers ending with -999" << endl;
    do
    {
        cin >> input;
        list.insertLast(input);
    } while (input != -999);
    list.deleteNode(-999);
    cout << endl;

    linkedListIterator<int> iterator;

    cout << "list: ";
    for (auto item : list)
    {
        cout << item << " ";
    }
    cout << endl; 

    intLinkedList evensList;
    intLinkedList oddsList;

    list.splitEvensOddsList(evensList, oddsList);

    cout << "evensList: ";
    for (auto item : evensList)
    {
        cout << item << " ";
    }
    cout << endl; 

    cout << "oddsList: ";
    for (auto item : oddsList)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0; 
};