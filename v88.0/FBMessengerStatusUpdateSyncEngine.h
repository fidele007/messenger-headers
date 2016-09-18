/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSyncEngine.h>
#import <Messenger/FBMessengerStatusUpdateFetchListener.h>

@protocol FBMessengerStatusUpdateFetcher, FBSyncEngineDelegate;
@class NSString;

@interface FBMessengerStatusUpdateSyncEngine : NSObject <FBSyncEngine, FBMessengerStatusUpdateFetchListener> {

	BOOL _hasOutstandingFetch;
	id<FBMessengerStatusUpdateFetcher> _messengerStatusUpdateFetcher;
	id<FBSyncEngineDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<FBSyncEngineDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)syncUsersWithPreviousSyncSummary:(id)arg1 ;
-(void)forceUserSyncWithPreviousSyncSummary:(id)arg1 ;
-(id)initWithMessengerStatusUpdateFetcher:(id)arg1 ;
-(void)fetchedMessengerStatusUpdates:(id)arg1 ;
-(void)failedToFetchMessengerStatusUpdates;
-(void)setDelegate:(id<FBSyncEngineDelegate>)arg1 ;
-(id<FBSyncEngineDelegate>)delegate;
-(void)cancelSync;
@end
