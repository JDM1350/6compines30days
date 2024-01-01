 vector<int> result(2); // Create a vector to store the result

    int max = arr[0];
    int min = arr[0];

    // Find the minimum and maximum values in the array
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // Find the repeating element
    for (int i = 0; i < n; i++) {
        int c = 1;
        if (arr[abs(arr[i]) - 1] > 0) {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        } else {
            result[0] = abs(arr[i]);
        }
    }

    // Find the missing element
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            result[1] = i + 1;
            break;
        }
    }

    return result;