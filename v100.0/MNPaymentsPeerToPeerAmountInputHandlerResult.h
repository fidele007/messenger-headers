/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSError;

@interface MNPaymentsPeerToPeerAmountInputHandlerResult : FBValueObject <NSCopying> {

	NSString* _amountText;
	NSArray* _operations;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * amountText;              //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
-(id)initWithAmountText:(id)arg1 operations:(id)arg2 error:(id)arg3 ;
-(NSArray *)operations;
-(NSError *)error;
-(NSString *)amountText;
@end

