using System;
using System.Collections.Generic;

public class Solution
{
    public int[] SmallestRange(IList<IList<int>> a)
    {
        int k = a.Count;
        // Min-heap (priority queue)
        var pq = new SortedSet<(int value, int row, int col)>();
        int maxVal = int.MinValue;

        // Initialize the priority queue and find the maximum value
        for (int i = 0; i < k; i++)
        {
            pq.Add((a[i][0], i, 0));
            maxVal = Math.Max(maxVal, a[i][0]);
        }

        int[] ans = { -100000000, maxVal };

        while (true)
        {
            int minVal = pq.Min.value;
            int i = pq.Min.row;
            int idx = pq.Min.col;

            pq.Remove(pq.Min); // Remove the minimum element

            // Update the answer if we found a smaller range
            if (maxVal - minVal < ans[1] - ans[0])
            {
                ans[0] = minVal;
                ans[1] = maxVal;
            }

            // Move to the next element in the current row
            idx++;

            // If we reach the end of one of the lists, break
            if (idx == a[i].Count)
                break;

            pq.Add((a[i][idx], i, idx));
            maxVal = Math.Max(maxVal, a[i][idx]);
        }

        return ans;
    }
}
