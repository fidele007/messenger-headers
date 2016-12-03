/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRideServicePageData : FBValueObject <NSCopying> {

	NSString* _Id;
	NSString* _displayName;
	NSString* _profileUrlString;

}

@property (nonatomic,copy,readonly) NSString * Id;                            //@synthesize Id=_Id - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileUrlString;              //@synthesize profileUrlString=_profileUrlString - In the implementation block
-(NSString *)Id;
-(id)initWithId:(id)arg1 displayName:(id)arg2 profileUrlString:(id)arg3 ;
-(NSString *)profileUrlString;
-(NSString *)displayName;
@end

