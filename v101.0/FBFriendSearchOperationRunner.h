/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSyncStorePersonSearchOperation, NSOperationQueue;

@interface FBFriendSearchOperationRunner : NSObject {

	FBSyncStorePersonSearchOperation* _currentlyRunningOperation;
	NSOperationQueue* _operationQueue;

}
-(void)_processOperationResult:(id)arg1 completedBlock:(/*^block*/id)arg2 ;
-(void)runPersonSearchOperation:(id)arg1 completedBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)initWithOperationQueue:(id)arg1 ;
@end

