/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionStoreEdgeFiltering.h>

@protocol FBGraphQLConnectionSyncStoreFilter;
@class NSObject, NSString;

@interface FBGraphQLConnectionSyncStoreEdgeFilter : NSObject <FBGraphQLConnectionStoreEdgeFiltering> {

	NSObject*<FBGraphQLConnectionSyncStoreFilter> _filter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldFilterNode:(id)arg1 ;
-(id)initWithConnectionSyncStoreFilter:(id)arg1 ;
-(id)filteredEdgesFromEdgesToBeAdded:(id)arg1 state:(id)arg2 ;
-(/*^block*/id)filterPredicate;
@end

