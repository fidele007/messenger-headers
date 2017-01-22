/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MNForwardAudioPreviewView : UIView {

	UIImageView* _imageView;
	UILabel* _durationLabel;
	BOOL _centerDurationLabel;
	CGPoint _imageViewOffset;
	double _durationLabelPadding;
	double _padding;
	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)initWithFrame:(CGRect)arg1 showBorder:(BOOL)arg2 centerDurationLabel:(BOOL)arg3 imageViewOffset:(CGPoint)arg4 durationLabelPadding:(double)arg5 padding:(double)arg6 ;
-(id)initWithFrame:(CGRect)arg1 showBorder:(BOOL)arg2 centerDurationLabel:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
@end
