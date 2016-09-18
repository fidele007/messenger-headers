/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthControllingDelegate.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBAuthControlling, FBAuthUIPresenting, FBAuthControllingDelegate;
@class FBLoginErrorStateManager, FBAuthPerfLogger, NSString;

@interface FBAuthNetworkErrorHandler : NSObject <FBAuthControllingDelegate, FBAuthControlling> {

	id<FBAuthControlling> _rootFlowController;
	id<FBAuthUIPresenting> _uiPresenter;
	FBLoginErrorStateManager* _errorStateManager;
	FBAuthPerfLogger* _perfLogger;
	id<FBAuthControllingDelegate> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(id)initWithRootFlowController:(id)arg1 uiPresenter:(id)arg2 ;
-(void)authenticate;
-(void)dealloc;
@end
