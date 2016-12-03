/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)scrollViewDidScroll;
-(void)scrollViewWillBeginDragging;
-(void)scrollViewDidEndDecelerating;
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
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)_pause;
@end

