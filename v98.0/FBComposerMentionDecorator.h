/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/FBMemAvatarTaggingSearchProviderDelegate.h>

@protocol FBComposerMentionDecoratorDelegate, FBAvatarTaggingSearchProviderProtocol;
@class NSArray, FBSearchTableViewData, NSMutableArray, NSString, UITableView, UICollectionView, FBNetworkErrorBar, UIActivityIndicatorView, NSMutableDictionary, NSDictionary, FBComposerMentionDecoratorListenerAnnouncer, FBTagAnyoneSearchProvider, FBUserSession;

@interface FBComposerMentionDecorator : NSObject <UITableViewDelegate, UITableViewDataSource, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, FBMemAvatarTaggingSearchProviderDelegate> {

	NSArray* _suggestedMentions;
	FBSearchTableViewData* _tableMentions;
	NSRange _inProgressRange;
	NSMutableArray* _mentions;
	NSRange _changedRange;
	NSString* _changedText;
	NSString* _previousFullText;
	NSString* _expectedFullText;
	NSString* _mentionalizeTriggerText;
	BOOL _skipNextMentionEdit;
	BOOL _mentionalizeOnPrefixChar;
	BOOL _skipShouldChangeLogicOnHighlight;
	int _searchCookie;
	NSRange _progressiveStartRange;
	UITableView* _tableView;
	UICollectionView* _collectionView;
	FBNetworkErrorBar* _networkErrorBar;
	UIActivityIndicatorView* _loadingIndicatorView;
	NSMutableDictionary* _mentionLayersByGraphQLID;
	NSMutableArray* _impressions;
	NSString* _mentionsSessionID;
	unsigned long long _keypressCount;
	unsigned long long _endSessionReason;
	NSDictionary* _clickEvent;
	NSArray* _collectionSearchProviderResults;
	NSArray* _tagAnyoneSearchProviderResults;
	unsigned long long _loadingState;
	id<FBComposerMentionDecoratorDelegate> _delegate;
	FBComposerMentionDecoratorListenerAnnouncer* _listenerAnnouncer;
	id<FBAvatarTaggingSearchProviderProtocol> _searchProvider;
	FBTagAnyoneSearchProvider* _tagAnyoneSearchProvider;
	FBUserSession* _session;
	NSString* _inProgressMentionText;

}

