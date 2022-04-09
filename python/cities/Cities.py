cities = []
with open('masscitiesupdate.txt') as cities_file:
    city_list = cities_file.readlines()
    for city in city_list:
        if city not in cities:
            cities.append(city)
cities_strip = []
for city in cities:
    cities_strip.append(city.strip())


city_numbers = []
for i in range(len(cities_strip)):
    city_numbers.append(cities_strip[i] + ' {i}'.format(i=i+1))


with open('_phonebook.txt') as phonebook:
    py_phonebook = phonebook.readlines()

#print(py_phonebook[py_phonebook.find(city_numbers[1]): py_phonebook.find(city_numbers[2])])

# pb_index = []
# for i in range(len(city_numbers)):
#     pb_index.append([i,i+1])

py_phonebook_strip = []
for line in py_phonebook:
    if line == :
        py_phonebook_strip.append(line.strip())
    else:
        continue

print(py_phonebook_strip)







# for index in pb_index:
#     #print(index)
#     if index[1] == 351:
#         new_py_phonebook.append(py_phonebook[py_phonebook.find(city_numbers[index[0]]): len(py_phonebook)])
#     else:
#         new_py_phonebook.append(py_phonebook[py_phonebook.find(city_numbers[index[0]]): py_phonebook.find(city_numbers[index[1]])])
