/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBFeedVPVd : FBValueObject <NSCopying> {

	double _duration;
	unsigned long long _hScrollIndex;
	unsigned long long _storyHeight;
	NSArray* _trackingCodes;
	NSString* _deduplicationKey;
	long long _storyPosition;
	NSArray* _ctaIdentifiers;
	NSString* _debugIdentifier;

}

@property (nonatomic,readonly) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long hScrollIndex;               //@synthesize hScrollIndex=_hScrollIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long storyHeight;                //@synthesize storyHeight=_storyHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                  //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * deduplicationKey;              //@synthesize deduplicationKey=_deduplicationKey - In the implementation block
@property (nonatomic,readonly) long long storyPosition;                       //@synthesize storyPosition=_storyPosition - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ctaIdentifiers;                 //@synthesize ctaIdentifiers=_ctaIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugIdentifier;               //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
-(id)initWithDuration:(double)arg1 hScrollIndex:(unsigned long long)arg2 storyHeight:(unsigned long long)arg3 trackingCodes:(id)arg4 deduplicationKey:(id)arg5 storyPosition:(long long)arg6 ctaIdentifiers:(id)arg7 debugIdentifier:(id)arg8 ;
-(unsigned long long)hScrollIndex;
-(unsigned long long)storyHeight;
-(NSString *)deduplicationKey;
-(long long)storyPosition;
-(NSArray *)ctaIdentifiers;
-(NSArray *)trackingCodes;
-(double)duration;
-(NSString *)debugIdentifier;
@end

