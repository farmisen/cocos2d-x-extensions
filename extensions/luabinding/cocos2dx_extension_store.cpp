/*
** Lua binding: cocos2dx_extension_store
** Generated automatically by tolua++-1.0.92 on Sat Jul  7 11:58:51 2012.
*/

#include "cocos2dx_extension_store.h"



#include "CCStore.h"
using namespace extensions;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 
 
 tolua_usertype(tolua_S,"CCStore");
}

/* method: sharedStore of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_sharedStore00
static int tolua_cocos2dx_extension_store_CCStore_sharedStore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCStore* tolua_ret = (CCStore*)  CCStore::sharedStore();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCStore");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedStore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeSharedStore of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_purgeSharedStore00
static int tolua_cocos2dx_extension_store_CCStore_purgeSharedStore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCStore::purgeSharedStore();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeSharedStore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: postInitWithTransactionListenerLua of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_postInitWithTransactionListenerLua00
static int tolua_cocos2dx_extension_store_CCStore_postInitWithTransactionListenerLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION listener = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'postInitWithTransactionListenerLua'", NULL);
#endif
  {
   self->postInitWithTransactionListenerLua(listener);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'postInitWithTransactionListenerLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: canMakePurchases of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_canMakePurchases00
static int tolua_cocos2dx_extension_store_CCStore_canMakePurchases00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'canMakePurchases'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->canMakePurchases();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'canMakePurchases'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadProductsLua of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_loadProductsLua00
static int tolua_cocos2dx_extension_store_CCStore_loadProductsLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_istable(tolua_S,2,"LUA_TABLE",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  LUA_TABLE __LUA_TABLE__ = (  toluafix_totable(tolua_S,2,0));
  LUA_FUNCTION callback = (  toluafix_ref_function(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadProductsLua'", NULL);
#endif
  {
   self->loadProductsLua(__LUA_TABLE__,callback);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadProductsLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cancelLoadProducts of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_cancelLoadProducts00
static int tolua_cocos2dx_extension_store_CCStore_cancelLoadProducts00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cancelLoadProducts'", NULL);
#endif
  {
   self->cancelLoadProducts();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cancelLoadProducts'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isProductLoaded of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_isProductLoaded00
static int tolua_cocos2dx_extension_store_CCStore_isProductLoaded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  const char* productId = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isProductLoaded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isProductLoaded(productId);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isProductLoaded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purchase of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_purchase00
static int tolua_cocos2dx_extension_store_CCStore_purchase00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  const char* productId = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'purchase'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->purchase(productId);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purchase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: finishTransactionLua of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_finishTransactionLua00
static int tolua_cocos2dx_extension_store_CCStore_finishTransactionLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  const char* transactionIdentifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finishTransactionLua'", NULL);
#endif
  {
   self->finishTransactionLua(transactionIdentifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finishTransactionLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReceiptVerifyMode of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_getReceiptVerifyMode00
static int tolua_cocos2dx_extension_store_CCStore_getReceiptVerifyMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReceiptVerifyMode'", NULL);
#endif
  {
   CCStoreReceiptVerifyMode tolua_ret = (CCStoreReceiptVerifyMode)  self->getReceiptVerifyMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReceiptVerifyMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setReceiptVerifyMode of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_setReceiptVerifyMode00
static int tolua_cocos2dx_extension_store_CCStore_setReceiptVerifyMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  CCStoreReceiptVerifyMode mode = ((CCStoreReceiptVerifyMode) (int)  tolua_tonumber(tolua_S,2,0));
   bool isSandbox = ((  bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setReceiptVerifyMode'", NULL);
#endif
  {
   self->setReceiptVerifyMode(mode,isSandbox);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setReceiptVerifyMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReceiptVerifyServerUrl of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_getReceiptVerifyServerUrl00
static int tolua_cocos2dx_extension_store_CCStore_getReceiptVerifyServerUrl00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReceiptVerifyServerUrl'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getReceiptVerifyServerUrl();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReceiptVerifyServerUrl'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setReceiptVerifyServerUrl of class  CCStore */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extension_store_CCStore_setReceiptVerifyServerUrl00
static int tolua_cocos2dx_extension_store_CCStore_setReceiptVerifyServerUrl00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCStore",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCStore* self = (CCStore*)  tolua_tousertype(tolua_S,1,0);
  const char* url = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setReceiptVerifyServerUrl'", NULL);
#endif
  {
   self->setReceiptVerifyServerUrl(url);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setReceiptVerifyServerUrl'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_cocos2dx_extension_store_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyModeNone",CCStoreReceiptVerifyModeNone);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyModeDevice",CCStoreReceiptVerifyModeDevice);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyModeServer",CCStoreReceiptVerifyModeServer);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyStatusUnknownError",CCStoreReceiptVerifyStatusUnknownError);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyStatusInvalidReceipt",CCStoreReceiptVerifyStatusInvalidReceipt);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyStatusRequestFailed",CCStoreReceiptVerifyStatusRequestFailed);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyStatusInvalidResult",CCStoreReceiptVerifyStatusInvalidResult);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyStatusNone",CCStoreReceiptVerifyStatusNone);
  tolua_constant(tolua_S,"CCStoreReceiptVerifyStatusOK",CCStoreReceiptVerifyStatusOK);
  tolua_cclass(tolua_S,"CCStore","CCStore","",NULL);
  tolua_beginmodule(tolua_S,"CCStore");
   tolua_function(tolua_S,"sharedStore",tolua_cocos2dx_extension_store_CCStore_sharedStore00);
   tolua_function(tolua_S,"purgeSharedStore",tolua_cocos2dx_extension_store_CCStore_purgeSharedStore00);
   tolua_function(tolua_S,"postInitWithTransactionListenerLua",tolua_cocos2dx_extension_store_CCStore_postInitWithTransactionListenerLua00);
   tolua_function(tolua_S,"canMakePurchases",tolua_cocos2dx_extension_store_CCStore_canMakePurchases00);
   tolua_function(tolua_S,"loadProductsLua",tolua_cocos2dx_extension_store_CCStore_loadProductsLua00);
   tolua_function(tolua_S,"cancelLoadProducts",tolua_cocos2dx_extension_store_CCStore_cancelLoadProducts00);
   tolua_function(tolua_S,"isProductLoaded",tolua_cocos2dx_extension_store_CCStore_isProductLoaded00);
   tolua_function(tolua_S,"purchase",tolua_cocos2dx_extension_store_CCStore_purchase00);
   tolua_function(tolua_S,"finishTransactionLua",tolua_cocos2dx_extension_store_CCStore_finishTransactionLua00);
   tolua_function(tolua_S,"getReceiptVerifyMode",tolua_cocos2dx_extension_store_CCStore_getReceiptVerifyMode00);
   tolua_function(tolua_S,"setReceiptVerifyMode",tolua_cocos2dx_extension_store_CCStore_setReceiptVerifyMode00);
   tolua_function(tolua_S,"getReceiptVerifyServerUrl",tolua_cocos2dx_extension_store_CCStore_getReceiptVerifyServerUrl00);
   tolua_function(tolua_S,"setReceiptVerifyServerUrl",tolua_cocos2dx_extension_store_CCStore_setReceiptVerifyServerUrl00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cocos2dx_extension_store (lua_State* tolua_S) {
 return tolua_cocos2dx_extension_store_open(tolua_S);
};
#endif

