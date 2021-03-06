/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, NSString, FBMobileConfigDebugOverrideViewController, UITextField, UISwitch;

@interface FBMobileConfigDebugOverridesView : UIView {

	UILabel* _overrideLabel;
	NSString* _overrideValue;
	unsigned long long _parameterType;
	FBMobileConfigDebugOverrideViewController* _delegate;
	UITextField* _overrideTextField;
	UISwitch* _overrideBoolSwitch;

}

@property (nonatomic,readonly) UITextField * overrideTextField;              //@synthesize overrideTextField=_overrideTextField - In the implementation block
@property (nonatomic,readonly) UISwitch * overrideBoolSwitch;                //@synthesize overrideBoolSwitch=_overrideBoolSwitch - In the implementation block
-(void)_setupBoolSwitch;
-(void)_setupTextField;
-(id)initWithParameterType:(unsigned long long)arg1 overrideValue:(id)arg2 textFieldDelegate:(id)arg3 ;
-(void)focusOverrideTextFieldIfNecessary;
-(UITextField *)overrideTextField;
-(UISwitch *)overrideBoolSwitch;
@end

