/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsGroupCommerceBannerActionsViewModel : FBValueObject <NSCopying> {

	NSString* _firstButtonText;
	unsigned long long _firstActionType;
	NSString* _secondButtonText;
	unsigned long long _secondActionType;
	double _buttonPadding;

}

@property (nonatomic,copy,readonly) NSString * firstButtonText;                  //@synthesize firstButtonText=_firstButtonText - In the implementation block
@property (nonatomic,readonly) unsigned long long firstActionType;               //@synthesize firstActionType=_firstActionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondButtonText;                 //@synthesize secondButtonText=_secondButtonText - In the implementation block
@property (nonatomic,readonly) unsigned long long secondActionType;              //@synthesize secondActionType=_secondActionType - In the implementation block
@property (nonatomic,readonly) double buttonPadding;                             //@synthesize buttonPadding=_buttonPadding - In the implementation block
-(id)initWithFirstButtonText:(id)arg1 firstActionType:(unsigned long long)arg2 secondButtonText:(id)arg3 secondActionType:(unsigned long long)arg4 buttonPadding:(double)arg5 ;
-(NSString *)firstButtonText;
-(unsigned long long)firstActionType;
-(NSString *)secondButtonText;
-(unsigned long long)secondActionType;
-(double)buttonPadding;
@end
