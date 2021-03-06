/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNEphemeralMessageStatusCalculating, MNEphemeralMessagingTombstonedMessageDeleting, OS_dispatch_queue;
@class NSObject;

@interface MNEphemeralMessagingMessagesViewTombstoneDeletionInvoker : NSObject {

	id<MNEphemeralMessageStatusCalculating> _ephemeralStatusCalculator;
	id<MNEphemeralMessagingTombstonedMessageDeleting> _tombstonedMessageDeleter;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithEphemeralStatusCalculator:(id)arg1 tombstonedMessageDeleter:(id)arg2 queue:(id)arg3 ;
-(void)invokeDeletionForTombstonedMessagesInViewModel:(id)arg1 ;
-(id)_findTombstonedMessagesInMessageSetNeedingDeletion:(id)arg1 otherParticipantInfo:(id)arg2 ;
-(void)_removeMessageTombstonesWithMessageKeys:(id)arg1 onThread:(id)arg2 ;
@end

