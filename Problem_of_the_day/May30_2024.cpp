class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size(); // Get the size of the array 'arr'
        vector<int> prefixXOR(n + 1); // Initialize a vector for prefix XOR
      
        // Calculate prefix XOR values for the array
        for (int i = 0; i < n; ++i) {
            prefixXOR[i + 1] = prefixXOR[i] ^ arr[i];
        }

        int ans = 0; // Initialize the answer variable to store the count of triplets

        // Triple nested loop to compare all possible combinations of i, j, and k
        for (int i = 0; i < n - 1; ++i) { // 'i' iterates from 0 to second last element
            for (int j = i + 1; j < n; ++j) { // 'j' starts from the element next to 'i'
                for (int k = j; k < n; ++k) { // 'k' starts from 'j' and covers all elements till the end

                    // XOR of elements from i to j-1
                    int a = prefixXOR[j] ^ prefixXOR[i];
                    // XOR of elements from j to k
                    int b = prefixXOR[k + 1] ^ prefixXOR[j];

                    // If the XOR subarray values are the same, increment the answer
                    if (a == b) {
                        ++ans;
                    }
                }
            }
        }

        // Return the final triplet count
        return ans;
    }
};
