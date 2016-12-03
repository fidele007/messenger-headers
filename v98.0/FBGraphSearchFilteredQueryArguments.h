/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString, NSNumber, FBGraphSearchReplay, FBReactionContextQueryParams, FBNativeTemplateContextData, FBGraphSearchSecondRequest;

@interface FBGraphSearchFilteredQueryArguments : FBGraphQLInput {

	NSArray* _filters;
	NSString* _vertical;
	NSString* _match;
	NSString* _sort;
	NSString* _callsite;
	NSArray* _supportedExperiences;
	NSArray* _moduleSizes;
	NSArray* _supportedRoles;
	NSNumber* _promotedEntity;
	FBGraphSearchReplay* _replay;
	NSString* _isPageSizeSuggestive;
	FBReactionContextQueryParams* _reactionContext;
	NSString* _shouldReturnTopIndependentModulesOnly;
	NSString* _areTopIndependentModulesAlreadyShown;
	NSString* _tsid;
	NSString* _bsid;
	NSString* _updateActivityLog;
	NSString* _querySource;
	NSString* _firstUnitOnly;
	FBNativeTemplateContextData* _ntContext;
	NSString* _independentModuleOrFirstUnit;
	FBGraphSearchSecondRequest* _secondRequest;
	NSArray* _preloadedEntityIds;
	NSArray* _preloadedStoryIds;

}

@property (nonatomic,copy) NSArray * filters;                                             //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy) NSString * vertical;                                           //@synthesize vertical=_vertical - In the implementation block
@property (nonatomic,copy) NSString * match;                                              //@synthesize match=_match - In the implementation block
@property (nonatomic,copy) NSString * sort;                                               //@synthesize sort=_sort - In the implementation block
@property (nonatomic,copy) NSString * callsite;                                           //@synthesize callsite=_callsite - In the implementation block
@property (nonatomic,copy) NSArray * supportedExperiences;                                //@synthesize supportedExperiences=_supportedExperiences - In the implementation block
@property (nonatomic,copy) NSArray * moduleSizes;                                         //@synthesize moduleSizes=_moduleSizes - In the implementation block
@property (nonatomic,copy) NSArray * supportedRoles;                                      //@synthesize supportedRoles=_supportedRoles - In the implementation block
@property (nonatomic,copy) NSNumber * promotedEntity;                                     //@synthesize promotedEntity=_promotedEntity - In the implementation block
@property (nonatomic,copy) FBGraphSearchReplay * replay;                                  //@synthesize replay=_replay - In the implementation block
@property (nonatomic,copy) NSString * isPageSizeSuggestive;                               //@synthesize isPageSizeSuggestive=_isPageSizeSuggestive - In the implementation block
@property (nonatomic,copy) FBReactionContextQueryParams * reactionContext;                //@synthesize reactionContext=_reactionContext - In the implementation block
@property (nonatomic,copy) NSString * shouldReturnTopIndependentModulesOnly;              //@synthesize shouldReturnTopIndependentModulesOnly=_shouldReturnTopIndependentModulesOnly - In the implementation block
@property (nonatomic,copy) NSString * areTopIndependentModulesAlreadyShown;               //@synthesize areTopIndependentModulesAlreadyShown=_areTopIndependentModulesAlreadyShown - In the implementation block
@property (nonatomic,copy) NSString * tsid;                                               //@synthesize tsid=_tsid - In the implementation block
@property (nonatomic,copy) NSString * bsid;                                               //@synthesize bsid=_bsid - In the implementation block
@property (nonatomic,copy) NSString * updateActivityLog;                                  //@synthesize updateActivityLog=_updateActivityLog - In the implementation block
@property (nonatomic,copy) NSString * querySource;                                        //@synthesize querySource=_querySource - In the implementation block
@property (nonatomic,copy) NSString * firstUnitOnly;                                      //@synthesize firstUnitOnly=_firstUnitOnly - In the implementation block
@property (nonatomic,copy) FBNativeTemplateContextData * ntContext;                       //@synthesize ntContext=_ntContext - In the implementation block
@property (nonatomic,copy) NSString * independentModuleOrFirstUnit;                       //@synthesize independentModuleOrFirstUnit=_independentModuleOrFirstUnit - In the implementation block
@property (nonatomic,copy) FBGraphSearchSecondRequest * secondRequest;                    //@synthesize secondRequest=_secondRequest - In the implementation block
@property (nonatomic,copy) NSArray * preloadedEntityIds;                                  //@synthesize preloadedEntityIds=_preloadedEntityIds - In the implementation block
@property (nonatomic,copy) NSArray * preloadedStoryIds;                                   //@synthesize preloadedStoryIds=_preloadedStoryIds - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBReactionContextQueryParams *)reactionContext;
-(void)setReactionContext:(FBReactionContextQueryParams *)arg1 ;
-(NSString *)callsite;
-(void)setCallsite:(NSString *)arg1 ;
-(NSArray *)supportedExperiences;
-(void)setSupportedExperiences:(NSArray *)arg1 ;
-(NSArray *)moduleSizes;
-(void)setModuleSizes:(NSArray *)arg1 ;
-(NSArray *)supportedRoles;
-(void)setSupportedRoles:(NSArray *)arg1 ;
-(NSNumber *)promotedEntity;
-(void)setPromotedEntity:(NSNumber *)arg1 ;
-(FBGraphSearchReplay *)replay;
-(void)setReplay:(FBGraphSearchReplay *)arg1 ;
-(NSString *)isPageSizeSuggestive;
-(void)setIsPageSizeSuggestive:(NSString *)arg1 ;
-(NSString *)shouldReturnTopIndependentModulesOnly;
-(void)setShouldReturnTopIndependentModulesOnly:(NSString *)arg1 ;
-(NSString *)areTopIndependentModulesAlreadyShown;
-(void)setAreTopIndependentModulesAlreadyShown:(NSString *)arg1 ;
-(NSString *)tsid;
-(void)setTsid:(NSString *)arg1 ;
-(NSString *)bsid;
-(void)setBsid:(NSString *)arg1 ;
-(NSString *)updateActivityLog;
-(void)setUpdateActivityLog:(NSString *)arg1 ;
-(NSString *)querySource;
-(void)setQuerySource:(NSString *)arg1 ;
-(NSString *)firstUnitOnly;
-(void)setFirstUnitOnly:(NSString *)arg1 ;
-(FBNativeTemplateContextData *)ntContext;
-(void)setNtContext:(FBNativeTemplateContextData *)arg1 ;
-(NSString *)independentModuleOrFirstUnit;
-(void)setIndependentModuleOrFirstUnit:(NSString *)arg1 ;
-(FBGraphSearchSecondRequest *)secondRequest;
-(void)setSecondRequest:(FBGraphSearchSecondRequest *)arg1 ;
-(NSArray *)preloadedEntityIds;
-(void)setPreloadedEntityIds:(NSArray *)arg1 ;
-(NSArray *)preloadedStoryIds;
-(void)setPreloadedStoryIds:(NSArray *)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)setVertical:(NSString *)arg1 ;
-(NSString *)sort;
-(void)setSort:(NSString *)arg1 ;
-(NSString *)vertical;
-(void)setMatch:(NSString *)arg1 ;
-(NSString *)match;
@end

