/*
** Lua binding: PX2Editor
** Generated automatically by tolua++-1.0.92 on 08/15/15 12:50:13.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_PX2Editor_open (lua_State* tolua_S);

#include "PX2ToLuaEditor.hpp"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"EffectableController");
 tolua_usertype(tolua_S,"NirMan");
 tolua_usertype(tolua_S,"wxMenuItem");
 tolua_usertype(tolua_S,"PX2wxAuiToolBar");
 tolua_usertype(tolua_S,"E_MainFrame");
 tolua_usertype(tolua_S,"wxFrame");
 tolua_usertype(tolua_S,"Singleton<NirMan>");
 tolua_usertype(tolua_S,"wxAuiManager");
 tolua_usertype(tolua_S,"wxMenu");
 tolua_usertype(tolua_S,"wxEvtHandler");
}

/* method: OnNewProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnNewProject00
static int tolua_PX2Editor_E_MainFrame_OnNewProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnNewProject'", NULL);
#endif
  {
   self->OnNewProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnNewProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnOpenProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnOpenProject00
static int tolua_PX2Editor_E_MainFrame_OnOpenProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnOpenProject'", NULL);
#endif
  {
   self->OnOpenProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnOpenProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveProject00
static int tolua_PX2Editor_E_MainFrame_OnSaveProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveProject'", NULL);
#endif
  {
   self->OnSaveProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSaveProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveProjectAs of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveProjectAs00
static int tolua_PX2Editor_E_MainFrame_OnSaveProjectAs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveProjectAs'", NULL);
#endif
  {
   self->OnSaveProjectAs();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSaveProjectAs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCloseProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCloseProject00
static int tolua_PX2Editor_E_MainFrame_OnCloseProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCloseProject'", NULL);
#endif
  {
   self->OnCloseProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnCloseProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnNewScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnNewScene00
static int tolua_PX2Editor_E_MainFrame_OnNewScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnNewScene'", NULL);
#endif
  {
   self->OnNewScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnNewScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnOpenScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnOpenScene00
static int tolua_PX2Editor_E_MainFrame_OnOpenScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnOpenScene'", NULL);
#endif
  {
   self->OnOpenScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnOpenScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveScene00
static int tolua_PX2Editor_E_MainFrame_OnSaveScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveScene'", NULL);
#endif
  {
   self->OnSaveScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSaveScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveSceneAs of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveSceneAs00
static int tolua_PX2Editor_E_MainFrame_OnSaveSceneAs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveSceneAs'", NULL);
#endif
  {
   self->OnSaveSceneAs();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSaveSceneAs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCloseScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCloseScene00
static int tolua_PX2Editor_E_MainFrame_OnCloseScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCloseScene'", NULL);
#endif
  {
   self->OnCloseScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnCloseScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnExit of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnExit00
static int tolua_PX2Editor_E_MainFrame_OnExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnExit'", NULL);
#endif
  {
   self->OnExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnImport of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnImport00
static int tolua_PX2Editor_E_MainFrame_OnImport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnImport'", NULL);
#endif
  {
   self->OnImport();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnImport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnImportSelectedRes of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnImportSelectedRes00
static int tolua_PX2Editor_E_MainFrame_OnImportSelectedRes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnImportSelectedRes'", NULL);
#endif
  {
   self->OnImportSelectedRes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnImportSelectedRes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnExport of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnExport00
static int tolua_PX2Editor_E_MainFrame_OnExport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnExport'", NULL);
#endif
  {
   self->OnExport();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnExport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnShowWindow of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnShowWindow00
static int tolua_PX2Editor_E_MainFrame_OnShowWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnShowWindow'", NULL);
#endif
  {
   self->OnShowWindow(tag);
   tolua_pushcppstring(tolua_S,(const char*)tag);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnShowWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnStageCentre of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnStageCentre00
static int tolua_PX2Editor_E_MainFrame_OnStageCentre00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnStageCentre'", NULL);
#endif
  {
   self->OnStageCentre();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnStageCentre'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEditorSimulate of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnEditorSimulate00
static int tolua_PX2Editor_E_MainFrame_OnEditorSimulate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEditorSimulate'", NULL);
#endif
  {
   self->OnEditorSimulate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnEditorSimulate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEditorPlay of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnEditorPlay00
static int tolua_PX2Editor_E_MainFrame_OnEditorPlay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEditorPlay'", NULL);
#endif
  {
   self->OnEditorPlay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnEditorPlay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEditorStop of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnEditorStop00
static int tolua_PX2Editor_E_MainFrame_OnEditorStop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEditorStop'", NULL);
#endif
  {
   self->OnEditorStop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnEditorStop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnPlay of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnPlay00
static int tolua_PX2Editor_E_MainFrame_OnPlay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnPlay'", NULL);
#endif
  {
   self->OnPlay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnPlay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnPlayConfig of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnPlayConfig00
static int tolua_PX2Editor_E_MainFrame_OnPlayConfig00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnPlayConfig'", NULL);
#endif
  {
   self->OnPlayConfig();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnPlayConfig'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSetEditMode of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSetEditMode00
static int tolua_PX2Editor_E_MainFrame_OnSetEditMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSetEditMode'", NULL);
#endif
  {
   self->OnSetEditMode(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSetEditMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSetting of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSetting00
static int tolua_PX2Editor_E_MainFrame_OnSetting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSetting'", NULL);
#endif
  {
   self->OnSetting();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSetting'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCreateTerrain of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCreateTerrain00
static int tolua_PX2Editor_E_MainFrame_OnCreateTerrain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCreateTerrain'", NULL);
#endif
  {
   self->OnCreateTerrain();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnCreateTerrain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCreateTerrainPange of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange00
static int tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCreateTerrainPange'", NULL);
#endif
  {
   self->OnCreateTerrainPange();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnCreateTerrainPange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InspChangeWindow of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_InspChangeWindow00
static int tolua_PX2Editor_E_MainFrame_InspChangeWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int windowType = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InspChangeWindow'", NULL);
#endif
  {
   self->InspChangeWindow(windowType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InspChangeWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResRefresh of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResRefresh00
static int tolua_PX2Editor_E_MainFrame_OnResRefresh00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResRefresh'", NULL);
#endif
  {
   self->OnResRefresh();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnResRefresh'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResClear of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResClear00
static int tolua_PX2Editor_E_MainFrame_OnResClear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResClear'", NULL);
#endif
  {
   self->OnResClear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnResClear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResOpen of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResOpen00
static int tolua_PX2Editor_E_MainFrame_OnResOpen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResOpen'", NULL);
#endif
  {
   self->OnResOpen();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnResOpen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResCopyResPath of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResCopyResPath00
static int tolua_PX2Editor_E_MainFrame_OnResCopyResPath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResCopyResPath'", NULL);
#endif
  {
   self->OnResCopyResPath();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnResCopyResPath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_UIGroup_Delete of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete00
static int tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_UIGroup_Delete'", NULL);
#endif
  {
   self->TimeLine_UIGroup_Delete();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_UIGroup_Delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_UIGroup_DeleteAll of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll00
static int tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_UIGroup_DeleteAll'", NULL);
#endif
  {
   self->TimeLine_UIGroup_DeleteAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_UIGroup_DeleteAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SelectCtrl_InValue of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue00
static int tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SelectCtrl_InValue'", NULL);
#endif
  {
   self->TimeLine_SelectCtrl_InValue();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_SelectCtrl_InValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SelectCtrl_OutValue of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue00
static int tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SelectCtrl_OutValue'", NULL);
#endif
  {
   self->TimeLine_SelectCtrl_OutValue();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_SelectCtrl_OutValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SelectCtrl_Delete of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete00
static int tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SelectCtrl_Delete'", NULL);
#endif
  {
   self->TimeLine_SelectCtrl_Delete();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_SelectCtrl_Delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnProjectTreeShowLevel of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel00
static int tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int level = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnProjectTreeShowLevel'", NULL);
#endif
  {
   self->OnProjectTreeShowLevel(level);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnProjectTreeShowLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnProjectExpandSelect of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect00
static int tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnProjectExpandSelect'", NULL);
#endif
  {
   self->OnProjectExpandSelect();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnProjectExpandSelect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnProjectCollapseSelect of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect00
static int tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnProjectCollapseSelect'", NULL);
#endif
  {
   self->OnProjectCollapseSelect();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnProjectCollapseSelect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMainMenuItem of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddMainMenuItem00
static int tolua_PX2Editor_E_MainFrame_AddMainMenuItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMainMenuItem'", NULL);
#endif
  {
   wxMenu* tolua_ret = (wxMenu*)  self->AddMainMenuItem(title);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenu");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddMainMenuItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMenuItem of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddMenuItem00
static int tolua_PX2Editor_E_MainFrame_AddMenuItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMenuItem'", NULL);
#endif
  {
   wxMenuItem* tolua_ret = (wxMenuItem*)  self->AddMenuItem(menu,title,script);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenuItem");
   tolua_pushcppstring(tolua_S,(const char*)title);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddMenuItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMenuItem of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddMenuItem01
static int tolua_PX2Editor_E_MainFrame_AddMenuItem01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMenuItem'", NULL);
#endif
  {
   wxMenuItem* tolua_ret = (wxMenuItem*)  self->AddMenuItem(menu,title,script,tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenuItem");
   tolua_pushcppstring(tolua_S,(const char*)title);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)tag);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddMenuItem00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddSeparater of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddSeparater00
static int tolua_PX2Editor_E_MainFrame_AddSeparater00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddSeparater'", NULL);
#endif
  {
   self->AddSeparater(menu);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddSeparater'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableMenusTag of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_EnableMenusTag00
static int tolua_PX2Editor_E_MainFrame_EnableMenusTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  bool enable = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableMenusTag'", NULL);
#endif
  {
   self->EnableMenusTag(tag,enable);
   tolua_pushcppstring(tolua_S,(const char*)tag);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnableMenusTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAuiMananger of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_GetAuiMananger00
static int tolua_PX2Editor_E_MainFrame_GetAuiMananger00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAuiMananger'", NULL);
#endif
  {
   wxAuiManager* tolua_ret = (wxAuiManager*)  self->GetAuiMananger();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxAuiManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAuiMananger'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddTool00
static int tolua_PX2Editor_E_MainFrame_AddTool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(toolBar,icon,script);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddTool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddTool01
static int tolua_PX2Editor_E_MainFrame_AddTool01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string helpStr = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  int type = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(toolBar,icon,script,helpStr,type);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)helpStr);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddTool00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose00
static int tolua_PX2Editor_E_MainFrame_AddToolChoose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolChoose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose01
static int tolua_PX2Editor_E_MainFrame_AddToolChoose01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose02
static int tolua_PX2Editor_E_MainFrame_AddToolChoose02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1,choose2);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose03
static int tolua_PX2Editor_E_MainFrame_AddToolChoose03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1,choose2,choose3);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
  }
 }
 return 5;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose04
static int tolua_PX2Editor_E_MainFrame_AddToolChoose04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
  const std::string choose4 = ((const std::string)  tolua_tocppstring(tolua_S,8,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1,choose2,choose3,choose4);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
   tolua_pushcppstring(tolua_S,(const char*)choose4);
  }
 }
 return 6;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolSeparater of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolSeparater00
static int tolua_PX2Editor_E_MainFrame_AddToolSeparater00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolSeparater'", NULL);
#endif
  {
   self->AddToolSeparater(toolBar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolSeparater'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolStretch of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolStretch00
static int tolua_PX2Editor_E_MainFrame_AddToolStretch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolStretch'", NULL);
#endif
  {
   self->AddToolStretch(toolBar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolStretch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnNewProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnNewProject01
static int tolua_PX2Editor_E_MainFrame_OnNewProject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnNewProject'", NULL);
#endif
  {
   self->OnNewProject();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnNewProject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnOpenProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnOpenProject01
static int tolua_PX2Editor_E_MainFrame_OnOpenProject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnOpenProject'", NULL);
#endif
  {
   self->OnOpenProject();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnOpenProject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveProject01
static int tolua_PX2Editor_E_MainFrame_OnSaveProject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveProject'", NULL);
#endif
  {
   self->OnSaveProject();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnSaveProject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveProjectAs of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveProjectAs01
static int tolua_PX2Editor_E_MainFrame_OnSaveProjectAs01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveProjectAs'", NULL);
#endif
  {
   self->OnSaveProjectAs();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnSaveProjectAs00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCloseProject of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCloseProject01
static int tolua_PX2Editor_E_MainFrame_OnCloseProject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCloseProject'", NULL);
#endif
  {
   self->OnCloseProject();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnCloseProject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnNewScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnNewScene01
static int tolua_PX2Editor_E_MainFrame_OnNewScene01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnNewScene'", NULL);
#endif
  {
   self->OnNewScene();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnNewScene00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnOpenScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnOpenScene01
static int tolua_PX2Editor_E_MainFrame_OnOpenScene01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnOpenScene'", NULL);
#endif
  {
   self->OnOpenScene();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnOpenScene00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveScene01
static int tolua_PX2Editor_E_MainFrame_OnSaveScene01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveScene'", NULL);
#endif
  {
   self->OnSaveScene();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnSaveScene00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSaveSceneAs of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSaveSceneAs01
static int tolua_PX2Editor_E_MainFrame_OnSaveSceneAs01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSaveSceneAs'", NULL);
#endif
  {
   self->OnSaveSceneAs();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnSaveSceneAs00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCloseScene of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCloseScene01
static int tolua_PX2Editor_E_MainFrame_OnCloseScene01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCloseScene'", NULL);
#endif
  {
   self->OnCloseScene();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnCloseScene00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnExit of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnExit01
static int tolua_PX2Editor_E_MainFrame_OnExit01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnExit'", NULL);
#endif
  {
   self->OnExit();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnExit00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnImport of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnImport01
static int tolua_PX2Editor_E_MainFrame_OnImport01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnImport'", NULL);
#endif
  {
   self->OnImport();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnImport00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnImportSelectedRes of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnImportSelectedRes01
static int tolua_PX2Editor_E_MainFrame_OnImportSelectedRes01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnImportSelectedRes'", NULL);
#endif
  {
   self->OnImportSelectedRes();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnImportSelectedRes00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnExport of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnExport01
static int tolua_PX2Editor_E_MainFrame_OnExport01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnExport'", NULL);
#endif
  {
   self->OnExport();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnExport00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnShowWindow of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnShowWindow01
static int tolua_PX2Editor_E_MainFrame_OnShowWindow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnShowWindow'", NULL);
#endif
  {
   self->OnShowWindow(tag);
   tolua_pushcppstring(tolua_S,(const char*)tag);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnShowWindow00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnStageCentre of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnStageCentre01
static int tolua_PX2Editor_E_MainFrame_OnStageCentre01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnStageCentre'", NULL);
#endif
  {
   self->OnStageCentre();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnStageCentre00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEditorSimulate of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnEditorSimulate01
static int tolua_PX2Editor_E_MainFrame_OnEditorSimulate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEditorSimulate'", NULL);
#endif
  {
   self->OnEditorSimulate();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnEditorSimulate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEditorPlay of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnEditorPlay01
static int tolua_PX2Editor_E_MainFrame_OnEditorPlay01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEditorPlay'", NULL);
#endif
  {
   self->OnEditorPlay();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnEditorPlay00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEditorStop of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnEditorStop01
static int tolua_PX2Editor_E_MainFrame_OnEditorStop01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEditorStop'", NULL);
#endif
  {
   self->OnEditorStop();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnEditorStop00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnPlay of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnPlay01
static int tolua_PX2Editor_E_MainFrame_OnPlay01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnPlay'", NULL);
#endif
  {
   self->OnPlay();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnPlay00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnPlayConfig of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnPlayConfig01
static int tolua_PX2Editor_E_MainFrame_OnPlayConfig01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnPlayConfig'", NULL);
#endif
  {
   self->OnPlayConfig();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnPlayConfig00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSetEditMode of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSetEditMode01
static int tolua_PX2Editor_E_MainFrame_OnSetEditMode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSetEditMode'", NULL);
#endif
  {
   self->OnSetEditMode(type);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnSetEditMode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSetting of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnSetting01
static int tolua_PX2Editor_E_MainFrame_OnSetting01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSetting'", NULL);
#endif
  {
   self->OnSetting();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnSetting00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCreateTerrain of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCreateTerrain01
static int tolua_PX2Editor_E_MainFrame_OnCreateTerrain01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCreateTerrain'", NULL);
#endif
  {
   self->OnCreateTerrain();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnCreateTerrain00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnCreateTerrainPange of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange01
static int tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnCreateTerrainPange'", NULL);
#endif
  {
   self->OnCreateTerrainPange();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: InspChangeWindow of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_InspChangeWindow01
static int tolua_PX2Editor_E_MainFrame_InspChangeWindow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int windowType = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InspChangeWindow'", NULL);
#endif
  {
   self->InspChangeWindow(windowType);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_InspChangeWindow00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResRefresh of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResRefresh01
static int tolua_PX2Editor_E_MainFrame_OnResRefresh01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResRefresh'", NULL);
#endif
  {
   self->OnResRefresh();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnResRefresh00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResClear of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResClear01
static int tolua_PX2Editor_E_MainFrame_OnResClear01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResClear'", NULL);
#endif
  {
   self->OnResClear();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnResClear00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResOpen of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResOpen01
static int tolua_PX2Editor_E_MainFrame_OnResOpen01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResOpen'", NULL);
#endif
  {
   self->OnResOpen();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnResOpen00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnResCopyResPath of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnResCopyResPath01
static int tolua_PX2Editor_E_MainFrame_OnResCopyResPath01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnResCopyResPath'", NULL);
#endif
  {
   self->OnResCopyResPath();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnResCopyResPath00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_UIGroup_Delete of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete01
static int tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_UIGroup_Delete'", NULL);
#endif
  {
   self->TimeLine_UIGroup_Delete();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_UIGroup_DeleteAll of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll01
static int tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_UIGroup_DeleteAll'", NULL);
#endif
  {
   self->TimeLine_UIGroup_DeleteAll();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SelectCtrl_InValue of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue01
static int tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SelectCtrl_InValue'", NULL);
#endif
  {
   self->TimeLine_SelectCtrl_InValue();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SelectCtrl_OutValue of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue01
static int tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SelectCtrl_OutValue'", NULL);
#endif
  {
   self->TimeLine_SelectCtrl_OutValue();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SelectCtrl_Delete of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete01
static int tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SelectCtrl_Delete'", NULL);
#endif
  {
   self->TimeLine_SelectCtrl_Delete();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnProjectTreeShowLevel of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel01
static int tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int level = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnProjectTreeShowLevel'", NULL);
#endif
  {
   self->OnProjectTreeShowLevel(level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnProjectExpandSelect of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect01
static int tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnProjectExpandSelect'", NULL);
#endif
  {
   self->OnProjectExpandSelect();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnProjectCollapseSelect of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect01
static int tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnProjectCollapseSelect'", NULL);
#endif
  {
   self->OnProjectCollapseSelect();
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMainMenuItem of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddMainMenuItem01
static int tolua_PX2Editor_E_MainFrame_AddMainMenuItem01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMainMenuItem'", NULL);
#endif
  {
   wxMenu* tolua_ret = (wxMenu*)  self->AddMainMenuItem(title);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenu");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddMainMenuItem00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMenuItem of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddMenuItem02
static int tolua_PX2Editor_E_MainFrame_AddMenuItem02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMenuItem'", NULL);
#endif
  {
   wxMenuItem* tolua_ret = (wxMenuItem*)  self->AddMenuItem(menu,title,script);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenuItem");
   tolua_pushcppstring(tolua_S,(const char*)title);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddMenuItem01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMenuItem of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddMenuItem03
static int tolua_PX2Editor_E_MainFrame_AddMenuItem03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMenuItem'", NULL);
#endif
  {
   wxMenuItem* tolua_ret = (wxMenuItem*)  self->AddMenuItem(menu,title,script,tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenuItem");
   tolua_pushcppstring(tolua_S,(const char*)title);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)tag);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddMenuItem02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddSeparater of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddSeparater01
static int tolua_PX2Editor_E_MainFrame_AddSeparater01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddSeparater'", NULL);
#endif
  {
   self->AddSeparater(menu);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddSeparater00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableMenusTag of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_EnableMenusTag01
static int tolua_PX2Editor_E_MainFrame_EnableMenusTag01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  bool enable = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableMenusTag'", NULL);
#endif
  {
   self->EnableMenusTag(tag,enable);
   tolua_pushcppstring(tolua_S,(const char*)tag);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_EnableMenusTag00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAuiMananger of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_GetAuiMananger01
static int tolua_PX2Editor_E_MainFrame_GetAuiMananger01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAuiMananger'", NULL);
#endif
  {
   wxAuiManager* tolua_ret = (wxAuiManager*)  self->GetAuiMananger();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxAuiManager");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_GetAuiMananger00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddTool02
static int tolua_PX2Editor_E_MainFrame_AddTool02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(toolBar,icon,script);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddTool01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddTool03
static int tolua_PX2Editor_E_MainFrame_AddTool03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string helpStr = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  int type = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(toolBar,icon,script,helpStr,type);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)helpStr);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddTool02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose05
static int tolua_PX2Editor_E_MainFrame_AddToolChoose05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose06
static int tolua_PX2Editor_E_MainFrame_AddToolChoose06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose07
static int tolua_PX2Editor_E_MainFrame_AddToolChoose07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1,choose2);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose08
static int tolua_PX2Editor_E_MainFrame_AddToolChoose08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1,choose2,choose3);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
  }
 }
 return 5;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolChoose09
static int tolua_PX2Editor_E_MainFrame_AddToolChoose09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
  const std::string choose4 = ((const std::string)  tolua_tocppstring(tolua_S,8,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(toolBar,script,choose0,choose1,choose2,choose3,choose4);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
   tolua_pushcppstring(tolua_S,(const char*)choose4);
  }
 }
 return 6;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolChoose08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolSeparater of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolSeparater01
static int tolua_PX2Editor_E_MainFrame_AddToolSeparater01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolSeparater'", NULL);
#endif
  {
   self->AddToolSeparater(toolBar);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolSeparater00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolStretch of class  E_MainFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_E_MainFrame_AddToolStretch01
static int tolua_PX2Editor_E_MainFrame_AddToolStretch01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"E_MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  E_MainFrame* self = (E_MainFrame*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolStretch'", NULL);
#endif
  {
   self->AddToolStretch(toolBar);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2Editor_E_MainFrame_AddToolStretch00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCurMenu of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_SetCurMenu00
static int tolua_PX2Editor_NirMan_SetCurMenu00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCurMenu'", NULL);
#endif
  {
   self->SetCurMenu(menu);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCurMenu'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurMenu of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_GetCurMenu00
static int tolua_PX2Editor_NirMan_GetCurMenu00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurMenu'", NULL);
#endif
  {
   wxMenu* tolua_ret = (wxMenu*)  self->GetCurMenu();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenu");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurMenu'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddSubMenu of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddSubMenu00
static int tolua_PX2Editor_NirMan_AddSubMenu00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddSubMenu'", NULL);
#endif
  {
   wxMenu* tolua_ret = (wxMenu*)  self->AddSubMenu(menu,title);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenu");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddSubMenu'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMenuItem of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddMenuItem00
static int tolua_PX2Editor_NirMan_AddMenuItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMenuItem'", NULL);
#endif
  {
   wxMenuItem* tolua_ret = (wxMenuItem*)  self->AddMenuItem(menu,title,script);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wxMenuItem");
   tolua_pushcppstring(tolua_S,(const char*)title);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddMenuItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddSeparater of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddSeparater00
static int tolua_PX2Editor_NirMan_AddSeparater00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddSeparater'", NULL);
#endif
  {
   self->AddSeparater(menu);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddSeparater'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RefreshEffectableControllerModules of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_RefreshEffectableControllerModules00
static int tolua_PX2Editor_NirMan_RefreshEffectableControllerModules00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxMenu",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"EffectableController",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  wxMenu* menu = ((wxMenu*)  tolua_tousertype(tolua_S,2,0));
  EffectableController* eftCtrl = ((EffectableController*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RefreshEffectableControllerModules'", NULL);
#endif
  {
   self->RefreshEffectableControllerModules(menu,eftCtrl);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RefreshEffectableControllerModules'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateEffectableControllerModule of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_CreateEffectableControllerModule00
static int tolua_PX2Editor_NirMan_CreateEffectableControllerModule00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string typeStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateEffectableControllerModule'", NULL);
#endif
  {
   self->CreateEffectableControllerModule(typeStr);
   tolua_pushcppstring(tolua_S,(const char*)typeStr);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateEffectableControllerModule'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCurToolBar of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_SetCurToolBar00
static int tolua_PX2Editor_NirMan_SetCurToolBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2wxAuiToolBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  PX2wxAuiToolBar* toolBar = ((PX2wxAuiToolBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCurToolBar'", NULL);
#endif
  {
   self->SetCurToolBar(toolBar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCurToolBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurToolBar of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_GetCurToolBar00
static int tolua_PX2Editor_NirMan_GetCurToolBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurToolBar'", NULL);
#endif
  {
   PX2wxAuiToolBar* tolua_ret = (PX2wxAuiToolBar*)  self->GetCurToolBar();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PX2wxAuiToolBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurToolBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddTool00
static int tolua_PX2Editor_NirMan_AddTool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string script = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(icon,script);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddTool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddTool01
static int tolua_PX2Editor_NirMan_AddTool01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string script = ((std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string helpStr = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  int type = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(icon,script,helpStr,type);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)helpStr);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_NirMan_AddTool00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolChoose00
static int tolua_PX2Editor_NirMan_AddToolChoose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(script,choose0);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolChoose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolChoose01
static int tolua_PX2Editor_NirMan_AddToolChoose01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(script,choose0,choose1);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_NirMan_AddToolChoose00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolChoose02
static int tolua_PX2Editor_NirMan_AddToolChoose02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(script,choose0,choose1,choose2);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_NirMan_AddToolChoose01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolChoose03
static int tolua_PX2Editor_NirMan_AddToolChoose03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(script,choose0,choose1,choose2,choose3);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
  }
 }
 return 5;
tolua_lerror:
 return tolua_PX2Editor_NirMan_AddToolChoose02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolChoose04
static int tolua_PX2Editor_NirMan_AddToolChoose04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose4 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(script,choose0,choose1,choose2,choose3,choose4);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
   tolua_pushcppstring(tolua_S,(const char*)choose4);
  }
 }
 return 6;
tolua_lerror:
 return tolua_PX2Editor_NirMan_AddToolChoose03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolSeparater of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolSeparater00
static int tolua_PX2Editor_NirMan_AddToolSeparater00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolSeparater'", NULL);
#endif
  {
   self->AddToolSeparater();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolSeparater'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolStretch of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_AddToolStretch00
static int tolua_PX2Editor_NirMan_AddToolStretch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolStretch'", NULL);
#endif
  {
   self->AddToolStretch();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolStretch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetProjTreeLevel of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_SetProjTreeLevel00
static int tolua_PX2Editor_NirMan_SetProjTreeLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  int level = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetProjTreeLevel'", NULL);
#endif
  {
   self->SetProjTreeLevel(level);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetProjTreeLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TaggleProjectShowHelpNode of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_TaggleProjectShowHelpNode00
static int tolua_PX2Editor_NirMan_TaggleProjectShowHelpNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TaggleProjectShowHelpNode'", NULL);
#endif
  {
   self->TaggleProjectShowHelpNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TaggleProjectShowHelpNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MessageBox of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_NirMan_MessageBox00
static int tolua_PX2Editor_NirMan_MessageBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NirMan",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
  const std::string caption = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string content = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  int type = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MessageBox'", NULL);
#endif
  {
   int tolua_ret = (int)  self->MessageBox(caption,content,type);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)caption);
   tolua_pushcppstring(tolua_S,(const char*)content);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MessageBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __Singleton<NirMan>__ of class  NirMan */
