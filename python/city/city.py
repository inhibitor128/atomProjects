import re
cities = []
p = re.compile(r'\w+')
with open('masscities.txt') as cities_file:
    cities_read = cities_file.read()

cities = p.findall(cities_read)
cities_clean = []
for city in cities:
    if city not in cities_clean:
        cities_clean.append(city)
cities_clean.append('Yarmouth')

with open('masscities_clean.txt', 'w') as massClean:
    for city in cities_clean:
        massClean.write(city + '\n')

with open('vso.txt') as vso_file:
    vso_read = vso_file.read()
