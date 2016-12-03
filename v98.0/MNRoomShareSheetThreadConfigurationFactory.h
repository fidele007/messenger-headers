/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@protocol FBCancelable;
@class MNRoomShareSheetThreadConfigurationFactoryInjector, NSString;

@interface MNRoomShareSheetThreadConfigurationFactory : NSObject <FBClassInjectable> {

	MNRoomShareSheetThreadConfigurationFactoryInjector* _injector;
	id<FBCancelable> _currentThreadStoreRequestCancelable;
	unsigned long long _currentUserRequestId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)roomShareSheetThreadConfigurationWithGroupThreadKey:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)roomShareSheetThreadConfigurationWithThreadViewModel:(id)arg1 ;
-(void)_handleThreadSummaryFetchSuccess:(id)arg1 groupThreadKey:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_fetchThreadSummaryForGroupThreadKey:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_handleUserFetchSuccess:(id)arg1 forThreadSummary:(id)arg2 success:(/*^block*/id)arg3 ;
-(void)_resetUserStoreRequest;
-(void)_handleUserStoreFetchFailure:(id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_fetchUsersOfThreadSummary:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_resetThreadStoreRequest;
-(void)roomShareSheetThreadConfigurationWithThreadSummary:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

