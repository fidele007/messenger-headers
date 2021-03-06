/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNBotQuickReplyLocationPickerDelegate.h>
#import <Messenger/MNBotQuickReplyViewControllerDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNBotQuickReplyCoordinatorDelegate;
@class MNBotQuickReplyCoordinatorInjector, MNThreadViewModel, NSArray, MNMessageSendConversionLoggingService, MNBotQuickReplyViewController, MNMessageSendConversionContext, NSString;

@interface MNBotQuickReplyCoordinator : NSObject <FBClassInjectable, MNBotQuickReplyLocationPickerDelegate, MNBotQuickReplyViewControllerDelegate, MNThreadViewModelConfigurable> {

	MNBotQuickReplyCoordinatorInjector* _injector;
	MNThreadViewModel* _threadViewModel;
	NSArray* _quickReplies;
	id _currentHandler;
	MNMessageSendConversionLoggingService* _sendConversionLoggingService;
	BOOL _shouldShowQuickReply;
	id<MNBotQuickReplyCoordinatorDelegate> _delegate;
	MNBotQuickReplyViewController* _botQuickReplyViewController;
	MNMessageSendConversionContext* _messageSendConversionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNBotQuickReplyCoordinatorDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowQuickReply;                                                //@synthesize shouldShowQuickReply=_shouldShowQuickReply - In the implementation block
@property (nonatomic,readonly) MNBotQuickReplyViewController * botQuickReplyViewController;              //@synthesize botQuickReplyViewController=_botQuickReplyViewController - In the implementation block
@property (nonatomic,retain) MNMessageSendConversionContext * messageSendConversionContext;              //@synthesize messageSendConversionContext=_messageSendConversionContext - In the implementation block
+(Class)injectorClass;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(MNMessageSendConversionContext *)messageSendConversionContext;
-(void)setMessageSendConversionContext:(MNMessageSendConversionContext *)arg1 ;
-(BOOL)shouldShowQuickReply;
-(MNBotQuickReplyViewController *)botQuickReplyViewController;
-(void)_updateQuickRepliesIfNeeded;
-(BOOL)_shouldShowQuickReply;
-(void)setShouldShowQuickReply:(BOOL)arg1 ;
-(void)_handleSticker:(unsigned long long)arg1 forThreadKey:(id)arg2 ;
-(void)_handleRideWithProviderName:(id)arg1 destinationAddress:(id)arg2 destinationLocation:(id)arg3 forThreadKey:(id)arg4 ;
-(void)_handlePaymentWithAmountInCents:(id)arg1 currencyCode:(id)arg2 paymentType:(unsigned long long)arg3 forThreadKey:(id)arg4 otherUsers:(id)arg5 themeColor:(id)arg6 ;
-(void)_handleReminderWithDate:(id)arg1 ;
-(void)_handlePollWithOptions:(id)arg1 questionText:(id)arg2 allUsers:(id)arg3 tintColor:(id)arg4 forThreadKey:(id)arg5 ;
-(void)_handleScheduleCallWithDate:(id)arg1 ;
-(void)_updateQuickRepliesOnChange;
-(void)quickRepliesViewControllerDidSelectQuickReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)quickRepliesViewController:(id)arg1 willDismissQuickReplies:(id)arg2 ;
-(void)quickRepliesViewController:(id)arg1 didDismissQuickReplies:(id)arg2 ;
-(void)botQuickReplyLocationPickerCoordinator:(id)arg1 didSendWithAttachmentData:(id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNBotQuickReplyCoordinatorDelegate>)arg1 ;
-(id<MNBotQuickReplyCoordinatorDelegate>)delegate;
@end

