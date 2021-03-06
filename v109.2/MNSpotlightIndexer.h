/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex, FBAnalytics;

@interface MNSpotlightIndexer : NSObject {

	CSSearchableIndex* _searchableIndex;
	FBAnalytics* _analytics;
	BOOL _closed;

}
-(id)initWithSearchableIndex:(id)arg1 analytics:(id)arg2 ;
-(void)indexSearchableItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_completeIndexSearchableItems:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)indexSearchableItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteIndexesWithIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)clearIndexWithDomainIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)clearAndCloseIndexWithCompletionBlock:(/*^block*/id)arg1 ;
@end

