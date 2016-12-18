/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsIntentTarget.h>

@class NSString, NSArray, FBPaymentsCurrencyQuantity, UIColor, FBMGroupThreadKey;

@interface MNPaymentsNewPeerToPeerPaymentIntentTarget : MNPaymentsIntentTarget {

	BOOL _isInTheSameThread;
	NSString* _source;
	NSArray* _otherParticipantFBIDs;
	NSString* _peerToPeerIntentType;
	NSString* _checkoutInitiator;
	FBPaymentsCurrencyQuantity* _initialAmount;
	UIColor* _tintColor;
	FBMGroupThreadKey* _groupThreadKey;

}

@property (nonatomic,copy,readonly) NSString * source;                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherParticipantFBIDs;                         //@synthesize otherParticipantFBIDs=_otherParticipantFBIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * peerToPeerIntentType;                         //@synthesize peerToPeerIntentType=_peerToPeerIntentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * checkoutInitiator;                            //@synthesize checkoutInitiator=_checkoutInitiator - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * initialAmount;              //@synthesize initialAmount=_initialAmount - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                                          //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) FBMGroupThreadKey * groupThreadKey;                      //@synthesize groupThreadKey=_groupThreadKey - In the implementation block
@property (nonatomic,readonly) BOOL isInTheSameThread;                                       //@synthesize isInTheSameThread=_isInTheSameThread - In the implementation block
+(id)peerToPeerPaymentIntentTargetWithSource:(id)arg1 ;
+(id)peerToPeerPaymentIntentTargetWithSource:(id)arg1 otherParticipantFBIDs:(id)arg2 groupThreadKey:(id)arg3 peerToPeerIntentType:(id)arg4 checkoutInitiator:(id)arg5 initialAmount:(id)arg6 tintColor:(id)arg7 isInTheSameThread:(BOOL)arg8 ;
+(id)peerToPeerPaymentIntentTargetWithSource:(id)arg1 recipientFBID:(id)arg2 tintColor:(id)arg3 ;
-(FBMGroupThreadKey *)groupThreadKey;
-(NSString *)checkoutInitiator;
-(NSArray *)otherParticipantFBIDs;
-(NSString *)peerToPeerIntentType;
-(FBPaymentsCurrencyQuantity *)initialAmount;
-(BOOL)isInTheSameThread;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(UIColor *)tintColor;
@end
