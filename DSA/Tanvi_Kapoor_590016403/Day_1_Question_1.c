#include <stdio.h>

// Function to process an array as per the problem statement
void processArray(int nums[], int n) {
    int sum = 0;
    int freq[n + 1];  // Frequency array to track numbers from 1 to n
    for (int i = 0; i <= n; i++)
        freq[i] = 0;

    // Task 1: Modify array and calculate frequency
    printf("Modified array (negatives replaced with zero):\n[");
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0)
            nums[i] = 0;

        if (nums[i] >= 1 && nums[i] <= n)
            freq[nums[i]]++;

        sum += nums[i];

        printf("%d", nums[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    // Task 2: Find missing and repeated number in range 1 to n
    int missing = -1, repeated = -1;
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0)
            missing = i;
        else if (freq[i] == 2)
            repeated = i;
    }

    if (missing != -1 && repeated != -1)
        printf("Missing: %d, Twice: %d\n", missing, repeated);
    else
        printf("No missing or repeated numbers found in the range 1 to %d\n", n);

    // Task 3: Print sum of array elements
    printf("Sum of array elements: %d\n", sum);
    printf("-----------------------------\n");
}

// Main function with test cases
int main() {
    int nums1[] = {-1, 2, -3, 4, 5};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Example 1:\n");
    processArray(nums1, size1);

    int nums2[] = {3, 1, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Example 2:\n");
    processArray(nums2, size2);

    int nums3[] = {10, 20, 30};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Example 3:\n");
    processArray(nums3, size3);

    return 0;
}
