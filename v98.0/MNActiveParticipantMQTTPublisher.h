/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNActiveParticipantSetObserver.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBMQTTChannelCoordinating;
@class MNActiveParticipantSet, FBUserSession, NSString;

@interface MNActiveParticipantMQTTPublisher : NSObject <MNActiveParticipantSetObserver, FBViewerContextClassProvidable> {

	MNActiveParticipantSet* _activeUserSet;
	id<FBMQTTChannelCoordinating> _mqttChannelCoordinator;
	FBUserSession* _session;
	BOOL _isStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startWithMQTTChannelCoordinator:(id)arg1 ;
-(void)didUpdateActiveUserSet:(id)arg1 toContainUserIds:(id)arg2 ;
-(id)initWithActiveUserSet:(id)arg1 session:(id)arg2 ;
-(void)sendMQTTRequest:(id)arg1 ;
-(void)dealloc;
-(void)stop;
@end

