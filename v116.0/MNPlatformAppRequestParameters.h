/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPlatformAppRequestParameters : FBValueObject <NSCopying> {

	NSString* _appID;
	NSString* _bundleID;
	unsigned long long _requestType;

}

@property (nonatomic,copy,readonly) NSString * appID;                       //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
-(id)initWithAppID:(id)arg1 bundleID:(id)arg2 requestType:(unsigned long long)arg3 ;
-(NSString *)bundleID;
-(unsigned long long)requestType;
-(NSString *)appID;
@end

