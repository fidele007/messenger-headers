/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBContactSearchQuery;


@protocol FBContactsSearch <NSObject>
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate; 
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery; 
@required
-(BOOL)hasPendingSearchOperation;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1;
-(void)refreshSearch:(id)arg1;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2;
-(id)sectionsInSearch;
-(long long)numberOfSearchResultsInSection:(long long)arg1;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2;
-(void)cancelPendingSearchOperation;
-(void)setDelegate:(id)arg1;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1;
-(id)titleForHeaderInSection:(long long)arg1;
-(FBContactSearchQuery *)currentQuery;
-(void)clearResults;

@end

