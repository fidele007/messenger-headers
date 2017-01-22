/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadUpdateRunnerListening.h>

@protocol MNThreadUpdateRunnerListening, OS_dispatch_queue;
@class NSArray, NSMutableArray, NSObject, NSString;

@interface MNThreadBatchUpdateResponseAggregator : NSObject <MNThreadUpdateRunnerListening> {

	NSArray* _updates;
	NSMutableArray* _results;
	id<MNThreadUpdateRunnerListening> _listener;
	/*^block*/id _batchCompleteBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willRunThreadClientUpdate:(id)arg1 ;
-(void)didCompleteThreadClientUpdate:(id)arg1 ;
-(void)didFailThreadClientUpdate:(id)arg1 error:(id)arg2 ;
-(id)initWithUpdates:(id)arg1 targetListener:(id)arg2 queue:(id)arg3 allUpdatesCompleteBlock:(/*^block*/id)arg4 ;
@end
