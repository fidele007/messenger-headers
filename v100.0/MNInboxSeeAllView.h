/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNHighlighting.h>

@class UILabel, UIView, UIImageView, MNInboxSeeAllViewModel, MNFacepileView;

@interface MNInboxSeeAllView : UIView <MNHighlighting> {

	UILabel* _seeMoreLabel;
	UIView* _separatorView;
	UIImageView* _caretView;
	double _facepileSize;
	BOOL _highlighted;
	BOOL _selected;
	MNInboxSeeAllViewModel* _seeAllViewModel;
	UIView* _activeNowView;
	MNFacepileView* _seeAllFacepileView;

}

@property (nonatomic,retain) MNInboxSeeAllViewModel * seeAllViewModel;              //@synthesize seeAllViewModel=_seeAllViewModel - In the implementation block
@property (nonatomic,retain) UIView * activeNowView;                                //@synthesize activeNowView=_activeNowView - In the implementation block
@property (nonatomic,retain) MNFacepileView * seeAllFacepileView;                   //@synthesize seeAllFacepileView=_seeAllFacepileView - In the implementation block
@property (assign,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                      //@synthesize highlighted=_highlighted - In the implementation block
-(id)initWithFacepileSize:(double)arg1 ;
-(void)setSeeAllViewModel:(MNInboxSeeAllViewModel *)arg1 ;
-(void)setActiveNowView:(UIView *)arg1 ;
-(MNFacepileView *)seeAllFacepileView;
-(void)_updateFacepile;
-(void)_updateSeeAllLabel;
-(void)_updateChevron;
-(MNInboxSeeAllViewModel *)seeAllViewModel;
-(UIView *)activeNowView;
-(void)setSeeAllFacepileView:(MNFacepileView *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)highlighted;
-(BOOL)selected;
@end
