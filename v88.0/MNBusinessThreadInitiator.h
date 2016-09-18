/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesAppearanceEventListener.h>

@class FBUserSession, MNBusinessNavigationHandler, NSString;

@interface MNBusinessThreadInitiator : NSObject <MNMessagesAppearanceEventListener> {

	FBUserSession* _session;
	BOOL _isInitiating;
	MNBusinessNavigationHandler* _navigationHandler;

}

@property (assign,nonatomic,__weak) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)setNavigationHandler:(MNBusinessNavigationHandler *)arg1 ;
-(void)_startThreadInitiationWithTermsWithAgentID:(id)arg1 ;
-(void)_startThreadInitiationWithBusinessPageID:(id)arg1 ;
-(void)_mutateLinkWithBusinessPageId:(id)arg1 isAgent:(BOOL)arg2 ;
-(BOOL)_hasAgreedTermsLocally;
-(void)_fetchLinkToPageID:(id)arg1 ;
-(void)_showTermsAlertWithAgentID:(id)arg1 ;
-(void)_buttonClickHandler:(unsigned long long)arg1 agentID:(id)arg2 ;
-(void)_processLinkCheckResults:(BOOL)arg1 agentID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
