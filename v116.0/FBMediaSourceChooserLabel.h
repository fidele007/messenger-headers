/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMediaSourceChooserLabelDelegate;
@class UILabel, UIImageView, UITapGestureRecognizer, NSString;

@interface FBMediaSourceChooserLabel : UIView {

	UILabel* _sourceTypeLabel;
	UIImageView* _downArrow;
	UITapGestureRecognizer* _sourceTypeLabelGestureRecognizer;
	UITapGestureRecognizer* _downArrowGestureRecognizer;
	id<FBMediaSourceChooserLabelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMediaSourceChooserLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL downArrowHidden; 
@property (nonatomic,copy) NSString * title; 
-(void)setDownArrowHidden:(BOOL)arg1 ;
-(void)_didTapSourceType:(id)arg1 ;
-(BOOL)downArrowHidden;
-(void)setTintColorStyle:(unsigned long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBMediaSourceChooserLabelDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMediaSourceChooserLabelDelegate>)delegate;
-(NSString *)title;
@end

