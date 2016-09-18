/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>

@class MNMessagingRegionFetcher, MNMessagingRegionFetchPolicy, MNMessagingRegionFetcherServiceListeningAnnouncer, NSString;

@interface MNMessagingRegionFetcherService : NSObject <MNServiceControllable> {

	MNMessagingRegionFetcher* _messagingRegionFetcher;
	MNMessagingRegionFetchPolicy* _messagingRegionFetchPolicy;
	MNMessagingRegionFetcherServiceListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMessagingRegionFetcher:(id)arg1 messagingFetchRegionFetchPolicy:(id)arg2 announcer:(id)arg3 ;
-(void)_fetchMessagingRegionIfPossible;
-(void)_fetchMessagingRegion;
-(void)_handleSuccessfulFetchOfMessagingRegionInfo:(id)arg1 ;
-(void)_handleMessagingRegionFetchFailureWithError:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
