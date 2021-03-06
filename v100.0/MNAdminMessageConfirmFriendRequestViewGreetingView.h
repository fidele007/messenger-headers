/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate;
@class FBUserSession, NSArray, UIView, UIButton, UILabel, UICollectionView, NSString;

@interface MNAdminMessageConfirmFriendRequestViewGreetingView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	FBUserSession* _session;
	NSArray* _viewModels;
	UIView* _topSeparatorLineView;
	UIButton* _dismissButton;
	UILabel* _ctaLabel;
	UICollectionView* _greetingCollectionView;
	UIView* _bottomSeparatorLineView;
	id<MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModels:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)_dismissButtonDidTap:(id)arg1 ;
-(void)configureWithViewModels:(id)arg1 ;
-(void)setDelegate:(id<MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNAdminMessageConfirmFriendRequestViewGreetingViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

