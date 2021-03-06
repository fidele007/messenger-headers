/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDiskCacheProtocol;
#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBGraphQLConnectionPersistenceCoordinatorConfigurationBuilder : NSObject {

	id<FBDiskCacheProtocol> _diskCache;
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
-(id)withPersistenceDelay:(double)arg1 ;
-(id)withSynchronousInitialPageLoad:(BOOL)arg1 ;
-(id)withRestoredEdgeFilter:(/*^block*/id)arg1 ;
-(id)withIncludeUpdates:(BOOL)arg1 ;
-(id)withDeferredLoad:(BOOL)arg1 ;
-(id)withStreamingLoad:(BOOL)arg1 ;
-(id)withQuickLoggingEnabled_DO_NOT_USE:(BOOL)arg1 ;
-(id)build;
@end

