/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, FBMAdminText, FBMGenericAdmin, NSDictionary;

@interface MNMemModelMessageTypeInfo : FBValueObject <NSCopying> {

	FBStringWithRedactedDescription* _text;
	long long _type;
	FBMAdminText* _adminText;
	FBMGenericAdmin* _genericAdminMessage;
	NSDictionary* _logMessage;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) FBMAdminText * adminText;                            //@synthesize adminText=_adminText - In the implementation block
@property (nonatomic,copy,readonly) FBMGenericAdmin * genericAdminMessage;               //@synthesize genericAdminMessage=_genericAdminMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * logMessage;                           //@synthesize logMessage=_logMessage - In the implementation block
-(NSDictionary *)logMessage;
-(FBMAdminText *)adminText;
-(id)initWithText:(id)arg1 type:(long long)arg2 adminText:(id)arg3 genericAdminMessage:(id)arg4 logMessage:(id)arg5 ;
-(FBMGenericAdmin *)genericAdminMessage;
-(long long)type;
-(FBStringWithRedactedDescription *)text;
@end
