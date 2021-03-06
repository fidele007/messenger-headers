/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageLoadingErrorViewDelegate;
@class FBRichTextView, UIControl;

@interface MNMontageLoadingErrorView : UIView {

	FBRichTextView* _errorLabel;
	UIControl* _touchControl;
	id<MNMontageLoadingErrorViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageLoadingErrorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageLoadingErrorViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMontageLoadingErrorViewDelegate>)delegate;
@end

