set obj= Wscript.Arguments 'Это получение аргументов коммандной строки
set speech = CreateObject("sapi.spvoice") 'Это инициализация говоруна
speech.Speak obj(0)
