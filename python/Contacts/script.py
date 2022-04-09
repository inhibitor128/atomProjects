contacts = []
def secection_menu():
    tmp_ = contact_menu()
    while True:
        if tmp_ == 'a':
            contacts.append(new_contact())
            return secection_menu()
        elif tmp_ == 'b':
             return update_contact()
        elif tmp_ == 'c':
            return 'c'
        elif tmp_ == 'd':
            return 'Exit'
def contact_menu():
    while True:
        choice = input('[a] New Contact\n[b] Update Contact\n[c] Delete Contact\n[d] Exit\n>')
        if choice in ['a','b','c','d']:
            return choice
        else:
            print('Make a valid selection')
def new_contact():
    contact_fields = {}
    first_name = input('Enter first name:\n>')
    last_name = input('Enter last name:\n>')
    cell_phone = input('Enter cell phone:\n>')
    email = input('Enter email:\n>')
    address = input('Enter address:\n>')
    city = input('Enter city:\n>')
    state = input('Enter state\n>')
    zip_code = input('Enter zip code:\n>')
    notes = input('Enter notes:\n>')
    user_id = len(contacts)
    contact_fields = {
    'user id': user_id,
    'first name': first_name,
    'last name': last_name,
    'cell phone': cell_phone,
    'email': email,
    'address': address,
    'city': city,
    'state': state,
    'zip code': zip_code,
    'notes': notes
    }
    return contact_fields
def update_contact():
    while True:
        ids = [contact['user id'] for contact in contacts]
        print(ids)
        for contact in contacts:
            print('id: {} user: {} {}'.format(contact['user id'], contact['first name'], contact['last name']))
        scr = input('Enter user id to edit or type exit to exit\n>')
        if int(scr) in ids:
            for i in contacts[int(scr)]:
                print(i)
                break
        elif scr == 'exit':
            return scr
#--------------------------------------------------
secection_menu()


print(contacts)
