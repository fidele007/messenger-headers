/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessagesViewPresentationStrategy.h>

@protocol MNPerformanceMarking;
@class MNThreadViewModelLoader, MNMessageSendConversionContext, MNComposerExtensionTarget, MNTextAndAttachmentForwardContent, MNLocalThreadQuery, MNMessagesViewController, MNPerfLoggingEventDescriptor, MNMessagesViewNavigationOriginType, NSString;

@interface MNMessagesViewByThreadQueryPresentationStrategy : NSObject <FBClassProvidable, MNMessagesViewPresentationStrategy> {

	MNThreadViewModelLoader* _threadViewModelLoader;
	unsigned long long _requestId;
	MNMessageSendConversionContext* _messageSendConversionContext;
	MNComposerExtensionTarget* _initialComposerExtensionTarget;
	BOOL _flowersBorderModeEnabled;
	MNTextAndAttachmentForwardContent* _replyContent;
	BOOL _autoSendReplyContent;
	BOOL _didAlreadyPresentMessagesVC;
	BOOL _presentationComplete;
	MNLocalThreadQuery* _specifiedThreadQuery;
	MNMessagesViewController* _messagesViewController;
	MNPerfLoggingEventDescriptor* _trackingDescriptorForLogging;
	/*^block*/id _executePresentBlock;
	/*^block*/id _showLoadingBlock;
	/*^block*/id _presentationCompleteBlock;
	id<MNPerformanceMarking> _performanceMarker;
	MNMessagesViewNavigationOriginType* _navigationOriginType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setupPresentationWithLocalThreadQuery:(id)arg1 messageSendConversionContext:(id)arg2 initialComposerExtensionTarget:(id)arg3 flowersBorderModeEnabled:(BOOL)arg4 replyContent:(id)arg5 autoSendReplyContent:(BOOL)arg6 trackingDescriptorForLogging:(id)arg7 navigationOriginType:(id)arg8 ;
-(id)initWithViewModelLoader:(id)arg1 performanceMarker:(id)arg2 ;
-(void)_handleRequestSuccess:(id)arg1 ;
-(void)_handleRequestProgress:(id)arg1 longOperationDidBegin:(BOOL)arg2 ;
-(void)_handleRequestFailure:(id)arg1 ;
-(void)_cleanUpPresentation;
-(void)_presentOrUpdateWithLoadedThread:(id)arg1 isOperationComplete:(BOOL)arg2 ;
-(void)_presentLoadedThreadViewModel:(id)arg1 ;
-(void)beginPresentationOfMessagesViewController:(id)arg1 withExecutePresentBlock:(/*^block*/id)arg2 showLoadingBlock:(/*^block*/id)arg3 presentationCompleteBlock:(/*^block*/id)arg4 ;
-(id)presentationFailedMessage;
-(BOOL)isPresentationPending;
-(void)cancel;
-(void)dealloc;
@end
