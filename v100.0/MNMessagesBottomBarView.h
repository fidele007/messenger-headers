/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MNMessagesBottomBarView : UIView {

	UIView* _supplementaryView;
	UIView* _composerView;
	BOOL _showsSupplementaryView;

}

@property (nonatomic,retain) UIView * supplementaryView;               //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) UIView * composerView;                    //@synthesize composerView=_composerView - In the implementation block
@property (assign,nonatomic) BOOL showsSupplementaryView;              //@synthesize showsSupplementaryView=_showsSupplementaryView - In the implementation block
-(UIView *)composerView;
-(UIView *)supplementaryView;
-(void)setComposerView:(UIView *)arg1 ;
-(void)setSupplementaryView:(UIView *)arg1 ;
-(BOOL)showsSupplementaryView;
-(void)setShowsSupplementaryView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsSupplementaryView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
