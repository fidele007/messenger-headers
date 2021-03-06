/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDExperimentalDiskCache;
#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBGraphQLConnectionPersistenceCoordinatorConfigurationBuilder : NSObject {

	id<CDExperimentalDiskCache> _diskCache;
	NSString* _uniqueIdentifier;
	const FBGraphQLFieldSetRef _fieldSet;
	long long _countLimit;
	/*^block*/id _restoredEdgeFilter;
	double _persistenceDelay;
	BOOL _includeUpdates;
	BOOL _synchronouseInitialPageLoad;
	BOOL _deferredLoad;
	BOOL _streamingLoad;
	BOOL _quickLoggingEnabled;

}
-(id)initWithDiskCache:(id)arg1 uniqueIdentifier:(id)arg2 fieldSet:(const FBGraphQLFieldSetRef)arg3 ;
-(id)withCountLimit:(long long)arg1 ;
-(id)withRestoredEdgeFilter:(/*^block*/id)arg1 ;
-(id)withPersistenceDelay:(double)arg1 ;
-(id)withSynchronousInitialPageLoad:(BOOL)arg1 ;
-(id)withDeferredLoad:(BOOL)arg1 ;
-(id)withStreamingLoad:(BOOL)arg1 ;
-(id)withQuickLoggingEnabled_DO_NOT_USE:(BOOL)arg1 ;
-(id)withIncludeUpdates:(BOOL)arg1 ;
-(id)build;
@end

