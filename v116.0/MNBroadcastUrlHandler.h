/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNForwardComposerViewControllerDelegate.h>
#import <Messenger/MNForwardFlowControllerDelegate.h>
#import <Messenger/MNForwardFlowPresenter.h>
#import <Messenger/MNNavigationListener.h>

@class MNInboxViewController, MNForwardFlowController, MNURLRedirectItem, MNBroadcastUrlHandlerInjector, NSString;

@interface MNBroadcastUrlHandler : NSObject <FBClassInjectable, MNForwardComposerViewControllerDelegate, MNForwardFlowControllerDelegate, MNForwardFlowPresenter, MNNavigationListener> {

	MNInboxViewController* _inboxViewController;
	MNForwardFlowController* _forwardFlowController;
	MNURLRedirectItem* _redirectItem;
	MNBroadcastUrlHandlerInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)_handleShareURL:(id)arg1 ;
-(void)_createForwardFlowControllerAndPresentForwardFlowWithURL:(id)arg1 suggestedContactsRetriever:(id)arg2 staticForwardDataFetcher:(id)arg3 hasPreselectedContacts:(BOOL)arg4 showSearchBar:(BOOL)arg5 composerViewPlaceholderOverride:(id)arg6 ;
-(void)_dismissForwardFlowViewControllerIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_redirectToItem:(id)arg1 analyticsEventName:(id)arg2 ;
-(void)_dismissViewControllerAndRedirectIfPossible;
-(void)didRedirectWithRedirectItem:(id)arg1 URL:(id)arg2 ;
-(void)showDifferentUserIdsAlertWithRedirectItem:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)forwardComposerViewControllerDidCancel:(id)arg1 ;
-(void)forwardComposerViewController:(id)arg1 didPressNextWithText:(id)arg2 ;
-(void)forwardComposerViewController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(BOOL)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfos:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)canOpenURL:(id)arg1 ;
@end

