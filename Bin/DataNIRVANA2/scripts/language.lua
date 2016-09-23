-- menu.lua

function n_AddLanguage()
	-- MainFrame
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
	PX2_LM:AddItem1("UnDo", "����")
	PX2_LM:AddItem1("ReDo", "�ظ�")
	PX2_LM:AddItem1("Copy", "����")
	PX2_LM:AddItem1("Paste", "ճ��")
	PX2_LM:AddItem1("Clone", "��¡")
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
	
	-- General
	PX2_LM:AddItem1("Create", "����")
	
	-- BluePrint
	PX2_LM:AddItem1("BluePrint", "��ͼ")
	PX2_LM:AddItem1("Compile", "����")
	PX2_LM:AddItem1("Disconnect", "�Ͽ�")
	
	-- Scene
	PX2_LM:AddItem1("Scene", "����")
	
	-- UI
	PX2_LM:AddItem1("UI", "����")
	PX2_LM:AddItem1("UIFrame", "��")
	PX2_LM:AddItem1("UIFPicBox", "��ͼƬ")
	PX2_LM:AddItem1("UIFText", "���ı�")
	PX2_LM:AddItem1("UIButton", "��ť")
	PX2_LM:AddItem1("UICheckButton", "ѡ��ť")
	PX2_LM:AddItem1("UIComboBox", "��Ͽ�")
	PX2_LM:AddItem1("UIEditBox", "�༭��")
	PX2_LM:AddItem1("UIPicBox", "ͼƬ")
	PX2_LM:AddItem1("UIText", "�ı�")	
	
	PX2_LM:AddItem1("CreateScriptControllerFromRes", "����Դ�����ű�������")
	
	PX2_LM:AddItem1("CreateFromRes", "����Դ����")
	
	-- Event
	PX2_LM:AddItem1("Event", "�¼�")
	PX2_LM:AddItem1("SimuStart", "���濪ʼ")
	
	-- Edit
	PX2_LM:AddItem1("Geometry", "������")
	PX2_LM:AddItem1("Plane", "ƽ��")
	PX2_LM:AddItem1("Box", "������")
	PX2_LM:AddItem1("Sphere", "��")
	PX2_LM:AddItem1("Camera", "���")
	PX2_LM:AddItem1("Light", "�ƹ�")
	PX2_LM:AddItem1("Trigger", "������")
	PX2_LM:AddItem1("Terrain", "����")
	PX2_LM:AddItem1("Sky", "���")
	PX2_LM:AddItem1("ImportSelectedRes", "����ѡ����Դ")
	PX2_LM:AddItem1("Import", "����")
	PX2_LM:AddItem1("SceneActor", "������ɫ")
	PX2_LM:AddItem1("Effect", "��Ч")
	PX2_LM:AddItem1("Billboard", "�����")
	PX2_LM:AddItem1("Particle", "����")
	PX2_LM:AddItem1("Beam", "����")
	PX2_LM:AddItem1("Ribbon", "����")
	PX2_LM:AddItem1("Sound", "����")
	PX2_LM:AddItem1("Node", "�ڵ�")
	PX2_LM:AddItem1("SkyBox", "��պ�")
	PX2_LM:AddItem1("Controller", "������")
	PX2_LM:AddItem1("ColorController", "��ɫ������")
	PX2_LM:AddItem1("BrightnessController", "���ȿ�����")
	PX2_LM:AddItem1("AlphaController", "͸��������")
	PX2_LM:AddItem1("UniformScaleController", "ͳһ���ſ�����")
	PX2_LM:AddItem1("ScaleController", "���ſ�����")
	PX2_LM:AddItem1("RotateController", "��ת������")
	PX2_LM:AddItem1("TranslateController", "λ�ƿ�����")		
	PX2_LM:AddItem1("ScriptController", "�ű�������")
	
	PX2_LM:AddItem1("Copy", "����")
	PX2_LM:AddItem1("Paste", "ճ��")
	PX2_LM:AddItem1("Delete", "ɾ��")
	PX2_LM:AddItem1("DeleteAll", "ɾ��ȫ��")
	
	PX2_LM:AddItem1("ResetPlay", "���ò���")
	PX2_LM:AddItem1("Play", "����")
	PX2_LM:AddItem1("Pause", "��ͣ")
	PX2_LM:AddItem1("Reset", "����")
	
	PX2_LM:AddItem1("FindInProjectTree", "�ڹ������в���")
	PX2_LM:AddItem1("FindInResTree", "����Դ���в���")
	
	PX2_LM:AddItem1("MakeCurve", "���߻�")
	
	-- tips
	PX2_LM:AddItem("Notice", "ע�⣡", "Notice!")
	PX2_LM:AddItem("Tip0", "�˳���", "Do you want to exist?")
	PX2_LM:AddItem("TipCreateProject", "�����Ѿ����ڣ��޷�������", "Project is already exist, can't be created!")
	PX2_LM:AddItem("TipNotHasParent", "������ڸ��ڵ㣡", "There must has a parent node!")
end