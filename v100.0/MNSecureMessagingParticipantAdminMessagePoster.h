/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureThreadParticipantUpdating.h>

@class MNSecureThreadUpdater, MNSecureMessagingRemoteIdentityValidator, NSString;

@interface MNSecureMessagingParticipantAdminMessagePoster : NSObject <MNSecureThreadParticipantUpdating> {

	MNSecureThreadUpdater* _threadUpdater;
	MNSecureMessagingRemoteIdentityValidator* _identityValidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeDevice:(id)arg1 fromThread:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(BOOL)addDevice:(id)arg1 toThread:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)initWithThreadUpdater:(id)arg1 identityValidator:(id)arg2 ;
@end

