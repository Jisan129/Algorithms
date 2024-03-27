def threesome():
    array = [-4, -2, -1, 0, 2, 1]
    new_array = sorted(array)
    array_dict = {}
    list = []
    for index, value in enumerate(array):
        array_dict[index] = value
    length = len(array) - 1

    for i, value in enumerate(new_array):

        result = (new_array[i] + new_array[length - i])*(-1)
        if result in array_dict.values():
            list.append([new_array[i], new_array[length - i], result])
        elif result < 0:
            i -= 1
        elif result == 0:
            i += 1

    result = []
    unique_sublists = set()
    for sublist in list:
        # Convert the sublist to a tuple to make it hashable
        sublist=sorted(sublist)
        sublist_tuple = tuple(sublist)

        # Check if the tuple version of the sublist is in the set of unique sublists
        if sublist_tuple not in unique_sublists:
            # If not, add it to both the set and the result list
            unique_sublists.add(sublist_tuple)
            result.append(sublist)

    return result
    return list


print(threesome())