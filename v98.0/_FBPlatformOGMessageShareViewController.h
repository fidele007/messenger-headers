/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformNewThreadViewController.h>
#import <Messenger/FBPlatformShareDataLoadListener.h>

@class FBComposerHighlightedText, NSString;

@interface _FBPlatformOGMessageShareViewController : FBPlatformNewThreadViewController <FBPlatformShareDataLoadListener> {

	unsigned long long _loadedImageAttachmentCount;
	FBComposerHighlightedText* _loadedRobotext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)platformLoadedPayload:(id)arg1 ;
-(id)linkShareControllerMethodContext;
-(unsigned long long)imageAttachmentCount;
-(void)platformActionProcessor:(id)arg1 didCompleteOperation:(id)arg2 ;
-(void)platformActionProcessorDidComplete:(id)arg1 ;
-(id)initWithAction:(id)arg1 navigationCoordinator:(id)arg2 composeViewControllerProvider:(id)arg3 peoplePickerViewControllerProvider:(id)arg4 keyboardResettingTracker:(id)arg5 session:(id)arg6 topContactsRetriever:(id)arg7 attachmentPreparer:(id)arg8 userStore:(id)arg9 addressBookContactSyncPolicy:(id)arg10 secureMessagingCapabilityQuerier:(id)arg11 ;
-(id)validateAction;
-(void)_updateSharedObject;
-(void)_updateRobotext;
-(void)dealloc;
-(void)viewDidLoad;
@end

