/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, NSString;

@interface MNUserSetUpStatePersister : NSObject <FBViewerContextClassProvidable> {

	FBUserSession* _session;

}

@property (assign,nonatomic) BOOL forceShowAllNuxStepsOnLogin; 
@property (nonatomic,copy) NSString * savedPhoneNumber; 
@property (assign,nonatomic) BOOL savedPhoneNumberVerified; 
@property (assign,nonatomic) BOOL userCompletedPhoneEntryStep; 
@property (assign,nonatomic) BOOL userHasSeenConfirmationScreen; 
@property (nonatomic,copy) NSString * phoneNumberToConfirm; 
@property (assign,nonatomic) BOOL userCompletedUserSetUpNux; 
@property (assign,nonatomic) long long completedLoginFlowType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)forceShowAllNuxStepsOnLogin;
-(void)setForceShowAllNuxStepsOnLogin:(BOOL)arg1 ;
-(NSString *)savedPhoneNumber;
-(BOOL)savedPhoneNumberVerified;
-(void)setSavedPhoneNumber:(NSString *)arg1 ;
-(BOOL)userCompletedUserSetUpNux;
-(void)_setObject:(id)arg1 forKey:(id)arg2 inPreferences:(id)arg3 ;
-(NSString *)phoneNumberToConfirm;
-(void)setPhoneNumberToConfirm:(NSString *)arg1 ;
-(void)setSavedPhoneNumberVerified:(BOOL)arg1 ;
-(BOOL)userCompletedPhoneEntryStep;
-(void)setUserCompletedPhoneEntryStep:(BOOL)arg1 ;
-(BOOL)userHasSeenConfirmationScreen;
-(void)setUserHasSeenConfirmationScreen:(BOOL)arg1 ;
-(void)setUserCompletedUserSetUpNux:(BOOL)arg1 ;
-(long long)completedLoginFlowType;
-(void)setCompletedLoginFlowType:(long long)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

