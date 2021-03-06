/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsIntentTarget.h>

@class NSString;

@interface MNPaymentsTransferReceiptIntentTarget : MNPaymentsIntentTarget {

	BOOL _shouldPushReceiptView;
	NSString* _transferId;
	NSString* _styleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * transferId;                   //@synthesize transferId=_transferId - In the implementation block
@property (nonatomic,copy,readonly) NSString * styleIdentifier;              //@synthesize styleIdentifier=_styleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldPushReceiptView;                   //@synthesize shouldPushReceiptView=_shouldPushReceiptView - In the implementation block
+(id)transferReceiptIntentWithTransferId:(id)arg1 styleIdentifier:(id)arg2 shouldPushReceiptView:(BOOL)arg3 ;
-(NSString *)transferId;
-(NSString *)styleIdentifier;
-(id)fallbackURLs;
-(BOOL)shouldPushReceiptView;
-(BOOL)isEqual:(id)arg1 ;
@end

