/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBExceptionHandler;


@protocol FBAppModule <NSObject,FBMenuItemHandler>
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler; 
@optional
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5;
-(BOOL)canOpenLoggedOutURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
-(void)cleanupSession;
-(FBExceptionHandler *)exceptionHandler;
-(void)setExceptionHandler:(id)arg1;

@required
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2;
-(id)URLSegues;
-(id)supportedURLSchemes;
-(id)ID;

@end

