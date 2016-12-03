/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(NSString *)appGroup;
-(NSString *)loginSecret;
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 publicAppName:(id)arg3 pushTransmitterID:(id)arg4 ;
-(NSString *)publicAppName;
-(NSString *)pushTransmitterID;
@end

