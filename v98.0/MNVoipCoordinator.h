/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@protocol FBProvider, MNPerformanceMarking;
@class FBMThreadMessageSender, MNThreadNavigationCoordinator, FBWebRTCCallStarter, MNSimpleSingleThreadFetcher, NSString;

@interface MNVoipCoordinator : NSObject <FBClassProvidable, MNServiceControllable> {

	BOOL _stopped;
	id<FBProvider> _callStarterProvider;
	FBMThreadMessageSender* _threadMessageSender;
	id<FBProvider> _threadFetcherProvider;
	id<MNPerformanceMarking> _performanceMarker;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBWebRTCCallStarter* _callStarter;
	MNSimpleSingleThreadFetcher* _threadFetcher;

}

@property (nonatomic,retain) MNThreadNavigationCoordinator * threadNavigationCoordinator;              //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,retain) FBWebRTCCallStarter * callStarter;                                        //@synthesize callStarter=_callStarter - In the implementation block
@property (nonatomic,retain) MNSimpleSingleThreadFetcher * threadFetcher;                              //@synthesize threadFetcher=_threadFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(FBWebRTCCallStarter *)callStarter;
-(void)_openVoice:(id)arg1 ;
-(void)_openMessage:(id)arg1 ;
-(void)_browseToConversation:(id)arg1 ;
-(void)_sendCannedMessage:(id)arg1 ;
-(void)_startCall:(id)arg1 ;
-(void)_startVideoCall:(id)arg1 ;
-(MNSimpleSingleThreadFetcher *)threadFetcher;
-(void)_completeFetchingThreadWithUser:(id)arg1 message:(id)arg2 outgoingAttachment:(id)arg3 threadKey:(id)arg4 threadQuery:(id)arg5 response:(id)arg6 error:(id)arg7 ;
-(void)setThreadNavigationCoordinator:(MNThreadNavigationCoordinator *)arg1 ;
-(void)setCallStarter:(FBWebRTCCallStarter *)arg1 ;
-(void)setThreadFetcher:(MNSimpleSingleThreadFetcher *)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