@property (nonatomic,copy) NSString * changedText;                                                           //@synthesize changedText=_changedText - In the implementation block
@property (nonatomic,copy) NSString * previousFullText;                                                      //@synthesize previousFullText=_previousFullText - In the implementation block
@property (nonatomic,copy) NSString * expectedFullText;                                                      //@synthesize expectedFullText=_expectedFullText - In the implementation block
@property (nonatomic,copy) NSString * inProgressMentionText;                                                 //@synthesize inProgressMentionText=_inProgressMentionText - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerMentionDecoratorDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBComposerMentionDecoratorListenerAnnouncer * listenerAnnouncer;              //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
@property (nonatomic,retain) id<FBAvatarTaggingSearchProviderProtocol> searchProvider;                       //@synthesize searchProvider=_searchProvider - In the implementation block
@property (nonatomic,retain) FBTagAnyoneSearchProvider * tagAnyoneSearchProvider;                            //@synthesize tagAnyoneSearchProvider=_tagAnyoneSearchProvider - In the implementation block
@property (assign,nonatomic) BOOL mentionalizeOnPrefixChar;                                                  //@synthesize mentionalizeOnPrefixChar=_mentionalizeOnPrefixChar - In the implementation block
@property (nonatomic,copy,readonly) NSArray * committedMentions; 
@property (nonatomic,readonly) BOOL isProgressiveMentionalizing; 
@property (nonatomic,readonly) FBUserSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCustomCellSelectionColor:(id)arg1 ;
-(id)analyticsModule;
-(id)_searchText;
-(FBComposerMentionDecoratorListenerAnnouncer *)listenerAnnouncer;
-(NSArray *)committedMentions;
-(BOOL)isFetchingResults;
-(void)setChangedText:(NSString *)arg1 ;
-(void)setExpectedFullText:(NSString *)arg1 ;
-(BOOL)_isExplicitMention;
-(void)stopProgressiveMentionalizingWithEndReason:(unsigned long long)arg1 ;
-(NSString *)inProgressMentionText;
-(BOOL)isProgressiveMentionalizing;
-(void)setPreviousFullText:(NSString *)arg1 ;
-(NSString *)previousFullText;
-(NSRange)_detectChangedRangeIn:(id)arg1 from:(id)arg2 probableChangeEnd:(unsigned long long)arg3 replacedText:(id*)arg4 replacedRange:(NSRange*)arg5 ;
-(void)mentionalizeProgressivelyAtCursorInTextView:(id)arg1 ;
-(id)_findMentionsWithRange:(NSRange)arg1 ;
-(void)_removeMention:(id)arg1 ;
-(void)_updateMentionHighlights:(id)arg1 inTextView:(id)arg2 ;
-(BOOL)_shouldStartMentionalizeProgressively:(id)arg1 ;
-(void)refreshMentionsInTextView:(id)arg1 ;
-(void)_mentionalizeRange:(NSRange)arg1 inText:(id)arg2 ;
-(void)_replaceRange:(NSRange)arg1 withString:(id)arg2 inTextView:(id)arg3 ;
-(void)setInProgressMentionText:(NSString *)arg1 ;
-(void)mentionalizeAtCursorInTextView:(id)arg1 ;
-(void)_mentionsSessionIDCreateIfNecessary;
-(void)_reportSimpleSearchMentions:(id)arg1 forText:(id)arg2 ;
-(void)_updateLoadingState:(unsigned long long)arg1 ;
-(void)_reportTagAnyoneMentions:(id)arg1 forText:(id)arg2 fromProvider:(id)arg3 ;
-(void)_reportCollectionMentions:(id)arg1 forText:(id)arg2 ;
-(BOOL)_hasMentionedAvatar:(id)arg1 ;
-(id)_composerMentionsForAvatars:(id)arg1 ;
-(id)_combinedSearchProviderMentions;
-(void)_selectMentionCellAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(BOOL)_checkAndFixMentionIfApplicable:(id)arg1 textViewText:(id)arg2 ;
-(BOOL)_canDoHighlights;
-(void)_showLoadingIndicatorIfNeeded;
-(BOOL)rowWithIndex:(unsigned long long)arg1 representsTitleOfSection:(unsigned long long)arg2 ;
-(double)heightForRow:(unsigned long long)arg1 inSectionWithIndex:(unsigned long long)arg2 ;
-(void)_logImpressionForMention:(id)arg1 position:(unsigned long long)arg2 ;
-(void)_logSelectedMention:(id)arg1 selectedPosition:(unsigned long long)arg2 ;
-(id)_logStringForMenitonsEndReasonType:(unsigned long long)arg1 ;
-(BOOL)textViewShouldChangeWithMutation:(id)arg1 ;
-(void)searchProvider:(id)arg1 foundResults:(id)arg2 forText:(id)arg3 ;
-(void)searchProviderDidFinishFetchingResults:(id)arg1 ;
-(void)selectMentionAtIndex:(long long)arg1 ;
-(void)commitMention:(id)arg1 inTextView:(id)arg2 ;
-(void)commitExistingMentions:(id)arg1 inTextView:(id)arg2 ;
-(void)displayMentions:(id)arg1 inTableView:(id)arg2 ;
-(void)displayMentions:(id)arg1 inCollectionView:(id)arg2 ;
-(double)heightForNumberOfRowsWithContent:(unsigned long long)arg1 ;
-(void)logMentionSessionStart;
-(void)logMentionSessionEnd;
-(FBTagAnyoneSearchProvider *)tagAnyoneSearchProvider;
-(void)setTagAnyoneSearchProvider:(FBTagAnyoneSearchProvider *)arg1 ;
-(BOOL)mentionalizeOnPrefixChar;
-(void)setMentionalizeOnPrefixChar:(BOOL)arg1 ;
-(NSString *)changedText;
-(NSString *)expectedFullText;
-(void)setDelegate:(id<FBComposerMentionDecoratorDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBComposerMentionDecoratorDelegate>)delegate;
-(unsigned long long)numberOfSections;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)reset;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)_updatePlaceholderVisibility;
-(id<FBAvatarTaggingSearchProviderProtocol>)searchProvider;
-(void)setSearchProvider:(id<FBAvatarTaggingSearchProviderProtocol>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
-(void)removeAllHighlights;
@end

