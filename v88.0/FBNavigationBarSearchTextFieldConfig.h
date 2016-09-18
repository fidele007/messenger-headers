/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor, UIFont, UIButton, UIImage;

@interface FBNavigationBarSearchTextFieldConfig : NSObject {

	BOOL _useSelectedSearchIconButton;
	double _cornerRadius;
	UIColor* _borderColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) UIColor * textColor; 
@property (nonatomic,copy,readonly) UIColor * highlightedTextColor; 
@property (nonatomic,copy,readonly) UIColor * tintColor; 
@property (nonatomic,copy,readonly) UIFont * textFont; 
@property (nonatomic,copy,readonly) UIColor * placeholderTextColor; 
@property (nonatomic,readonly) UIEdgeInsets textFieldInsets; 
@property (nonatomic,readonly) BOOL useRightViewForSearchIcon; 
@property (nonatomic,readonly) long long leftViewMode; 
@property (nonatomic,readonly) long long rightViewMode; 
@property (nonatomic,copy,readonly) UIButton * defaultSearchIconButton; 
@property (nonatomic,copy,readonly) UIButton * selectedSearchIconButton; 
@property (nonatomic,readonly) BOOL useSelectedSearchIconButton;                      //@synthesize useSelectedSearchIconButton=_useSelectedSearchIconButton - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                                 //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth; 
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * highlightedBackgroundImage; 
@property (nonatomic,readonly) long long* keyboardAppearance; 
-(UIImage *)highlightedBackgroundImage;
-(BOOL)useRightViewForSearchIcon;
-(UIEdgeInsets)textFieldInsets;
-(UIButton *)defaultSearchIconButton;
-(UIButton *)selectedSearchIconButton;
-(BOOL)useSelectedSearchIconButton;
-(UIColor *)backgroundColor;
-(UIColor *)tintColor;
-(double)cornerRadius;
-(UIImage *)backgroundImage;
-(UIColor *)textColor;
-(long long*)keyboardAppearance;
-(UIColor *)highlightedTextColor;
-(UIColor *)borderColor;
-(double)borderWidth;
-(UIFont *)textFont;
-(long long)leftViewMode;
-(long long)rightViewMode;
-(UIColor *)placeholderTextColor;
@end
