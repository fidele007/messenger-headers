/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBMusicApplication : FBValueObject <NSCopying> {

	NSString* _fbid;
	NSString* _name;
	NSURL* _squareLogoURL;
	NSURL* _iOSAppStoreURL;
	unsigned long long _appType;

}

@property (nonatomic,copy,readonly) NSString * fbid;                     //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSURL * squareLogoURL;               //@synthesize squareLogoURL=_squareLogoURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * iOSAppStoreURL;              //@synthesize iOSAppStoreURL=_iOSAppStoreURL - In the implementation block
@property (nonatomic,readonly) unsigned long long appType;               //@synthesize appType=_appType - In the implementation block
-(NSString *)fbid;
-(id)initWithFbid:(id)arg1 name:(id)arg2 squareLogoURL:(id)arg3 iOSAppStoreURL:(id)arg4 appType:(unsigned long long)arg5 ;
-(NSURL *)squareLogoURL;
-(NSURL *)iOSAppStoreURL;
-(unsigned long long)appType;
-(NSString *)name;
@end

