/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface FBActionPanelInternal : UIView {

	BOOL _hasSeparator;
	NSArray* _buttons;
	double _buttonWidth;

}

@property (nonatomic,copy) NSArray * buttons;                 //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL hasSeparator;               //@synthesize hasSeparator=_hasSeparator - In the implementation block
@property (assign,nonatomic) double buttonWidth;              //@synthesize buttonWidth=_buttonWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 buttons:(id)arg2 buttonWidth:(double)arg3 hasSeparator:(BOOL)arg4 ;
-(void)setButtonWidth:(double)arg1 ;
-(unsigned long long)_numVisibleButtons;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)buttonWidth;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(BOOL)hasSeparator;
-(void)setHasSeparator:(BOOL)arg1 ;
@end

