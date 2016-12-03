/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/CKComponentDataSourceDelegate.h>
#import <Messenger/FBComponentCellAppearanceEventListener.h>
#import <Messenger/FBComponentCellAppearanceEventDeprecatedListener.h>
#import <Messenger/FBSectionedDataSourceTransformerUpdateHandler.h>
#import <Messenger/FBComponentTransactionalDataSourceControllerDelegate.h>
#import <Messenger/FBComponentScrollEventListenable.h>

@protocol CKComponentSizeRangeProviding, FBComponentTableViewDataSourceAnimationDelegate, FBComponentTableViewCellProviding, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceSelectionHandler, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceEditingHandler, FBComponentFallbackTableViewCellConfiguring, FBComponentTableViewDataSourceIndexPathMunger;
@class CKComponentDataSource, NSString, FBComponentTransactionalDataSourceController, FBSectionedDataSourceTransformer, FBComponentScrollEventRouter, FBComponentCellAppearanceTracker, FBComponentCellAppearanceEventListenerAnnouncer, FBComponentCellAppearanceTrackerDeprecated, FBComponentCellAppearanceEventDeprecatedListenerAnnouncer, FBComponentTableViewDataSourceSelectionEventListenerAnnouncer, FBComponentTableViewDataSourceEventListenerAnnouncer, UITableView;

@interface FBComponentTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, CKComponentDataSourceDelegate, FBComponentCellAppearanceEventListener, FBComponentCellAppearanceEventDeprecatedListener, FBSectionedDataSourceTransformerUpdateHandler, FBComponentTransactionalDataSourceControllerDelegate, FBComponentScrollEventListenable> {

	CKComponentDataSource* _componentDataSource;
	Class _decider;
	NSString* _identifier;
	BOOL _useTransactionalDataSource;
	FBComponentTransactionalDataSourceController* _transactionalDataSource;
	id<CKComponentSizeRangeProviding> _constraintProvider;
	FBSectionedDataSourceTransformer* _sectionedDataSourceReaderWriter;
	FBComponentScrollEventRouter* _scrollEventRouter;
	FBComponentCellAppearanceTracker* _cellAppearanceTracker;
	FBComponentCellAppearanceEventListenerAnnouncer* _cellAppearanceAnnouncer;
	FBComponentCellAppearanceTrackerDeprecated* _deprecatedCellAppearanceTracker;
	FBComponentCellAppearanceEventDeprecatedListenerAnnouncer* _deprecatedCellAppearanceAnnouncer;
	FBComponentTableViewDataSourceSelectionEventListenerAnnouncer* _selectionEventAnnouncer;
	FBComponentTableViewDataSourceEventListenerAnnouncer* _eventAnnouncer;
	BOOL _shouldCheckRowAnimations;
	unique_ptr<FBComponentTableViewDataSourceCellConfig, std::__1::default_delete<FBComponentTableViewDataSourceCellConfig> >* _cellConfig;
	id<FBComponentTableViewDataSourceAnimationDelegate> _animationDelegate;
	id<FBComponentTableViewCellProviding> _fallbackCellProvider;
	id<FBComponentTableViewDataSourceCellConfigProvider> _cellConfigProvider;
	id<FBComponentTableViewDataSourceSelectionHandler> _selectionHandler;
	id<FBComponentTableViewDataSourceSectionHeaderHandler> _sectionHeaderHandler;
	id<FBComponentTableViewDataSourceEditingHandler> _editingHandler;
	UITableView* _tableView;
	id<FBComponentFallbackTableViewCellConfiguring> _fallbackCellConfigurer;
	id<FBComponentTableViewDataSourceIndexPathMunger> _indexPathMunger;

}

