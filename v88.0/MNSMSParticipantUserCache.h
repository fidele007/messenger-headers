/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSMSParticipantUserCacheFetching.h>
#import <Messenger/MNUserStoreExternalUserUpdateListening.h>
#import <Messenger/MNParticipantUserCacheDiskHandlerListener.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, FBAnalytics, MNParticipantUserCacheDiskHandler, NSObject, FBMIndexedUserSet, NSMutableArray, NSString;

@interface MNSMSParticipantUserCache : NSObject <MNSMSParticipantUserCacheFetching, MNUserStoreExternalUserUpdateListening, MNParticipantUserCacheDiskHandlerListener> {

	NSMutableDictionary* _usersByNumber;
	FBAnalytics* _analytics;
	MNParticipantUserCacheDiskHandler* _diskHandler;
	NSObject*<OS_dispatch_queue> _updateQueue;
	FBMIndexedUserSet* _usersByUserId;
	NSMutableArray* _completionBlockArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)allUsersWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)userByPhoneNumber:(id)arg1 ;
-(void)didFinishNetworkFetchOfUsers:(id)arg1 ;
-(void)didInvalidateUsersWithIds:(id)arg1 ;
-(void)didInvalidateAllUsers;
-(void)_scheduleSaveToDisk;
-(void)diskHandlerDidCompleteUserLoadFromDisk:(id)arg1 ;
-(void)diskHandlerDidCompleteWriteInformationToDisk:(id)arg1 ;
-(id)initWithDiskHandler:(id)arg1 analytics:(id)arg2 listeningQueue:(id)arg3 ;
-(void)_parseUserSet:(id)arg1 ;
@end
