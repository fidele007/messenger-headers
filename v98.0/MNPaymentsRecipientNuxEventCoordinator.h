/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsAttachmentViewModelListener.h>

@class MNPaymentsRecipientNuxEventListenerAnnouncer, MNPaymentsDefaultCardManager, FBPaymentsAttachmentViewModelCoordinator, NSMutableSet, NSString;

@interface MNPaymentsRecipientNuxEventCoordinator : NSObject <FBPaymentsUpdateListener, FBPaymentsAttachmentViewModelListener> {

	MNPaymentsRecipientNuxEventListenerAnnouncer* _eventAnnouncer;
	MNPaymentsDefaultCardManager* _defaultCardManager;
	FBPaymentsAttachmentViewModelCoordinator* _paymentAttachmentViewModelCoordinator;
	NSMutableSet* _objectsBeingProcessed;
	BOOL _isProcessingRecipientNux;

}

@property (assign,nonatomic) BOOL isProcessingRecipientNux;              //@synthesize isProcessingRecipientNux=_isProcessingRecipientNux - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(BOOL)isProcessingRecipientNux;
-(void)updateServicesWithDefaultCardManager:(id)arg1 paymentAttachmentViewModelCoordinator:(id)arg2 ;
-(BOOL)isBeingProcessedForObjectWithFBID:(id)arg1 ;
-(void)didUpdateWithPaymentAttachmentViewModels:(id)arg1 ;
-(void)setIsBeingProcessedForObjectWithFBID:(id)arg1 ;
-(void)removeIsBeingProcessedForObjectWithFBID:(id)arg1 shouldUpdate:(BOOL)arg2 ;
-(void)setIsProcessingRecipientNux:(BOOL)arg1 ;
-(id)init;
-(void)stopServices;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

