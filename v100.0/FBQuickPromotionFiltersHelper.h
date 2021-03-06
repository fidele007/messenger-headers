/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary, NSDictionary;

@interface FBQuickPromotionFiltersHelper : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _filterOverrideMap;
	NSDictionary* _filterKeyClassMap;

}

@property (nonatomic,copy) NSDictionary * filterKeyClassMap;              //@synthesize filterKeyClassMap=_filterKeyClassMap - In the implementation block
+(id)_registeredFilters;
-(id)_filterFromJson:(id)arg1 withPromotion:(id)arg2 ;
-(BOOL)checkFilter:(id)arg1 withContext:(id)arg2 withDebugInfo:(id*)arg3 ;
-(int)filterOverrideForFilterTypeKey:(id)arg1 ;
-(id)overrideStringWithEnum:(int)arg1 ;
-(id)filtersFromJSON:(id)arg1 withPromotion:(id)arg2 ;
-(BOOL)checkAllFiltersForPromotion:(id)arg1 withContext:(id)arg2 withDebugInfo:(id*)arg3 ;
-(void)resetFilterOverrides;
-(void)setFilterOverrideForFilterTypeKey:(id)arg1 override:(int)arg2 ;
-(NSDictionary *)filterKeyClassMap;
-(void)setFilterKeyClassMap:(NSDictionary *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

