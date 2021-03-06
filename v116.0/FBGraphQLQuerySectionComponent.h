/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCompositeSectionComponent.h>

@class FBSectionComponentToolbox, FBGraphQLQueryBuilder;

@interface FBGraphQLQuerySectionComponent : FBCompositeSectionComponent {

	FBSectionComponentToolbox* _toolbox;
	FBGraphQLQueryBuilder* _queryBuilder;
	function<FBSectionComponent *(id)>* _loading;
	function<FBSectionComponent *(id, facebook::mobile::graphstore::FBTree)>* _content;
	function<FBSectionComponent *(id, NSError *, facebook::mobile::graphstore::FBTree)>* _failure;
	FBGraphQLQuerySectionComponentConfiguration _configuration;

}

@property (nonatomic,readonly) FBSectionComponentToolbox * toolbox;                                  //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBGraphQLQueryBuilder * queryBuilder;                                 //@synthesize queryBuilder=_queryBuilder - In the implementation block
@property (nonatomic,readonly) function<FBSectionComponent *(id)>* loading;                          //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) function<FBSectionComponent *(id content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) function<FBSectionComponent *(id failure;                             //@synthesize failure=_failure - In the implementation block
@property (assign,nonatomic) FBGraphQLQuerySectionComponentConfiguration configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)newWithConfiguration:(FBGraphQLQuerySectionComponentConfiguration)arg1 toolbox:(id)arg2 queryBuilder:(id)arg3 loadingProvider:(function<FBSectionComponent *(id)>*)arg4 contentProvider:(function<FBSectionComponent *(id, facebook::mobile::graphstore::FBTree)>*)arg5 failureProvider:(function<FBSectionComponent *(id, NSError *, facebook::mobile::graphstore::FBTree)>*)arg6 ;
+(id)initialState;
-(FBSectionComponentToolbox *)toolbox;
-(function<FBSectionComponent *(id)failure;
-(FBGraphQLQueryBuilder *)queryBuilder;
-(function<FBSectionComponent *(id)content;
-(void)setConfiguration:(FBGraphQLQuerySectionComponentConfiguration)arg1 ;
-(FBGraphQLQuerySectionComponentConfiguration)configuration;
-(function<FBSectionComponent *(id)>*)loading;
@end

