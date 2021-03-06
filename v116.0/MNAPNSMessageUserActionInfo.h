/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNAPNSMessageUserActionInfo : FBValueObject <NSCopying> {

	BOOL _isLaunchedByUser;
	BOOL _isColdStart;
	NSString* _actionIdentifier;
	NSDictionary* _responseInfo;

}

@property (nonatomic,copy,readonly) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseInfo;              //@synthesize responseInfo=_responseInfo - In the implementation block
@property (nonatomic,readonly) BOOL isLaunchedByUser;                         //@synthesize isLaunchedByUser=_isLaunchedByUser - In the implementation block
@property (nonatomic,readonly) BOOL isColdStart;                              //@synthesize isColdStart=_isColdStart - In the implementation block
-(BOOL)isLaunchedByUser;
-(id)initWithActionIdentifier:(id)arg1 responseInfo:(id)arg2 isLaunchedByUser:(BOOL)arg3 isColdStart:(BOOL)arg4 ;
-(BOOL)isColdStart;
-(NSString *)actionIdentifier;
-(NSDictionary *)responseInfo;
@end

