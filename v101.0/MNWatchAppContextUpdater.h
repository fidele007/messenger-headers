/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNWatchConnectivityListener.h>
#import <Messenger/MNWatchDefaultRepliesListener.h>

@class MNWatchConnectivityManager, MNWatchDefaultRepliesUpdater, MNWSession, NSString;

@interface MNWatchAppContextUpdater : NSObject <MNWatchConnectivityListener, MNWatchDefaultRepliesListener> {

	MNWatchConnectivityManager* _watchConnectivityManager;
	MNWatchDefaultRepliesUpdater* _watchDefaultRepliesUpdater;
	MNWSession* _watchSession;

}

@property (nonatomic,copy) MNWSession * watchSession;               //@synthesize watchSession=_watchSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateDefaultReplies:(id)arg1 ;
-(void)_sessionDidUpdate:(id)arg1 ;
-(void)_didUpdateWithSession:(id)arg1 ;
-(MNWSession *)watchSession;
-(void)setWatchSession:(MNWSession *)arg1 ;
-(void)_updateAppContextIfNeeded;
-(id)initWithWatchConnectivityManager:(id)arg1 watchDefaultRepliesUpdater:(id)arg2 ;
-(void)startWithInitialSession:(id)arg1 ;
-(void)reachabilityDidChangeTo:(BOOL)arg1 ;
-(void)watchStateDidChange;
-(void)didReceiveMessage:(id)arg1 withFileURL:(id)arg2 ;
-(void)didUpdateAppContext:(id)arg1 ;
-(void)dealloc;
@end

