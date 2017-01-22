/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIButton, UIImage, UIColor;

@interface FBBrowserExtensionWebViewConfiguration : NSObject {

	UIButton* _leftButton;
	UIButton* _rightButton;
	UIImage* _icon;
	UIColor* _navigationBarColor;

}

@property (nonatomic,readonly) UIButton * leftButton;                     //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;                    //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIColor * navigationBarColor;              //@synthesize navigationBarColor=_navigationBarColor - In the implementation block
+(id)configurationWithLeftButton:(id)arg1 rightButton:(id)arg2 icon:(id)arg3 navigationBarColor:(id)arg4 ;
-(UIColor *)navigationBarColor;
-(UIImage *)icon;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end
