/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPollDetailTopBarViewDelegate.h>

@protocol MNPollDetailViewDelegate;
@class MNPollDetailTopBarView, UIView, MNLoadingView, MNButton, UITableView, NSString;

@interface MNPollDetailView : UIView <MNPollDetailTopBarViewDelegate> {

	MNPollDetailTopBarView* _topBarView;
	UIView* _topSeparatorView;
	MNLoadingView* _loadingView;
	UIView* _errorView;
	UIView* _bottomSeparatorView;
	MNButton* _submitButtonView;
	UITableView* _contentTableView;
	long long _viewState;
	/*^block*/id _dismissBlock;
	id<MNPollDetailViewDelegate> _delegate;

}

@property (nonatomic,readonly) UITableView * contentTableView;                          //@synthesize contentTableView=_contentTableView - In the implementation block
@property (assign,nonatomic) long long viewState;                                       //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                             //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MNPollDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(void)pollDetailTopBarViewDidTapCloseIcon:(id)arg1 ;
-(void)_didTapSubmitButton;
-(void)_hideAllSubviews;
-(void)startLoadingSubmitButton;
-(void)stopLoadingSubmitButton;
-(UITableView *)contentTableView;
-(void)setViewState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNPollDetailViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPollDetailViewDelegate>)delegate;
-(long long)viewState;
@end

