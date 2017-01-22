/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewContainerControllerDelegate.h>
#import <Messenger/FBModalContainerViewControllerDelegate.h>

@class FBUserSession, FBExceptionHandler, FBBrowserLayoutConfig, NSString;

@interface FBURLHandlerWebViewProvider : NSObject <FBWebViewContainerControllerDelegate, FBModalContainerViewControllerDelegate> {

	FBUserSession* _session;
	FBExceptionHandler* _exceptionHandler;
	FBBrowserLayoutConfig* _browserLayoutConfig;

}

@property (nonatomic,retain) FBExceptionHandler * exceptionHandler;                    //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,retain) FBBrowserLayoutConfig * browserLayoutConfig;              //@synthesize browserLayoutConfig=_browserLayoutConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCustomWebContainerProviderBlock:(/*^block*/id)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissModalContainerViewController:(id)arg1 ;
-(void)cancelDismissModalContainerViewController:(id)arg1 ;
-(id)_webViewControllerForURL:(id)arg1 isModal:(BOOL)arg2 ;
-(id)webViewControllerForURL:(id)arg1 isModal:(BOOL)arg2 ;
-(id)externalWebViewControllerForURLIntentTarget:(id)arg1 presentationMethod:(unsigned long long*)arg2 presentationOptions:(unsigned long long*)arg3 zeroRatingSentry:(id)arg4 feedStory:(id)arg5 analyticsInfo:(id)arg6 setupForPreviewing:(BOOL)arg7 ;
-(id)externalWebViewControllerForPopping:(id)arg1 ;
-(FBBrowserLayoutConfig *)browserLayoutConfig;
-(void)setBrowserLayoutConfig:(FBBrowserLayoutConfig *)arg1 ;
-(FBExceptionHandler *)exceptionHandler;
-(id)initWithSession:(id)arg1 ;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
@end
