
#import <Foundation/Foundation.h>
#include "CCAlertViewDelegate.h"
#include "CCScriptSupport.h"

using namespace cocos2d;
using namespace extensions;

@interface CCNative_objc : NSObject < UIAlertViewDelegate >
{
    UIActivityIndicatorView *activityIndicatorView_;
    
    UIAlertView *alertView_;
    CCAlertViewDelegate *alertViewDelegates_;
#if CC_LUA_ENGINE_ENABLED > 0
    LUA_FUNCTION alertViewLuaListener_;
#endif
}

+ (CCNative_objc *)sharedInstance;


#pragma mark -
#pragma mark activity indicator

- (void)showActivityIndicator:(UIActivityIndicatorViewStyle)style;
- (void)hideActivityIndicator;


#pragma mark -
#pragma mark alert view

- (void)createAlertView:(NSString *)title
             andMessage:(NSString *)message
   andCancelButtonTitle:(NSString *)cancelButtonTitle;
- (NSInteger)addAlertButton:(NSString *)buttonTitle;
- (void)showAlertViewWithDelegate:(CCAlertViewDelegate *)delegate;
- (void)removeAlertView;
- (void)cancelAlertView;

#if CC_LUA_ENGINE_ENABLED > 0
- (void)showAlertViewWithLuaListener:(LUA_FUNCTION)listener;
- (void)removeAlertViewLuaListener;
#endif

#pragma mark -
#pragma mark UIAlertView delegates

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end
