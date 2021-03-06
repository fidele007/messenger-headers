/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMessagingApplicationDefinition : FBValueObject <NSCopying> {

	NSString* _name;
	NSString* _appStoreURL;
	NSString* _appStoreID;
	NSString* _internalURL;
	unsigned long long _glyphName;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * appStoreURL;               //@synthesize appStoreURL=_appStoreURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * appStoreID;                //@synthesize appStoreID=_appStoreID - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalURL;               //@synthesize internalURL=_internalURL - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
-(NSString *)appStoreURL;
-(NSString *)internalURL;
-(id)initWithName:(id)arg1 appStoreURL:(id)arg2 appStoreID:(id)arg3 internalURL:(id)arg4 glyphName:(unsigned long long)arg5 ;
-(NSString *)appStoreID;
-(unsigned long long)glyphName;
-(NSString *)name;
@end

