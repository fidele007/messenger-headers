/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAvatarProtocol;
@class NSString, NSMutableArray, NSArray, FBUserSession, NSDictionary, FBMemModelObject;

@interface FBSearchTypeaheadSessionStatus : NSObject {

	BOOL _hasUserChangedOrClearedSearchBoxInSingleState;
	BOOL _nullStateDidScroll;
	BOOL _scopedSearchTabbedSearchScopedMode;
	NSString* _enteredText;
	NSString* _singleStateString;
	NSString* _typeaheadSid;
	NSString* _candidateSid;
	unsigned long long _searchSessionStartTime;
	long long _keyPresses;
	long long _backspacePresses;
	NSMutableArray* _impressions;
	NSArray* _impressionsInitialStateNullState;
	NSArray* _impressionsInitialStateSingleState;
	FBUserSession* _session;
	NSDictionary* _nullStateExtraLoggingData;
	unsigned long long _inputType;
	unsigned long long _filterType;
	unsigned long long _queryInputType;
	double _nullStateTimeSpent;
	FBMemModelObject*<FBAvatarProtocol> _scopedSearchScopeEntity;
	unsigned long long _typeaheadShownKeywordsOnTopQueryLength;
	unsigned long long _unlockedKeywordSuggestionBucketSize;
	NSString* _lastQueryFormationText;
	long long _lastQueryFormationPosition;
	long long _queryFormationPresses;

}

