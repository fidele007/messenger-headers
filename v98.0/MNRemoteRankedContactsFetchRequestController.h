/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNRemoteRankedContactsFetchRequestControllerInjector, NSMutableSet, NSString;

@interface MNRemoteRankedContactsFetchRequestController : NSObject <FBClassInjectable> {

	MNRemoteRankedContactsFetchRequestControllerInjector* _injector;
	NSMutableSet* _transactionTokensSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)fetchRemoteRankedContactsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_didFailWithError:(id)arg1 forTransaction:(id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_didReceiveGraphQLResponse:(id)arg1 forTransaction:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)_invalidateTransaction:(id)arg1 ;
@end

