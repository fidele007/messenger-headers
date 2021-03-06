/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMomentsAppInviteButtonConfig : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _urlString;
	NSString* _postbackPayload;
	NSString* _loggingIdentifier;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                      //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * postbackPayload;                //@synthesize postbackPayload=_postbackPayload - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingIdentifier;              //@synthesize loggingIdentifier=_loggingIdentifier - In the implementation block
-(NSString *)postbackPayload;
-(id)initWithTitle:(id)arg1 urlString:(id)arg2 postbackPayload:(id)arg3 loggingIdentifier:(id)arg4 ;
-(NSString *)title;
-(NSString *)loggingIdentifier;
-(NSString *)urlString;
@end

