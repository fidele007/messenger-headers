/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBApplicationKeySource : FBValueObject <NSCopying> {

	NSString* _loginSecret;
	NSString* _appGroup;
	NSString* _publicAppName;
	NSString* _pushTransmitterID;

}

@property (nonatomic,copy,readonly) NSString * loginSecret;                    //@synthesize loginSecret=_loginSecret - In the implementation block
@property (nonatomic,copy,readonly) NSString * appGroup;                       //@synthesize appGroup=_appGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicAppName;                  //@synthesize publicAppName=_publicAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pushTransmitterID;              //@synthesize pushTransmitterID=_pushTransmitterID - In the implementation block
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 publicAppName:(id)arg3 pushTransmitterID:(id)arg4 ;
-(NSString *)publicAppName;
-(NSString *)pushTransmitterID;
-(NSString *)appGroup;
-(NSString *)loginSecret;
@end

