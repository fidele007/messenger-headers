/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMAISuggestionsCarouselScrollViewDelegate.h>
#import <Messenger/MNMAISuggestionsCarouselScrollViewDataSource.h>

@protocol MNMAISuggestionsViewDelegate, MNMAISuggestionsViewDataSource;
@class MNMAISuggestionsViewConfiguration, MNMAISuggestionsProfileImageView, MNMAISuggestionsCarouselScrollView, UILabel, NSString;

@interface MNMAISuggestionView : UIView <MNMAISuggestionsCarouselScrollViewDelegate, MNMAISuggestionsCarouselScrollViewDataSource> {

	MNMAISuggestionsViewConfiguration* _viewConfiguration;
	MNMAISuggestionsProfileImageView* _profileImage;
	MNMAISuggestionsCarouselScrollView* _suggestionsCarouselScrollView;
	UILabel* _dismissLabel;
	BOOL _isAnimatingSuggestionDismissal;
	id<MNMAISuggestionsViewDelegate> _delegate;
	id<MNMAISuggestionsViewDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<MNMAISuggestionsViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutProfileImage;
-(unsigned long long)numberOfCellsToDisplay;
-(void)_performDismiss;
-(void)_finalizeDismiss;
-(void)resetLayoutState;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 suggestionsViewConfiguration:(id)arg3 ;
-(void)kickOffPresentationAnimation;
-(void)setProfileImageColor:(long long)arg1 ;
-(id)suggestionForIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfNewCells;
-(void)suggestionsCarouselScrollView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2 ;
-(void)suggestionsCarouselScrollView:(id)arg1 didLongPressCellAtIndex:(unsigned long long)arg2 ;
-(void)suggestionsCarouselScrollView:(id)arg1 didDismissCellAtIndex:(unsigned long long)arg2 ;
-(void)_layoutSuggestions;
-(void)_layoutDismissLabel;
-(UIEdgeInsets)_alignmentContentInset;
-(void)_dismissSuggestions;
-(void)setDataSource:(id<MNMAISuggestionsViewDataSource>)arg1 ;
-(void)setDelegate:(id<MNMAISuggestionsViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMAISuggestionsViewDataSource>)dataSource;
-(id<MNMAISuggestionsViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
@end

