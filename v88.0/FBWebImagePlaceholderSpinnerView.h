/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBWebImageViewListener.h>

@class UIActivityIndicatorView, UIColor, NSString;

@interface FBWebImagePlaceholderSpinnerView : UIView <FBWebImageViewListener> {

	UIActivityIndicatorView* _activityIndicatorView;
	unsigned long long _spinnerType;
	UIColor* _spinnerColor;

}

@property (assign,nonatomic) unsigned long long spinnerType;              //@synthesize spinnerType=_spinnerType - In the implementation block
@property (nonatomic,copy) UIColor * spinnerColor;                        //@synthesize spinnerColor=_spinnerColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpinnerType:(unsigned long long)arg1 ;
-(void)webImageViewDidShowPlaceholder:(id)arg1 ;
-(void)webImageViewDidHidePlaceholder:(id)arg1 ;
-(id)initWithWebImageView:(id)arg1 spinnerType:(unsigned long long)arg2 ;
-(unsigned long long)spinnerType;
-(void)layoutSubviews;
-(UIColor *)spinnerColor;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end

