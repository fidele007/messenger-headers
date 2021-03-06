/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureThreadListRequestHandling.h>

@protocol MNSecureThreadReading, OS_dispatch_queue;
@class FBAnalytics, NSObject, NSString;

@interface MNSecureThreadListRequestHandler : NSObject <MNSecureThreadListRequestHandling> {

	id<MNSecureThreadReading> _secureThreadReader;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleResult:(id)arg1 forRequest:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleSecureThreadListRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSecureThreadReader:(id)arg1 analytics:(id)arg2 queue:(id)arg3 ;
@end

