/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBuildInfo : FBValueObject <NSCopying> {

	NSString* _appVersion;
	NSString* _appMajorVersion;
	NSString* _buildVersion;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * appVersion;                    //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * appMajorVersion;               //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                  //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)initWithAppVersion:(id)arg1 appMajorVersion:(id)arg2 buildVersion:(id)arg3 bundleIdentifier:(id)arg4 ;
-(NSString *)bundleIdentifier;
-(NSString *)buildVersion;
-(NSString *)appMajorVersion;
-(NSString *)appVersion;
@end

