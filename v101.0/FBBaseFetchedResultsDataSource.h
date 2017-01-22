/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBaseFetchedResultsDataSource <UITableViewDataSource>
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator; 
@property (assign,nonatomic,__weak) id<FBBaseFetchedResultsDataSourceDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long numberOfResults; 
@required
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id)arg1;
-(id)indexPathsForObject:(id)arg1;
-(BOOL)isSectionLoaded:(long long)arg1;
-(void)showAllForSection:(long long)arg1;
-(BOOL)isMoreCellIndex:(id)arg1;
-(BOOL)isLoadingCellWithIndex:(id)arg1;
-(long long)numberOfHiddenResultsForSection:(long long)arg1;
-(id)objectAtIndexPath:(id)arg1;
-(void)setDelegate:(id)arg1;
-(long long)numberOfRowsInSection:(long long)arg1;
-(id<FBBaseFetchedResultsDataSourceDelegate>)delegate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(unsigned long long)numberOfResults;
-(void)fetch;

@end
