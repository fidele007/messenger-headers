/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSError;

@interface FBPaymentsCardViewControllerCollectedData : FBValueObject <NSCopying> {

	long long _operationType;
	NSDictionary* _textInputStates;
	NSString* _cardAssociation;
	NSError* _error;

}

@property (nonatomic,readonly) long long operationType;                          //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textInputStates;              //@synthesize textInputStates=_textInputStates - In the implementation block
@property (nonatomic,copy,readonly) NSString * cardAssociation;                  //@synthesize cardAssociation=_cardAssociation - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSString *)cardAssociation;
-(id)initWithOperationType:(long long)arg1 textInputStates:(id)arg2 cardAssociation:(id)arg3 error:(id)arg4 ;
-(NSDictionary *)textInputStates;
-(NSError *)error;
-(long long)operationType;
@end

