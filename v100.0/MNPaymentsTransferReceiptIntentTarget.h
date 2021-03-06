/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

