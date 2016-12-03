/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBCameraNavigationBarComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _closeEvent;
	id<FBCameraGenericEvent> _switchCameraEvent;
	id<FBCameraGenericEvent> _flashPickerToggleEvent;
	id<FBCameraGenericEvent> _toggleLightModeEvent;

}
+(id)newWithTitleComponent:(id)arg1 flashPickerButtonState:(long long)arg2 showCreativeToolsButton:(BOOL)arg3 topInset:(double)arg4 angle:(double)arg5 closeEvent:(id)arg6 toggleCreativeToolsAction:(CKTypedComponentAction<>)arg7 flashPickerToggleEvent:(id)arg8 switchCameraEvent:(id)arg9 lowLightModeButtonState:(long long)arg10 toggleLightModeEvent:(id)arg11 ;
-(void)closeButtonDidTap;
-(void)lightModeButtonDidTap;
-(void)cameraSwitchButtonDidTap;
-(void)flashButtonDidtap;
@end
