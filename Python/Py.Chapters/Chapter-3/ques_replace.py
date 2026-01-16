from datetime import date


letter = '''Dear <|Name|> You are selected <|Date|>''';

print(letter.replace("<|Name|>", 'Utsav').replace("<|Date|>",str(date.today())));