/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNCameraSettingsInterface.h>

@class FBUserSession, MNUserSettings, MNOmnistoreUserPrefsStore, NSString;

@interface MNOmnistoreCameraSettings : NSObject <FBViewerContextClassProvidable, MNCameraSettingsInterface> {

	FBUserSession* _userSession;
	MNUserSettings* _userSettings;
	MNOmnistoreUserPrefsStore* _omnistoreUserPrefsStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 userSettings:(id)arg2 omnistoreUserPrefsStore:(id)arg3 ;
-(BOOL)_isOmnistoreUserPrefsStoreGKEnabled;
-(void)setSeenSaveToCameraRollOnCapturePrompt:(BOOL)arg1 ;
-(BOOL)hasSeenSaveToCameraRollOnCapturePrompt;
-(void)setSeenMicrophonePermissionsWarning:(BOOL)arg1 ;
-(BOOL)hasSeenMicrophonePermissionsWarning;
-(void)setNumberOfSelfiePhotosTaken:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSelfiePhotosTaken;
-(void)setNumberOfSelfieVideosTaken:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSelfieVideosTaken;
-(BOOL)isSaveToCameraRollOnCaptureEnabled;
-(void)setSaveToCameraRollOnCaptureEnabled:(BOOL)arg1 ;
@end
