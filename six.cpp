// // #include <bits/stdc++.h>

// // using namespace std;

// // void Josh(vector<int> person, int k, int index)
// // {
// // 	// Base case , when only one person is left
// // 	if (person.size() == 1) {
// // 		cout << person[0] << endl;
// // 		return;
// // 	}

// // 	// find the index of first person which will die
// // 	index = ((index + k) % person.size());

// // 	// remove the first person which is going to be killed
// // 	person.erase(person.begin() + index);

// // 	// recursive call for n-1 persons
// // 	Josh(person, k, index);
// // }

// // int main()
// // {
// // 	int n = 5; // specific n and k values for original
// // 				// josephus problem
// // 	int k = 3;
// // 	k--; // (k-1)th person will be killed
// // 	int index
// // 		= 0; // The index where the person which will die

// // 	vector<int> person;
// // 	// fill the person vector
// // 	for (int i = 1; i <= n; i++) {
// // 		person.push_back(i);
// // 	}

// // 	Josh(person, k, index);
// // }


// #include <bits/stdc++.h>

// using namespace std;

// void Josh(vector<int> person, int k, int index)
// {
//     // Base case , when only one person is left
//     if (person.size() == 1)
//     {
//         cout << person[0] << endl;
//         return;
//     }

//     // find the index of first person which will die
//     index = ((index + k) % person.size());

//     // remove the first person which is going to be killed
//     person.erase(person.begin() + index);

//     // recursive call for n-1 persons
//     Josh(person, k, index);
// }

// int main()
// {
//     // Test Case 1
//     {
//         int n = 14; // specific n and k values for original
//                     // josephus problem
//         int k = 2;
//         k--; // (k-1)th person will be killed
//         int index = 0; // The index where the person which will die

//         vector<int> person;
//         // fill the person vector
//         for (int i = 1; i <= n; i++)
//         {
//             person.push_back(i);
//         }

//         Josh(person, k, index);
//     }

//     // Test Case 2
//     {
//         int n = 7; // specific n and k values for original
//                    // josephus problem
//         int k = 3;
//         k--; // (k-1)th person will be killed
//         int index = 0; // The index where the person which will die

//         vector<int> person;
//         // fill the person vector
//         for (int i = 1; i <= n; i++)
//         {
//             person.push_back(i);
//         }

//         Josh(person, k, index);
//     }

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

void Josh(vector<int> person, int k, int index)
{
    // Base case , when only one person is left
    if (person.size() == 1)
    {
        cout << person[0] << endl;
        return;
    }

    // find the index of first person which will die
    index = ((index + k) % person.size());

    // remove the first person which is going to be killed
    person.erase(person.begin() + index);

    // recursive call for n-1 persons
    Josh(person, k, index);
}

int main()
{
    int T;
    cin >> T; // Input the number of test cases

    for (int t = 0; t < T; ++t)
    {
        int n, k;
        cin >> n >> k; // Input n and k for each test case
        k--;           // (k-1)th person will be killed
        int index = 0; // The index where the person which will die

        vector<int> person;
        // fill the person vector
        for (int i = 1; i <= n; i++)
        {
            person.push_back(i);
        }

        Josh(person, k, index);
    }

    return 0;
}
