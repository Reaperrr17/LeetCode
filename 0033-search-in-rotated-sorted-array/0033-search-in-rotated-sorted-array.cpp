class Solution {
public:
    int search(vector<int>& nums, int target) {
        int N = nums.size();
        int minindex;

        if (nums[0] <= nums[N - 1]) {
            minindex = 0;
        } else {
            int st = 0;
            int end = N - 1;
            int ans;

            while (st <= end) {

                int mid = end - (end - st) / 2;

                if (nums[mid] < nums[(mid - 1 + N) % N] &&
                    nums[mid] <= nums[(mid + 1) % N]) {
                    minindex = mid;
                    break;
                } else if ((nums[mid] >= nums[st] && nums[st] <= nums[end]) ||
                           (nums[mid] <= nums[st] && nums[mid] <= nums[end])) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
        }

        int st = 0;
        int maxindex = (minindex + N - 1) % N;
        int end = maxindex;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        st = maxindex + 1;
        end = N - 1;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return -1;
    }
};