@property (assign,nonatomic,__weak) id<FBComponentFallbackTableViewCellConfiguring> fallbackCellConfigurer;                   //@synthesize fallbackCellConfigurer=_fallbackCellConfigurer - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentTableViewDataSourceIndexPathMunger> indexPathMunger;                        //@synthesize indexPathMunger=_indexPathMunger - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentTableViewDataSourceAnimationDelegate> animationDelegate;                    //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentDataSourceScrollEventHandler> scrollEventHandler; 
@property (assign,nonatomic,__weak) id<FBComponentTableViewCellProviding> fallbackCellProvider;                               //@synthesize fallbackCellProvider=_fallbackCellProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentTableViewDataSourceCellConfigProvider> cellConfigProvider;                  //@synthesize cellConfigProvider=_cellConfigProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentTableViewDataSourceSelectionHandler> selectionHandler;                      //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentTableViewDataSourceSectionHeaderHandler> sectionHeaderHandler;              //@synthesize sectionHeaderHandler=_sectionHeaderHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentTableViewDataSourceEditingHandler> editingHandler;                          //@synthesize editingHandler=_editingHandler - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) id<FBSectionedDataSourceReading> readInterface; 
@property (nonatomic,readonly) id<FBSectionedDataSourceWriting> writeInterface; 
@property (nonatomic,readonly) id<CKComponentSuspendable> suspensionInterface; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 constraintProvider:(id)arg3 identifier:(id)arg4 ;
-(void)addSelectionEventListener:(id)arg1 ;
-(void)setCellConfigProvider:(id<FBComponentTableViewDataSourceCellConfigProvider>)arg1 ;
-(id<FBSectionedDataSourceWriting>)writeInterface;
-(void)removeSelectionEventListener:(id)arg1 ;
-(void)setTableViewAndReloadData:(id)arg1 ;
-(id<FBSectionedDataSourceReading>)readInterface;
-(id<FBComponentTableViewDataSourceSectionHeaderHandler>)sectionHeaderHandler;
-(void)setSectionHeaderHandler:(id<FBComponentTableViewDataSourceSectionHeaderHandler>)arg1 ;
-(void)enumerateLayoutsForItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)addScrollEventListener:(id)arg1 ;
-(id<FBComponentDataSourceScrollEventHandler>)scrollEventHandler;
-(void)setScrollEventHandler:(id<FBComponentDataSourceScrollEventHandler>)arg1 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)isComputingChanges;
-(void)updateContextAndEnqeueReload:(id)arg1 ;
-(void)addPreparationQueueListener:(id)arg1 ;
-(void)removePreparationQueueListener:(id)arg1 ;
-(void)componentDataSource:(id)arg1 hasChangesOfTypes:(unsigned long long)arg2 changesetApplicator:(/*^block*/id)arg3 ticker:(/*^block*/id)arg4 ;
-(void)componentDataSource:(id)arg1 didChangeSizeForObject:(id)arg2 atIndexPath:(id)arg3 animation:(const CKComponentBoundsAnimation*)arg4 ;
-(void)componentDataSource:(id)arg1 hasAppliedChanges:(id)arg2 changesetApplicator:(/*^block*/id)arg3 previousDataSourceState:(id)arg4 updatedItems:(id)arg5 ticker:(/*^block*/id)arg6 ;
-(void)removeScrollEventListener:(id)arg1 ;
-(id<CKComponentSuspendable>)suspensionInterface;
-(void)addAppearanceEventListener:(id)arg1 ;
-(void)removeAppearanceEventListener:(id)arg1 ;
-(id<FBComponentTableViewCellProviding>)fallbackCellProvider;
-(void)setFallbackCellProvider:(id<FBComponentTableViewCellProviding>)arg1 ;
-(id<FBComponentTableViewDataSourceCellConfigProvider>)cellConfigProvider;
-(id<FBComponentTableViewDataSourceIndexPathMunger>)indexPathMunger;
-(void)setIndexPathMunger:(id<FBComponentTableViewDataSourceIndexPathMunger>)arg1 ;
-(void)componentWillAppearInCell:(id)arg1 model:(id)arg2 ;
-(void)componentDidDisappearFromCell:(id)arg1 model:(id)arg2 ;
-(void)sectionedDataSourceTransformer:(id)arg1 willEnqueueChangeset:(const Changeset*)arg2 ;
-(void)sectionedDataSourceTransformer:(id)arg1 didEnqueueChangeset:(const Changeset*)arg2 ;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 constraintProvider:(id)arg3 identifier:(id)arg4 decider:(Class)arg5 ;
-(void)addAppearanceEventListenerDeprecated:(id)arg1 ;
-(void)removeAppearanceEventListenerDeprecated:(id)arg1 ;
-(void)setTableViewWithoutHijackingDelegateAndDataSource:(id)arg1 ;
-(id<FBComponentTableViewDataSourceEditingHandler>)editingHandler;
-(void)setEditingHandler:(id<FBComponentTableViewDataSourceEditingHandler>)arg1 ;
-(id<FBComponentFallbackTableViewCellConfiguring>)fallbackCellConfigurer;
-(void)setFallbackCellConfigurer:(id<FBComponentFallbackTableViewCellConfiguring>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setAnimationDelegate:(id<FBComponentTableViewDataSourceAnimationDelegate>)arg1 ;
-(UITableView *)tableView;
-(id<FBComponentTableViewDataSourceAnimationDelegate>)animationDelegate;
-(void)setSelectionHandler:(id<FBComponentTableViewDataSourceSelectionHandler>)arg1 ;
-(id<FBComponentTableViewDataSourceSelectionHandler>)selectionHandler;
@end

