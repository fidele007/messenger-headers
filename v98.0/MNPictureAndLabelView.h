/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBRichTextView;

@interface MNPictureAndLabelView : UIView {

	UIView* _picture;
	FBRichTextView* _label;
	double _verticalMargin;

}

@property (assign,nonatomic) double verticalMargin;              //@synthesize verticalMargin=_verticalMargin - In the implementation block
-(id)initWithPicture:(id)arg1 andLabel:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)verticalMargin;
-(void)setVerticalMargin:(double)arg1 ;
@end

