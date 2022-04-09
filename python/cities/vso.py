import re
vso_lines = []

mass_cities = []
with open('newCities.txt') as city_file:
    for line in city_file.readlines():
        mass_cities.append(line.strip('\n'))



#find cities
p = re.compile(r'\s{15,}\w+\s{15,}\d{1,2}')
with open('vso_a.txt') as vso_file:
    contents = vso_file.read()
m = p.findall(contents)
m_clean = []
for i in range(len(m)):
    m_clean.append(m[i].strip())
p2 = r'[\d|\d\d]'
m_clean_strip = []
for i in m_clean:
    m_clean_strip.append(re.sub(p2,'', i).strip())
cities_clean = m_clean_strip
# find VSOs
p3 = re.compile(r'\w+\.*\s\w+\s+\(\d{3}\) \d{3}-\d{4}')
with open('vso_a.txt') as vso_file:
    vso_read = vso_file.read()
    m2 = p3.findall(vso_read)
print(m2)
p3_a = re.compile(r'\w+.*\s\w+\S+')
vso_names = []
# for line in m2:
#     vso_names.append(p3_a.findall(line))
# for n in vso_names:
#     print(n)










# #print(mass_cities)
# city_list = []
# for city in mass_cities:
#     pattern = re.compile(r'Littleton')
#     for line in vso_lines:
#         if line in pattern:
#             city_list.append(pattern.finditer(line))
# print(len(city_list))
