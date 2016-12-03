/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNContactSearchResultSource.h>

@protocol MNThreadSummaryCacheReading, OS_dispatch_queue;
@class MNUserProvider, NSObject, MNUserStore, NSString;

@interface MNContactSearchInboxCacheResultSource : NSObject <FBClassProvidable, MNContactSearchResultSource> {

	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	MNUserProvider* _userProvider;
	NSObject*<OS_dispatch_queue> _queue;
	MNUserStore* _userStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startWithQueue:(id)arg1 ;
-(void)_cancelUserStoreRequest:(unsigned long long)arg1 ;
-(id)initWithThreadSummaryCacheReader:(id)arg1 userProvider:(id)arg2 ;
-(void)_performQuery:(id)arg1 throughSearchResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fetchUsersForParticipantsInSummaries:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)performSearchWithQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
