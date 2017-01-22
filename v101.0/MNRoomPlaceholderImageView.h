/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIColor;

@interface MNRoomPlaceholderImageView : UIView {

	UIImage* _patternImage;
	UIImageView* _patternView;
	UIColor* _placeholderColor;

}

@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
@end