#ifndef TOLUA_DISABLE_tolua_get_NirMan___Singleton_NirMan___
static int tolua_get_NirMan___Singleton_NirMan___(lua_State* tolua_S)
{
  NirMan* self = (NirMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__Singleton<NirMan>__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<Singleton<NirMan>*>(self), "Singleton<NirMan>");
#else
   tolua_pushusertype(tolua_S,(void*)((Singleton<NirMan>*)self), "Singleton<NirMan>");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_PX2Editor_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"E_MainFrame","E_MainFrame","wxFrame",NULL);
  tolua_beginmodule(tolua_S,"E_MainFrame");
   tolua_function(tolua_S,"OnNewProject",tolua_PX2Editor_E_MainFrame_OnNewProject00);
   tolua_function(tolua_S,"OnOpenProject",tolua_PX2Editor_E_MainFrame_OnOpenProject00);
   tolua_function(tolua_S,"OnSaveProject",tolua_PX2Editor_E_MainFrame_OnSaveProject00);
   tolua_function(tolua_S,"OnSaveProjectAs",tolua_PX2Editor_E_MainFrame_OnSaveProjectAs00);
   tolua_function(tolua_S,"OnCloseProject",tolua_PX2Editor_E_MainFrame_OnCloseProject00);
   tolua_function(tolua_S,"OnNewScene",tolua_PX2Editor_E_MainFrame_OnNewScene00);
   tolua_function(tolua_S,"OnOpenScene",tolua_PX2Editor_E_MainFrame_OnOpenScene00);
   tolua_function(tolua_S,"OnSaveScene",tolua_PX2Editor_E_MainFrame_OnSaveScene00);
   tolua_function(tolua_S,"OnSaveSceneAs",tolua_PX2Editor_E_MainFrame_OnSaveSceneAs00);
   tolua_function(tolua_S,"OnCloseScene",tolua_PX2Editor_E_MainFrame_OnCloseScene00);
   tolua_function(tolua_S,"OnExit",tolua_PX2Editor_E_MainFrame_OnExit00);
   tolua_function(tolua_S,"OnImport",tolua_PX2Editor_E_MainFrame_OnImport00);
   tolua_function(tolua_S,"OnImportSelectedRes",tolua_PX2Editor_E_MainFrame_OnImportSelectedRes00);
   tolua_function(tolua_S,"OnExport",tolua_PX2Editor_E_MainFrame_OnExport00);
   tolua_function(tolua_S,"OnShowWindow",tolua_PX2Editor_E_MainFrame_OnShowWindow00);
   tolua_function(tolua_S,"OnStageCentre",tolua_PX2Editor_E_MainFrame_OnStageCentre00);
   tolua_function(tolua_S,"OnEditorSimulate",tolua_PX2Editor_E_MainFrame_OnEditorSimulate00);
   tolua_function(tolua_S,"OnEditorPlay",tolua_PX2Editor_E_MainFrame_OnEditorPlay00);
   tolua_function(tolua_S,"OnEditorStop",tolua_PX2Editor_E_MainFrame_OnEditorStop00);
   tolua_function(tolua_S,"OnPlay",tolua_PX2Editor_E_MainFrame_OnPlay00);
   tolua_function(tolua_S,"OnPlayConfig",tolua_PX2Editor_E_MainFrame_OnPlayConfig00);
   tolua_function(tolua_S,"OnSetEditMode",tolua_PX2Editor_E_MainFrame_OnSetEditMode00);
   tolua_function(tolua_S,"OnSetting",tolua_PX2Editor_E_MainFrame_OnSetting00);
   tolua_function(tolua_S,"OnCreateTerrain",tolua_PX2Editor_E_MainFrame_OnCreateTerrain00);
   tolua_function(tolua_S,"OnCreateTerrainPange",tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange00);
   tolua_function(tolua_S,"InspChangeWindow",tolua_PX2Editor_E_MainFrame_InspChangeWindow00);
   tolua_function(tolua_S,"OnResRefresh",tolua_PX2Editor_E_MainFrame_OnResRefresh00);
   tolua_function(tolua_S,"OnResClear",tolua_PX2Editor_E_MainFrame_OnResClear00);
   tolua_function(tolua_S,"OnResOpen",tolua_PX2Editor_E_MainFrame_OnResOpen00);
   tolua_function(tolua_S,"OnResCopyResPath",tolua_PX2Editor_E_MainFrame_OnResCopyResPath00);
   tolua_function(tolua_S,"TimeLine_UIGroup_Delete",tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete00);
   tolua_function(tolua_S,"TimeLine_UIGroup_DeleteAll",tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll00);
   tolua_function(tolua_S,"TimeLine_SelectCtrl_InValue",tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue00);
   tolua_function(tolua_S,"TimeLine_SelectCtrl_OutValue",tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue00);
   tolua_function(tolua_S,"TimeLine_SelectCtrl_Delete",tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete00);
   tolua_function(tolua_S,"OnProjectTreeShowLevel",tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel00);
   tolua_function(tolua_S,"OnProjectExpandSelect",tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect00);
   tolua_function(tolua_S,"OnProjectCollapseSelect",tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect00);
   tolua_function(tolua_S,"AddMainMenuItem",tolua_PX2Editor_E_MainFrame_AddMainMenuItem00);
   tolua_function(tolua_S,"AddMenuItem",tolua_PX2Editor_E_MainFrame_AddMenuItem00);
   tolua_function(tolua_S,"AddMenuItem",tolua_PX2Editor_E_MainFrame_AddMenuItem01);
   tolua_function(tolua_S,"AddSeparater",tolua_PX2Editor_E_MainFrame_AddSeparater00);
   tolua_function(tolua_S,"EnableMenusTag",tolua_PX2Editor_E_MainFrame_EnableMenusTag00);
   tolua_function(tolua_S,"GetAuiMananger",tolua_PX2Editor_E_MainFrame_GetAuiMananger00);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_E_MainFrame_AddTool00);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_E_MainFrame_AddTool01);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose00);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose01);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose02);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose03);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose04);
   tolua_function(tolua_S,"AddToolSeparater",tolua_PX2Editor_E_MainFrame_AddToolSeparater00);
   tolua_function(tolua_S,"AddToolStretch",tolua_PX2Editor_E_MainFrame_AddToolStretch00);
   tolua_function(tolua_S,"OnNewProject",tolua_PX2Editor_E_MainFrame_OnNewProject01);
   tolua_function(tolua_S,"OnOpenProject",tolua_PX2Editor_E_MainFrame_OnOpenProject01);
   tolua_function(tolua_S,"OnSaveProject",tolua_PX2Editor_E_MainFrame_OnSaveProject01);
   tolua_function(tolua_S,"OnSaveProjectAs",tolua_PX2Editor_E_MainFrame_OnSaveProjectAs01);
   tolua_function(tolua_S,"OnCloseProject",tolua_PX2Editor_E_MainFrame_OnCloseProject01);
   tolua_function(tolua_S,"OnNewScene",tolua_PX2Editor_E_MainFrame_OnNewScene01);
   tolua_function(tolua_S,"OnOpenScene",tolua_PX2Editor_E_MainFrame_OnOpenScene01);
   tolua_function(tolua_S,"OnSaveScene",tolua_PX2Editor_E_MainFrame_OnSaveScene01);
   tolua_function(tolua_S,"OnSaveSceneAs",tolua_PX2Editor_E_MainFrame_OnSaveSceneAs01);
   tolua_function(tolua_S,"OnCloseScene",tolua_PX2Editor_E_MainFrame_OnCloseScene01);
   tolua_function(tolua_S,"OnExit",tolua_PX2Editor_E_MainFrame_OnExit01);
   tolua_function(tolua_S,"OnImport",tolua_PX2Editor_E_MainFrame_OnImport01);
   tolua_function(tolua_S,"OnImportSelectedRes",tolua_PX2Editor_E_MainFrame_OnImportSelectedRes01);
   tolua_function(tolua_S,"OnExport",tolua_PX2Editor_E_MainFrame_OnExport01);
   tolua_function(tolua_S,"OnShowWindow",tolua_PX2Editor_E_MainFrame_OnShowWindow01);
   tolua_function(tolua_S,"OnStageCentre",tolua_PX2Editor_E_MainFrame_OnStageCentre01);
   tolua_function(tolua_S,"OnEditorSimulate",tolua_PX2Editor_E_MainFrame_OnEditorSimulate01);
   tolua_function(tolua_S,"OnEditorPlay",tolua_PX2Editor_E_MainFrame_OnEditorPlay01);
   tolua_function(tolua_S,"OnEditorStop",tolua_PX2Editor_E_MainFrame_OnEditorStop01);
   tolua_function(tolua_S,"OnPlay",tolua_PX2Editor_E_MainFrame_OnPlay01);
   tolua_function(tolua_S,"OnPlayConfig",tolua_PX2Editor_E_MainFrame_OnPlayConfig01);
   tolua_function(tolua_S,"OnSetEditMode",tolua_PX2Editor_E_MainFrame_OnSetEditMode01);
   tolua_function(tolua_S,"OnSetting",tolua_PX2Editor_E_MainFrame_OnSetting01);
   tolua_function(tolua_S,"OnCreateTerrain",tolua_PX2Editor_E_MainFrame_OnCreateTerrain01);
   tolua_function(tolua_S,"OnCreateTerrainPange",tolua_PX2Editor_E_MainFrame_OnCreateTerrainPange01);
   tolua_function(tolua_S,"InspChangeWindow",tolua_PX2Editor_E_MainFrame_InspChangeWindow01);
   tolua_function(tolua_S,"OnResRefresh",tolua_PX2Editor_E_MainFrame_OnResRefresh01);
   tolua_function(tolua_S,"OnResClear",tolua_PX2Editor_E_MainFrame_OnResClear01);
   tolua_function(tolua_S,"OnResOpen",tolua_PX2Editor_E_MainFrame_OnResOpen01);
   tolua_function(tolua_S,"OnResCopyResPath",tolua_PX2Editor_E_MainFrame_OnResCopyResPath01);
   tolua_function(tolua_S,"TimeLine_UIGroup_Delete",tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_Delete01);
   tolua_function(tolua_S,"TimeLine_UIGroup_DeleteAll",tolua_PX2Editor_E_MainFrame_TimeLine_UIGroup_DeleteAll01);
   tolua_function(tolua_S,"TimeLine_SelectCtrl_InValue",tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_InValue01);
   tolua_function(tolua_S,"TimeLine_SelectCtrl_OutValue",tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_OutValue01);
   tolua_function(tolua_S,"TimeLine_SelectCtrl_Delete",tolua_PX2Editor_E_MainFrame_TimeLine_SelectCtrl_Delete01);
   tolua_function(tolua_S,"OnProjectTreeShowLevel",tolua_PX2Editor_E_MainFrame_OnProjectTreeShowLevel01);
   tolua_function(tolua_S,"OnProjectExpandSelect",tolua_PX2Editor_E_MainFrame_OnProjectExpandSelect01);
   tolua_function(tolua_S,"OnProjectCollapseSelect",tolua_PX2Editor_E_MainFrame_OnProjectCollapseSelect01);
   tolua_function(tolua_S,"AddMainMenuItem",tolua_PX2Editor_E_MainFrame_AddMainMenuItem01);
   tolua_function(tolua_S,"AddMenuItem",tolua_PX2Editor_E_MainFrame_AddMenuItem02);
   tolua_function(tolua_S,"AddMenuItem",tolua_PX2Editor_E_MainFrame_AddMenuItem03);
   tolua_function(tolua_S,"AddSeparater",tolua_PX2Editor_E_MainFrame_AddSeparater01);
   tolua_function(tolua_S,"EnableMenusTag",tolua_PX2Editor_E_MainFrame_EnableMenusTag01);
   tolua_function(tolua_S,"GetAuiMananger",tolua_PX2Editor_E_MainFrame_GetAuiMananger01);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_E_MainFrame_AddTool02);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_E_MainFrame_AddTool03);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose05);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose06);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose07);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose08);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_E_MainFrame_AddToolChoose09);
   tolua_function(tolua_S,"AddToolSeparater",tolua_PX2Editor_E_MainFrame_AddToolSeparater01);
   tolua_function(tolua_S,"AddToolStretch",tolua_PX2Editor_E_MainFrame_AddToolStretch01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"NirMan","NirMan","wxEvtHandler",NULL);
  tolua_beginmodule(tolua_S,"NirMan");
   tolua_function(tolua_S,"SetCurMenu",tolua_PX2Editor_NirMan_SetCurMenu00);
   tolua_function(tolua_S,"GetCurMenu",tolua_PX2Editor_NirMan_GetCurMenu00);
   tolua_function(tolua_S,"AddSubMenu",tolua_PX2Editor_NirMan_AddSubMenu00);
   tolua_function(tolua_S,"AddMenuItem",tolua_PX2Editor_NirMan_AddMenuItem00);
   tolua_function(tolua_S,"AddSeparater",tolua_PX2Editor_NirMan_AddSeparater00);
   tolua_function(tolua_S,"RefreshEffectableControllerModules",tolua_PX2Editor_NirMan_RefreshEffectableControllerModules00);
   tolua_function(tolua_S,"CreateEffectableControllerModule",tolua_PX2Editor_NirMan_CreateEffectableControllerModule00);
   tolua_function(tolua_S,"SetCurToolBar",tolua_PX2Editor_NirMan_SetCurToolBar00);
   tolua_function(tolua_S,"GetCurToolBar",tolua_PX2Editor_NirMan_GetCurToolBar00);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_NirMan_AddTool00);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_NirMan_AddTool01);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_NirMan_AddToolChoose00);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_NirMan_AddToolChoose01);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_NirMan_AddToolChoose02);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_NirMan_AddToolChoose03);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_NirMan_AddToolChoose04);
   tolua_function(tolua_S,"AddToolSeparater",tolua_PX2Editor_NirMan_AddToolSeparater00);
   tolua_function(tolua_S,"AddToolStretch",tolua_PX2Editor_NirMan_AddToolStretch00);
   tolua_function(tolua_S,"SetProjTreeLevel",tolua_PX2Editor_NirMan_SetProjTreeLevel00);
   tolua_function(tolua_S,"TaggleProjectShowHelpNode",tolua_PX2Editor_NirMan_TaggleProjectShowHelpNode00);
   tolua_function(tolua_S,"MessageBox",tolua_PX2Editor_NirMan_MessageBox00);
   tolua_variable(tolua_S,"__Singleton_NirMan___",tolua_get_NirMan___Singleton_NirMan___,NULL);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_PX2Editor (lua_State* tolua_S) {
 return tolua_PX2Editor_open(tolua_S);
};
#endif

