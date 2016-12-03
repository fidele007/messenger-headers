/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface MNMessageSourceAppReplyActionInfo : FBValueObject <NSCopying> {

	NSString* _metadata;
	NSSet* _userAppScopedIds;

}

@property (nonatomic,copy,readonly) NSString * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSSet * userAppScopedIds;              //@synthesize userAppScopedIds=_userAppScopedIds - In the implementation block
-(id)initWithMetadata:(id)arg1 userAppScopedIds:(id)arg2 ;
-(NSSet *)userAppScopedIds;
-(NSString *)metadata;
@end

