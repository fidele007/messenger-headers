/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessagingStoreDatabaseLifetimeEventListening.h>

@protocol OS_dispatch_queue;
@class FBDelayer, NSObject, NSString;

@interface FBMessagingStoreDatabaseOpenedDelayer : NSObject <FBMessagingStoreDatabaseLifetimeEventListening> {

	FBDelayer* _delayer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didOpenDatabase;
-(void)didFailToOpenDatabaseWithError:(id)arg1 ;
-(void)didCreateDatabaseTables;
-(void)didDiscardDatabaseFile;
-(void)willDiscardDatabaseContents;
-(id)initForQueue:(id)arg1 ;
-(void)executeAfterMessagingStoreOpened:(/*^block*/id)arg1 ;
@end

