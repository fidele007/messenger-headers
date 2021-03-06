/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExpandableView;
@class UIControl;

@interface FBExpandableNavigationConfiguration : NSObject {

	UIControl*<FBExpandableView> _leftButton;
	UIControl*<FBExpandableView> _rightButton;
	UIControl*<FBExpandableView> _centerButton;

}

@property (nonatomic,readonly) UIControl*<FBExpandableView> leftButton;                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIControl*<FBExpandableView> rightButton;               //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,readonly) UIControl*<FBExpandableView> centerButton;              //@synthesize centerButton=_centerButton - In the implementation block
+(id)configurationWithLeftButton:(id)arg1 rightButton:(id)arg2 centerButton:(id)arg3 ;
-(UIControl*<FBExpandableView>)centerButton;
-(UIControl*<FBExpandableView>)leftButton;
-(UIControl*<FBExpandableView>)rightButton;
@end

