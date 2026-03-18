from datetime import date

snetence = """Hello user_name today's date is today's_date"""
print(snetence.replace("user_name", "Utsav Raj").replace("today's_date",str(date.today())))