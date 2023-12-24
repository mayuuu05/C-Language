def find_negative_elements(arr):
    negative_elements = [x for x in arr if x < 0]
    return negative_elements

# Example array
input_array = [1, -2, 3, -4, -5, 6, 7, -8, 9]

negative_nums = find_negative_elements(input_array)
print("Negative elements in the array:", negative_nums)