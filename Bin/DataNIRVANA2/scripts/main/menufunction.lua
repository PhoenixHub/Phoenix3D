-- menufunction.lua

-- file
function n_NewProject()
	PX2EU_MAN:NewProject()
end

function n_OpenProject()
	PX2EU_MAN:OpenProject()
end

function n_SaveProject()
	PX2EU_MAN:SaveProject()
end

function n_CloseProject()
	PX2EU_MAN:CloseProject()
end

function n_NewScene()
	PX2EU_MAN:NewScene()
end

function n_OpenScene()
	PX2EU_MAN:OpenScene()
end

function n_SaveScene()
	PX2EU_MAN:SaveScene()
end

function n_SaveSceneAs()
	PX2EU_MAN:SaveSceneAs()
end

function n_CloseScene()
	PX2EU_MAN:CloseScene()
end

function n_Exit()
	PX2EU_MAN:Exit()
end

function n_UnDo()
	PX2_URDOMAN:UnDo()
end

function n_ReDo()
	PX2_URDOMAN:ReDo()
end

function n_Copy()
	local selectObj = PX2_SELECTION:GetFirstObject()
	PX2_EDIT:SetCopyObject(selectObj)
end

function n_Paste()
	PX2_EDIT:PasteCopyedObject()
end

function n_Clone()
	PX2_EDIT:CloneSelectedObject()
end