/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNLoadingView, UITableView, UICollectionView, MNStackedContainerScrollView;

@interface MNThreadDetailsView : UIView {

	UIView* _detailsHeaderView;
	MNLoadingView* _loadingView;
	BOOL _showHeaderAsCell;
	CGRect _keyboardFrame;
	UITableView* _tableView;
	UICollectionView* _collectionView;
	unsigned long long _layoutMode;
	MNStackedContainerScrollView* _containerScrollView;

}

@property (assign,nonatomic) CGRect keyboardFrame;                                            //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                                   //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) MNStackedContainerScrollView * containerScrollView;              //@synthesize containerScrollView=_containerScrollView - In the implementation block
-(double)_keyboardTopY;
-(void)_updateLayoutMode;
-(void)_updateHeaderViewFrameWithSize:(CGSize)arg1 ;
-(void)_updateFooterViewFrame;
-(id)initWithFrame:(CGRect)arg1 headerView:(id)arg2 showHeaderAsCell:(BOOL)arg3 ;
-(void)hideLoadingView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITableView *)tableView;
-(UICollectionView *)collectionView;
-(void)_layoutContainerView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setContainerScrollView:(MNStackedContainerScrollView *)arg1 ;
-(MNStackedContainerScrollView *)containerScrollView;
-(void)showLoadingView;
-(unsigned long long)layoutMode;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

