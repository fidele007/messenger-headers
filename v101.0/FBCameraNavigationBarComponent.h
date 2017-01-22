/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBCameraNavigationBarComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _closeEvent;
	id<FBCameraGenericEvent> _switchCameraEvent;
	id<FBCameraGenericEvent> _flashPickerToggleEvent;
	id<FBCameraGenericEvent> _toggleLightModeEvent;

}
+(id)newWithTitleComponent:(id)arg1 flashPickerButtonState:(long long)arg2 topInset:(double)arg3 angle:(double)arg4 closeEvent:(id)arg5 flashPickerToggleEvent:(id)arg6 switchCameraEvent:(id)arg7 lowLightModeButtonState:(long long)arg8 toggleLightModeEvent:(id)arg9 ;
-(void)closeButtonDidTap;
-(void)lightModeButtonDidTap;
-(void)cameraSwitchButtonDidTap;
-(void)flashButtonDidtap;
@end
