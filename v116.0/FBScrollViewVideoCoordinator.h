/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoCoordinatorDataSource;
@class NSArray, UIScrollView;

@interface FBScrollViewVideoCoordinator : NSObject {

	NSArray* _activeItems;
	long long _capacity;
	BOOL _playWhileScrolling;
	UIScrollView* _scrollView;
	id<FBVideoCoordinatorDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoCoordinatorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeContainers; 
-(id)initWithScrollView:(id)arg1 capacity:(long long)arg2 playWhileScrolling:(BOOL)arg3 ;
-(void)pauseOnPlayerContainer:(id)arg1 atIndexPath:(id)arg2 ;
-(void)playOnPlayerContainer:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didEndDisplayingPlayerContainer:(id)arg1 atIndexPath:(id)arg2 ;
-(void)willDisplayPlayerContainer:(id)arg1 atIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging;
-(void)scrollViewDidEndDraggingWillDecelerate:(BOOL)arg1 ;
-(NSArray *)activeContainers;
-(void)_findVisiblePlayerContainersAndPlay;
-(BOOL)_maybePlayOnPlayerContainer:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_maybeStopOnContainer:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_activeItemForPlayerContainer:(id)arg1 ;
-(void)_playOnActiveItem:(id)arg1 players:(id)arg2 ;
-(void)_stopOnActiveItem:(id)arg1 ;
-(void)_playOnPlayerContainer:(id)arg1 indexPath:(id)arg2 players:(id)arg3 ;
-(void)_pauseOnPlayers:(id)arg1 ;
-(void)_stopOnPlayers:(id)arg1 ;
-(void)_playOnPlayers:(id)arg1 ;
-(void)setDataSource:(id<FBVideoCoordinatorDataSource>)arg1 ;
-(id<FBVideoCoordinatorDataSource>)dataSource;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)_stop;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)_pause;
-(void)scrollViewDidEndDecelerating;
-(void)scrollViewDidScroll;
@end

