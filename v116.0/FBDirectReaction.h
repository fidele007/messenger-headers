/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, FBMemPerson;

@interface FBDirectReaction : FBValueObject <NSCopying> {

	NSString* _graphQLID;
	NSDate* _reactionTime;
	double _playbackTime;
	FBMemPerson* _reactionActor;
	long long _reactionKey;
	CGPoint _position;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                     //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * reactionTime;                    //@synthesize reactionTime=_reactionTime - In the implementation block
@property (nonatomic,readonly) CGPoint position;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) double playbackTime;                           //@synthesize playbackTime=_playbackTime - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * reactionActor;              //@synthesize reactionActor=_reactionActor - In the implementation block
@property (nonatomic,readonly) long long reactionKey;                         //@synthesize reactionKey=_reactionKey - In the implementation block
-(long long)reactionKey;
-(NSDate *)reactionTime;
-(FBMemPerson *)reactionActor;
-(id)initWithGraphQLID:(id)arg1 reactionTime:(id)arg2 position:(CGPoint)arg3 playbackTime:(double)arg4 reactionActor:(id)arg5 reactionKey:(long long)arg6 ;
-(NSString *)graphQLID;
-(CGPoint)position;
-(double)playbackTime;
@end