@property (nonatomic,copy) NSString * enteredText;                                                     //@synthesize enteredText=_enteredText - In the implementation block
@property (nonatomic,copy) NSString * singleStateString;                                               //@synthesize singleStateString=_singleStateString - In the implementation block
@property (assign,nonatomic) BOOL hasUserChangedOrClearedSearchBoxInSingleState;                       //@synthesize hasUserChangedOrClearedSearchBoxInSingleState=_hasUserChangedOrClearedSearchBoxInSingleState - In the implementation block
@property (nonatomic,copy) NSString * typeaheadSid;                                                    //@synthesize typeaheadSid=_typeaheadSid - In the implementation block
@property (nonatomic,copy) NSString * candidateSid;                                                    //@synthesize candidateSid=_candidateSid - In the implementation block
@property (assign,nonatomic) unsigned long long searchSessionStartTime;                                //@synthesize searchSessionStartTime=_searchSessionStartTime - In the implementation block
@property (assign,nonatomic) long long keyPresses;                                                     //@synthesize keyPresses=_keyPresses - In the implementation block
@property (assign,nonatomic) long long backspacePresses;                                               //@synthesize backspacePresses=_backspacePresses - In the implementation block
@property (nonatomic,readonly) NSMutableArray * impressions;                                           //@synthesize impressions=_impressions - In the implementation block
@property (nonatomic,copy) NSArray * impressionsInitialStateNullState;                                 //@synthesize impressionsInitialStateNullState=_impressionsInitialStateNullState - In the implementation block
@property (nonatomic,copy) NSArray * impressionsInitialStateSingleState;                               //@synthesize impressionsInitialStateSingleState=_impressionsInitialStateSingleState - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSDictionary * nullStateExtraLoggingData;                                   //@synthesize nullStateExtraLoggingData=_nullStateExtraLoggingData - In the implementation block
@property (assign,nonatomic) unsigned long long inputType;                                             //@synthesize inputType=_inputType - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                                            //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) unsigned long long queryInputType;                                        //@synthesize queryInputType=_queryInputType - In the implementation block
@property (assign,nonatomic) double nullStateTimeSpent;                                                //@synthesize nullStateTimeSpent=_nullStateTimeSpent - In the implementation block
@property (assign,nonatomic) BOOL nullStateDidScroll;                                                  //@synthesize nullStateDidScroll=_nullStateDidScroll - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> scopedSearchScopeEntity;              //@synthesize scopedSearchScopeEntity=_scopedSearchScopeEntity - In the implementation block
@property (assign,nonatomic) BOOL scopedSearchTabbedSearchScopedMode;                                  //@synthesize scopedSearchTabbedSearchScopedMode=_scopedSearchTabbedSearchScopedMode - In the implementation block
@property (assign,nonatomic) unsigned long long typeaheadShownKeywordsOnTopQueryLength;                //@synthesize typeaheadShownKeywordsOnTopQueryLength=_typeaheadShownKeywordsOnTopQueryLength - In the implementation block
@property (assign,nonatomic) unsigned long long unlockedKeywordSuggestionBucketSize;                   //@synthesize unlockedKeywordSuggestionBucketSize=_unlockedKeywordSuggestionBucketSize - In the implementation block
@property (nonatomic,copy) NSString * lastQueryFormationText;                                          //@synthesize lastQueryFormationText=_lastQueryFormationText - In the implementation block
@property (assign,nonatomic) long long lastQueryFormationPosition;                                     //@synthesize lastQueryFormationPosition=_lastQueryFormationPosition - In the implementation block
@property (assign,nonatomic) long long queryFormationPresses;                                          //@synthesize queryFormationPresses=_queryFormationPresses - In the implementation block
-(NSString *)enteredText;
-(void)setEnteredText:(NSString *)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)scopedSearchScopeEntity;
-(unsigned long long)typeaheadShownKeywordsOnTopQueryLength;
-(void)setTypeaheadShownKeywordsOnTopQueryLength:(unsigned long long)arg1 ;
-(BOOL)scopedSearchTabbedSearchScopedMode;
-(void)updateCandidateSessionIdentifier;
-(unsigned long long)unlockedKeywordSuggestionBucketSize;
-(NSString *)typeaheadSid;
-(NSString *)singleStateString;
-(BOOL)hasUserChangedOrClearedSearchBoxInSingleState;
-(void)setCandidateSid:(NSString *)arg1 ;
-(void)setSingleStateString:(NSString *)arg1 ;
-(void)setHasUserChangedOrClearedSearchBoxInSingleState:(BOOL)arg1 ;
-(void)setTypeaheadSid:(NSString *)arg1 ;
-(NSString *)candidateSid;
-(unsigned long long)searchSessionStartTime;
-(void)setSearchSessionStartTime:(unsigned long long)arg1 ;
-(long long)keyPresses;
-(void)setKeyPresses:(long long)arg1 ;
-(long long)backspacePresses;
-(void)setBackspacePresses:(long long)arg1 ;
-(NSArray *)impressionsInitialStateNullState;
-(void)setImpressionsInitialStateNullState:(NSArray *)arg1 ;
-(NSArray *)impressionsInitialStateSingleState;
-(void)setImpressionsInitialStateSingleState:(NSArray *)arg1 ;
-(NSDictionary *)nullStateExtraLoggingData;
-(void)setNullStateExtraLoggingData:(NSDictionary *)arg1 ;
-(void)setInputType:(unsigned long long)arg1 ;
-(unsigned long long)queryInputType;
-(void)setQueryInputType:(unsigned long long)arg1 ;
-(double)nullStateTimeSpent;
-(void)setNullStateTimeSpent:(double)arg1 ;
-(BOOL)nullStateDidScroll;
-(void)setNullStateDidScroll:(BOOL)arg1 ;
-(void)setScopedSearchScopeEntity:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(void)setScopedSearchTabbedSearchScopedMode:(BOOL)arg1 ;
-(void)setUnlockedKeywordSuggestionBucketSize:(unsigned long long)arg1 ;
-(NSString *)lastQueryFormationText;
-(void)setLastQueryFormationText:(NSString *)arg1 ;
-(long long)lastQueryFormationPosition;
-(void)setLastQueryFormationPosition:(long long)arg1 ;
-(long long)queryFormationPresses;
-(void)setQueryFormationPresses:(long long)arg1 ;
-(NSMutableArray *)impressions;
-(id)init;
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(unsigned long long)inputType;
@end
