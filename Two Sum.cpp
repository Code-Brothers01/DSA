// Bruteforce
T.C: O(n^2)
S.C:O(1)

#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

// Function to find two indices whose values sum up to the target
vector<int> twoSum(int n, vector<int> &arr, int target) {
    vector<int> ans; // Stores the indices of the two elements
    for (int i = 0; i < n; i++) { // First loop to iterate over elements
        for (int j = i + 1; j < n; j++) { // Second loop starts from i+1 to avoid duplicates
            if (arr[i] + arr[j] == target) { // Check if the sum matches the target
                ans.push_back(i); // Store the index of the first element
                ans.push_back(j); // Store the index of the second element
                return ans; // Return the indices as soon as we find a valid pair
            }
        }
    }
    return { -1, -1}; // Return {-1, -1} if no valid pair is found
}

int main()
{
    int n = 5; // Number of elements in the array
    vector<int> arr = {2, 6, 5, 8, 11}; // Input array
    int target = 19; // Target sum

    // Call the function and store the result
    vector<int> ans = twoSum(n, arr, target);

    // Print the result
    cout << "This is the answer : [" << ans[0] << ", "
         << ans[1] << "]" << endl;

    return 0; // Indicate that the program ended successfully
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Optimal Solution- Hash

T.C: O(n)
S.C:O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find the indices of two numbers that add up to the target
vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> mp; // Unordered_ map to store numbers and their indices
    
    // Iterate through the array
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Calculate the required complement
        
        // Check if the complement exists in the map
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i}; // Return the indices if found
        }
        
        // Store the current number with its index in the map
        mp[nums[i]] = i;
    }
    
    return {}; // Return an empty vector if no pair is found
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Input array
    int target = 9; // Target sum
    //9-2=7// 2 gets stored in onuordered map
   // 9-7=2// this time it checks if 2 is already there in map, this time it is present , s
    
    // Call the twoSum function and store the result
    vector<int> result = twoSum(nums, target);
    
    // Output the result
    cout << "Ans is: [" << result[0] << "," << result[1] << "]" << endl;

    return 0;
}



