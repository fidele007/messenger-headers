/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNForwardFlowControllerDelegate.h>
#import <Messenger/MNForwardFlowPresenter.h>

@protocol FBProvider;
@class FBUserSession, MNForwardFlowControllerFactory, MNBusinessNavigationHandler, MNForwardFlowController, FBViewerContext, MNUserStore, MNThreadStore, NSString;

@interface MNRidePromoIntentHandler : NSObject <MNForwardFlowControllerDelegate, MNForwardFlowPresenter> {

	FBUserSession* _session;
	id<FBProvider> _pluginManagerProvider;
	MNForwardFlowControllerFactory* _forwardFactory;
	MNBusinessNavigationHandler* _navigationHandler;
	MNForwardFlowController* _forwardFlowController;
	FBViewerContext* _viewerContext;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleIntent:(id)arg1 ;
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(BOOL)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfos:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessage:(id)arg2 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 pluginManagerProvider:(id)arg2 forwardFlowControllerFactory:(id)arg3 viewerContext:(id)arg4 userStore:(id)arg5 threadStore:(id)arg6 ;
-(void)_initNavigationHandlerIfNecessary;
@end

