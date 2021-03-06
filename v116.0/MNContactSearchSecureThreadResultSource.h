/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSearchResultSource.h>

@protocol MNSecureThreadReading, MNContactSearchResultSource, OS_dispatch_queue;
@class NSObject, NSString;

@interface MNContactSearchSecureThreadResultSource : NSObject <MNContactSearchResultSource> {

	id<MNSecureThreadReading> _secureThreadReader;
	id<MNContactSearchResultSource> _backingSource;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsResultSourceType;
-(id)performSearchWithQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSecureThreadCacheReader:(id)arg1 backingSource:(id)arg2 ;
-(id)_backingSourceFinishedWithResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_secureThreadReaderFinishedWithResult:(id)arg1 forPeople:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startWithQueue:(id)arg1 ;
@end

