/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNWatchConnectivityListener.h>
#import <Messenger/MNServiceControllable.h>

@class MNWatchDataServiceInjector, MNWatchDataWriterCoordinator, MNWatchThreadViewModelWriter, NSString;

@interface MNWatchDataService : NSObject <FBClassInjectable, MNWatchConnectivityListener, MNServiceControllable> {

	MNWatchDataServiceInjector* _injector;
	MNWatchDataWriterCoordinator* _dataWriterCoordinator;
	MNWatchThreadViewModelWriter* _threadViewModelWriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_setUpThreadListViewModelWriter;
-(void)_setUpGlobalThreadListening;
-(void)_didUpdateAppContext:(id)arg1 ;
-(void)_setUpStickerCollectionWriter;
-(void)_tearDownThreadListViewModelWriter;
-(void)_tearDownThreadViewModelWriter;
-(void)_tearDownGlobalThreadListening;
-(void)_tearDownStickerCollectionWriter;
-(void)_setUpActiveThreadListening;
-(void)_tearDownActiveThreadListening;
-(void)_activeThreadKeyDidChangeTo:(id)arg1 ;
-(void)_setUpThreadViewModelWriterWithThreadKey:(id)arg1 ;
-(void)reachabilityDidChangeTo:(BOOL)arg1 ;
-(void)watchStateDidChange;
-(void)didReceiveMessage:(id)arg1 withFileURL:(id)arg2 ;
-(void)didUpdateAppContext:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
