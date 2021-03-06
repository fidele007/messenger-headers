/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageReactions, FBMThreadLiveLocation;

@interface FBMMessageSyncedExtensibleProperties : FBValueObject <NSCopying> {

	FBMMessageReactions* _reactions;
	FBMThreadLiveLocation* _liveLocation;

}

@property (nonatomic,copy,readonly) FBMMessageReactions * reactions;                   //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadLiveLocation * liveLocation;              //@synthesize liveLocation=_liveLocation - In the implementation block
-(FBMMessageReactions *)reactions;
-(FBMThreadLiveLocation *)liveLocation;
-(id)initWithReactions:(id)arg1 liveLocation:(id)arg2 ;
@end

