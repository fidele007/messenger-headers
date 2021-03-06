/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBComposerStickersPickerTopBarDelegate;
@class UIButton, UILabel;

@interface FBComposerStickersPickerTopBar : UIView {

	UIButton* _closeButton;
	double _statusBarHeight;
	UILabel* _titleLabel;
	id<FBComposerStickersPickerTopBarDelegate> _delegate;
	double _topLayoutGuideLength;

}

@property (assign,nonatomic,__weak) id<FBComposerStickersPickerTopBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                                             //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(void)_closeButtonHit;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBComposerStickersPickerTopBarDelegate>)arg1 ;
-(id<FBComposerStickersPickerTopBarDelegate>)delegate;
@end

