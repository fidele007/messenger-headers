/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNThreadMontageAddAudienceButtonViewModel : FBValueObject <NSCopying> {

	NSString* _otherParticipantId;
	NSString* _otherParticipantName;
	UIColor* _buttonThemeColor;

}

@property (nonatomic,copy,readonly) NSString * otherParticipantId;                //@synthesize otherParticipantId=_otherParticipantId - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherParticipantName;              //@synthesize otherParticipantName=_otherParticipantName - In the implementation block
@property (nonatomic,copy,readonly) UIColor * buttonThemeColor;                   //@synthesize buttonThemeColor=_buttonThemeColor - In the implementation block
-(NSString *)otherParticipantId;
-(NSString *)otherParticipantName;
-(UIColor *)buttonThemeColor;
-(id)initWithOtherParticipantId:(id)arg1 otherParticipantName:(id)arg2 buttonThemeColor:(id)arg3 ;
@end

