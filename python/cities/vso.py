import re
vso_lines = []
# find cities
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
vso_emails = []
p5 = re.compile(r'FAX:.+')
with open('vso_a.txt') as vso_file:
    vso_read = vso_file.read()
    m3 = p5.findall(vso_read)
p5_a = re.compile(r'\S+@\S+')
for line in m3:
    vso_emails.append(p5_a.findall(line))
vso_emails_split = []
for line in vso_emails:
    if len(line) > 1:
        vso_emails_split.append(line[0])
        vso_emails_split.append(line[1])
    else:
        vso_emails_split.append(line[0])
# VSO Dict
vso_dict = {
    'city': cities_clean,
    'name': vso_names,
    'phone number': vso_numbers,
    'email': vso_emails_split
    }
for key in vso_dict.keys():
    print(key)
    for i in vso_dict[key]:
        print(i)
