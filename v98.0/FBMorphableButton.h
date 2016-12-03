/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIImageView, NSMapTable, FBMorphableButtonContent;

@interface FBMorphableButton : UIView {

	UIButton* _containerView;
	UIImageView* _borderView;
	NSMapTable* _titleLabels;
	NSMapTable* _glyphViews;
	FBMorphableButtonContent* _previousContent;
	BOOL _darkBackground;
	BOOL _buttonPressed;
	BOOL _previousButtonPressed;
	FBMorphableButtonContent* _content;

}

@property (nonatomic,retain) FBMorphableButtonContent * content;              //@synthesize content=_content - In the implementation block
-(id)initWithContent:(id)arg1 darkBackground:(BOOL)arg2 ;
-(void)_buttonTouchUpInside;
-(void)_buttonTouchDown;
-(void)_buttonTouchDragInside;
-(void)_buttonTouchUp;
-(void)_initializeSubviewsForContent;
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBMorphableButtonContent *)content;
-(void)setContent:(FBMorphableButtonContent *)arg1 ;
@end
