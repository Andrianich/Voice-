set obj= Wscript.Arguments '��� ��������� ���������� ���������� ������
set speech = CreateObject("sapi.spvoice") '��� ������������� ��������
speech.Speak obj(0)
