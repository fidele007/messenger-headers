/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface FBSearchResultsFilterer : NSObject {

	NSMutableSet* _idsToFilter;

}
-(void)clearFilteredIds;
-(void)addFilteredIds:(id)arg1 ;
-(id)filterContactResults:(id)arg1 ;
-(BOOL)shouldFilterId:(id)arg1 ;
-(id)filterGroupResults:(id)arg1 ;
-(id)init;
@end

