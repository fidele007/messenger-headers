/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

