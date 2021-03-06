/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNewThreadViewControllerBase.h>
#import <Messenger/FBPlatformComposeViewControllerDelegate.h>
#import <Messenger/FBPlatformActionProcessorDelegate.h>
#import <Messenger/FBCompositionLinkShareControllerDelegate.h>

@protocol FBProvider, FBMessageOutgoingAttachmentPreparing, FBShareable;
@class MNNavigationCoordinator, FBUserSession, FBCompositionLinkShareController, FBPlatformAction, NSString, FBPlatformComposeViewController, FBNetworkerRequest, NSDictionary, FBPlatformActionProcessor, FBComposerHighlightedText;

@interface FBPlatformNewThreadViewController : MNNewThreadViewControllerBase <FBPlatformComposeViewControllerDelegate, FBPlatformActionProcessorDelegate, FBCompositionLinkShareControllerDelegate> {

	BOOL _processorDidComplete;
	MNNavigationCoordinator* _navigationCoordinator;
	id<FBProvider> _composeViewControllerProvider;
	FBUserSession* _session;
	id<FBMessageOutgoingAttachmentPreparing> _attachmentPreparer;
	FBCompositionLinkShareController* _linkShareController;
	FBPlatformAction* _action;
	id<FBShareable> _shareable;
	NSString* _shareAttachmentFBID;
	FBPlatformComposeViewController* _composeViewController;
	FBNetworkerRequest* _publishRequest;
	NSDictionary* _deviceAPIResponse;
	FBPlatformActionProcessor* _processor;

}

@property (nonatomic,retain) FBPlatformComposeViewController * composeViewController;              //@synthesize composeViewController=_composeViewController - In the implementation block
@property (nonatomic,retain) FBNetworkerRequest * publishRequest;                                  //@synthesize publishRequest=_publishRequest - In the implementation block
@property (nonatomic,copy) NSDictionary * deviceAPIResponse;                                       //@synthesize deviceAPIResponse=_deviceAPIResponse - In the implementation block
@property (nonatomic,retain) FBPlatformActionProcessor * processor;                                //@synthesize processor=_processor - In the implementation block
@property (nonatomic,retain,readonly) FBPlatformAction * action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) id<FBShareable> shareable;                                            //@synthesize shareable=_shareable - In the implementation block
@property (nonatomic,retain) FBComposerHighlightedText * robotext; 
@property (nonatomic,copy) NSString * shareAttachmentFBID;                                         //@synthesize shareAttachmentFBID=_shareAttachmentFBID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)updateComposerState;
-(void)dismissComposer;
-(void)setComposeViewController:(FBPlatformComposeViewController *)arg1 ;
-(void)cancelCompose;
-(void)loadComposeView;
-(BOOL)shouldPresentCancelActionSheet;
-(id)accessibilityStringForComposedContent;
-(void)focusComposer;
-(id)peoplePickerConfiguration;
-(void)platformComposeViewController:(id)arg1 didSelectSendWithText:(id)arg2 attachment:(id)arg3 ;
-(void)platformComposeViewControllerNeedResize:(id)arg1 ;
-(void)setRobotext:(FBComposerHighlightedText *)arg1 ;
-(void)setShareAttachmentFBID:(NSString *)arg1 ;
-(FBComposerHighlightedText *)robotext;
-(void)_updateLinkShareToShareableIfNeeded;
-(id)linkShareControllerMethodContext;
-(unsigned long long)imageAttachmentCount;
-(void)_doSend:(id)arg1 text:(id)arg2 preparedAttachment:(id)arg3 ;
-(void)completeWithErrorCode:(long long)arg1 errorMessage:(id)arg2 errorResponse:(id)arg3 logAnalytics:(BOOL)arg4 ;
-(void)_prepareAttachment:(id)arg1 attachmentContext:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_completeForSuccessWithRecipientCount:(unsigned long long)arg1 hasMessage:(BOOL)arg2 ;
-(void)_completeWithErrorMessage:(id)arg1 ;
-(void)setDeviceAPIResponse:(NSDictionary *)arg1 ;
-(void)setPublishRequest:(FBNetworkerRequest *)arg1 ;
-(BOOL)_evaluateAndAlertIfGKFailed:(long long)arg1 ;
-(NSDictionary *)deviceAPIResponse;
-(FBNetworkerRequest *)publishRequest;
-(void)platformActionProcessor:(id)arg1 didFailWithErrorCode:(long long)arg2 errorMessage:(id)arg3 errorResponse:(id)arg4 ;
-(void)platformActionProcessor:(id)arg1 didCompleteOperation:(id)arg2 ;
-(void)platformActionProcessorDidComplete:(id)arg1 ;
-(void)linkShareControllerDidFetchLinkInformation:(id)arg1 ;
-(void)linkShareController:(id)arg1 didFailFetchWithError:(id)arg2 ;
-(id)initWithAction:(id)arg1 navigationCoordinator:(id)arg2 composeViewControllerProvider:(id)arg3 peoplePickerViewControllerProvider:(id)arg4 keyboardResettingTracker:(id)arg5 session:(id)arg6 topContactsRetriever:(id)arg7 attachmentPreparer:(id)arg8 userStore:(id)arg9 addressBookContactSyncPolicy:(id)arg10 secureMessagingCapabilityQuerier:(id)arg11 ;
-(void)setProcessor:(FBPlatformActionProcessor *)arg1 ;
-(void)setShareable:(id<FBShareable>)arg1 ;
-(id)validateAction;
-(id<FBShareable>)shareable;
-(NSString *)shareAttachmentFBID;
-(FBPlatformActionProcessor *)processor;
-(void)dealloc;
-(FBPlatformAction *)action;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_dismiss;
-(FBPlatformComposeViewController *)composeViewController;
@end

