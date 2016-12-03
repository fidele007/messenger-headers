/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBLikeBoxBorderView, UILabel, NSString;

@interface FBLikeBoxView : UIView {

	FBLikeBoxBorderView* _borderView;
	UILabel* _likeCountLabel;
	unsigned long long _caretPosition;

}

@property (assign,nonatomic) unsigned long long caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)_initializeContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(unsigned long long)caretPosition;
@end

