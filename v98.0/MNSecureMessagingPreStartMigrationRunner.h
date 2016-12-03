/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBMigrationRunner, FBUserSession, NSString, FBAnalytics, NSObject;

@interface MNSecureMessagingPreStartMigrationRunner : NSObject {

	FBMigrationRunner* _runner;
	FBUserSession* _session;
	NSString* _appGroup;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithMigrationRunner:(id)arg1 session:(id)arg2 appGroup:(id)arg3 analytics:(id)arg4 queue:(id)arg5 ;
-(void)runPreStartMigrationWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_logMigrationError:(id)arg1 identifier:(id)arg2 ;
@end

