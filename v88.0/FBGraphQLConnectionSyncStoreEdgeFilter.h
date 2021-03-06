/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(id)filteredEdgesFromEdgesToBeAdded:(id)arg1 atChunkIndex:(unsigned long long)arg2 state:(id)arg3 locationType:(unsigned long long)arg4 ;
-(BOOL)shouldFilterNode:(id)arg1 ;
-(id)initWithConnectionSyncStoreFilter:(id)arg1 ;
-(/*^block*/id)filterPredicate;
@end

