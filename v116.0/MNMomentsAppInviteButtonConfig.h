/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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

