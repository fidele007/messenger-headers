/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel, UIView;

@interface FBMediaGallerySecondaryBar : UIView {

	NSMutableArray* _buttonArray;
	unsigned long long _mode;
	NSString* _text;
	UILabel* _textLabel;
	UIView* _topBorder;

}
-(id)initWithFrame:(CGRect)arg1 secondaryBarMode:(unsigned long long)arg2 ;
-(void)updateLabelWithText:(id)arg1 ;
-(void)_layoutJustifyAlignButtons;
-(void)_layoutLabel;
-(void)layoutSubviews;
-(void)addButton:(id)arg1 ;
-(void)_layoutButtons;
@end
