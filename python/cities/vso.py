import re
vso_lines = []
mass_cities = []
# find cities
with open('newCities.txt') as city_file:
    for line in city_file.readlines():
        mass_cities.append(line.strip('\n'))
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
    m_clean_strip.append(re.sub(p2, '', i).strip())
cities_clean = m_clean_strip
# find VSOs
p3 = re.compile(r'\w+\.*\s\w+\s+\(\d{3}\) \d{3}-\d{4}')
with open('vso_a.txt') as vso_file:
    vso_read = vso_file.read()
    m2 = p3.findall(vso_read)
p3_a = r'\(\d{3}\) \d{3}-\d{4}'
vso_names = []
for line in m2:
    vso_names.append(re.sub(p3_a, '', line).strip())
# print(vso_names)
# phone numbers
vso_numbers = []
p4 = re.compile(r'\w+\.*\s\w+')
for line in m2:
    vso_numbers.append(re.sub(p4, '', line).strip())
# print(vso_numbers)
# vso email address
vso_email = []
p5 = re.compile(
    r'FAX:.+(@\w+\.\w+\.\w{2}\.\w{2}|@\w+.\w{2}\.\w{2,3}|@\w+\.\w{2,3})')
with open('vso_a.txt') as vso_file:
    vso_read = vso_file.read()
    m3 = p5.findall(vso_read)
print(len(m3))
print(m3)
