-- menu.lua

function naAddLanguage()
	-- menus
	PX2_LM:AddItem1("File", "�ļ�")
	PX2_LM:AddItem1("NewProject", "�½�����")
	PX2_LM:AddItem1("NewScene", "�½�����")
	PX2_LM:AddItem1("Open", "��")
	PX2_LM:AddItem1("Save", "����")
	PX2_LM:AddItem1("SaveAs", "���Ϊ")
	PX2_LM:AddItem1("Close", "�ر�")
	PX2_LM:AddItem1("Exit", "�˳�")
	PX2_LM:AddItem1("Edit", "�༭")
	PX2_LM:AddItem1("View", "��ͼ")
	
	PX2_LM:AddItem1("Edit", "�༭")
	PX2_LM:AddItem1("OnDo", "����")
	PX2_LM:AddItem1("ReDo", "�ظ�")
	PX2_LM:AddItem1("Copy", "����")
	PX2_LM:AddItem1("Paste", "ճ��")
	PX2_LM:AddItem1("Delete", "ɾ��")
	PX2_LM:AddItem1("DeleteAll", "ɾ������")
	PX2_LM:AddItem1("Import", "����")
	PX2_LM:AddItem1("Export", "����")
	PX2_LM:AddItem1("Select", "ѡ��")
	PX2_LM:AddItem1("Translate", "λ��")
	PX2_LM:AddItem1("Rotate", "��ת")
	PX2_LM:AddItem1("Scale", "����")
	PX2_LM:AddItem1("PlayAndStop", "����/ֹͣ")
	PX2_LM:AddItem1("ResetPlay", "���ò���")
	
	PX2_LM:AddItem1("Local", "����")
	PX2_LM:AddItem1("World", "����")
	PX2_LM:AddItem1("Parent", "������")
	
	PX2_LM:AddItem1("Window", "����")
	PX2_LM:AddItem1("Project", "����")
	PX2_LM:AddItem1("Stage", "��̨")
	PX2_LM:AddItem1("ResView", "��Դ")
	PX2_LM:AddItem1("Inspector", "����")
	PX2_LM:AddItem1("Console", "����̨")
	PX2_LM:AddItem1("PreView", "Ԥ��")
	
	PX2_LM:AddItem1("Debug", "����")
	
	PX2_LM:AddItem1("Tool", "����")
	
	PX2_LM:AddItem1("Help", "����")	
	PX2_LM:AddItem1("About", "����")
	
	-- tips
	PX2_LM:AddItem("Notice", "ע�⣡", "Notice!")
	PX2_LM:AddItem("Tip0", "�˳���", "Do you want to exist?")
	PX2_LM:AddItem("TipCreateProject", "�����Ѿ����ڣ��޷�������", "Project is already exist, can't be created!")
end