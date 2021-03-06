/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@class UIImageView, UIView;

@interface FBTextFieldWithIcon : UITextField {

	UIImageView* _imageView;
	UIView* _borderView;
	long long _borderWidth;

}
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 ;
-(void)setBottomBorderWidth:(long long)arg1 ;
-(void)setNeedsLayout;
-(void)setImage:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)setBottomBorderColor:(id)arg1 ;
@end

