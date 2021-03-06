/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(BOOL)userCompletedUserSetUpNux;
-(void)setUserCompletedUserSetUpNux:(BOOL)arg1 ;
-(void)setSavedPhoneNumber:(NSString *)arg1 ;
-(void)setSavedPhoneNumberVerified:(BOOL)arg1 ;
-(void)setUserCompletedPhoneEntryStep:(BOOL)arg1 ;
-(NSString *)savedPhoneNumber;
-(BOOL)savedPhoneNumberVerified;
-(void)setUserHasSeenConfirmationScreen:(BOOL)arg1 ;
-(NSString *)phoneNumberToConfirm;
-(void)setPhoneNumberToConfirm:(NSString *)arg1 ;
-(BOOL)userHasSeenConfirmationScreen;
-(void)setCompletedLoginFlowType:(long long)arg1 ;
-(BOOL)userCompletedPhoneEntryStep;
-(long long)completedLoginFlowType;
-(void)_setObject:(id)arg1 forKey:(id)arg2 inPreferences:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

