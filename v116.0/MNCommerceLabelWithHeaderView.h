/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView;

@interface MNCommerceLabelWithHeaderView : UIView {

	FBRichTextView* _headerText;
	FBRichTextView* _labelText;
	unsigned long long _style;
	BOOL _canSelectHeaderText;
	BOOL _canSelectLabelText;

}

@property (assign,nonatomic) BOOL canSelectHeaderText;              //@synthesize canSelectHeaderText=_canSelectHeaderText - In the implementation block
@property (assign,nonatomic) BOOL canSelectLabelText;               //@synthesize canSelectLabelText=_canSelectLabelText - In the implementation block
-(void)setCanSelectHeaderText:(BOOL)arg1 ;
-(void)setCanSelectLabelText:(BOOL)arg1 ;
-(void)_didCopyHeaderText:(id)arg1 ;
-(void)_setSelectionPropertyValue:(BOOL)arg1 forView:(id)arg2 selector:(SEL)arg3 ;
-(void)_didCopyLabelText:(id)arg1 ;
-(CGSize)_sizeForRichTextView:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)_copyViewToPasteBoard:(id)arg1 ;
-(BOOL)canSelectHeaderText;
-(BOOL)canSelectLabelText;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setHeaderText:(id)arg1 ;
-(void)setLabelText:(id)arg1 ;
@end

