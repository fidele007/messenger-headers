/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsCheckoutHeaderViewModelCreator.h>

@class MNPaymentsPeerToPeerPaymentRecipientDataSource, FBPaymentsUpdateListenerAnnouncer, NSString;

@interface MNPaymentsPeerToPeerCheckoutHeaderViewModelCreator : NSObject <FBPaymentsUpdateListener, FBPaymentsCheckoutHeaderViewModelCreator> {

	MNPaymentsPeerToPeerPaymentRecipientDataSource* _paymentRecipientDataSource;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)initWithPaymentRecipientDataSource:(id)arg1 ;
-(id)viewModelWithName:(id)arg1 FBID:(id)arg2 ;
-(id)viewModel;
@end
