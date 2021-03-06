/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFriendListModelControllerDelegate.h>
#import <Messenger/MNFriendListModelController.h>

@protocol MNFriendListModelControllerDelegate;
@class FBMessengerSyncEngineManager, FBFriendListModelController, NSString;

@interface MNSyncEngineFriendListModelController : NSObject <FBFriendListModelControllerDelegate, MNFriendListModelController> {

	id<MNFriendListModelControllerDelegate> _delegate;
	FBMessengerSyncEngineManager* _syncEngineManager;
	unsigned long long _type;
	FBFriendListModelController* _friendListModelController;
	int _fetchLimit;
	BOOL _started;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startRequestWithType:(unsigned long long)arg1 sortField:(unsigned long long)arg2 fetchLimit:(int)arg3 delegate:(id)arg4 ;
-(id)initWithSyncEngineManager:(id)arg1 ;
-(id)searchOperationForSyncStore:(id)arg1 sortField:(unsigned long long)arg2 ;
-(void)modelController:(id)arg1 didCompleteSearchOperationReturningPeople:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(BOOL)isStarted;
@end

