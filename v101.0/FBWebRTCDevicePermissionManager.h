/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebRTCDevicePermissionManager : NSObject
-(BOOL)userDidAuthorizeCameraPermissions:(BOOL)arg1 microphonePermissions:(BOOL)arg2 ;
-(void)promptForCameraPermissions:(BOOL)arg1 microphonePermissions:(BOOL)arg2 onSuccess:(/*^block*/id)arg3 onFailure:(/*^block*/id)arg4 ;
-(BOOL)_userDidAuthorizeCameraPermissions:(BOOL)arg1 ;
-(BOOL)_userDidAuthorizeMicrophonePermissions:(BOOL)arg1 ;
-(void)_promptForMicrophonePermissions:(BOOL)arg1 onSuccess:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
-(void)_promptForCameraPermissions:(BOOL)arg1 onSuccess:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
@end

