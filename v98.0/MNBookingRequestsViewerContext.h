/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBookingRequestsViewerContext : FBValueObject <NSCopying> {

	BOOL _actsAsPageAdmin;
	NSString* _otherParticipantId;
	NSString* _actorId;

}

@property (nonatomic,copy,readonly) NSString * otherParticipantId;              //@synthesize otherParticipantId=_otherParticipantId - In the implementation block
@property (nonatomic,copy,readonly) NSString * actorId;                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,readonly) BOOL actsAsPageAdmin;                            //@synthesize actsAsPageAdmin=_actsAsPageAdmin - In the implementation block
-(id)initWithOtherParticipantId:(id)arg1 actorId:(id)arg2 actsAsPageAdmin:(BOOL)arg3 ;
-(NSString *)otherParticipantId;
-(BOOL)actsAsPageAdmin;
-(NSString *)actorId;
@end

