/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNThreadParticipantNameFormatter, FBMUser, NSString;

@interface MNMessageSendNotEligibleAlertController : NSObject <UIAlertViewDelegate, FBClassProvidable> {

	MNThreadParticipantNameFormatter* _nameFormatter;
	id<FBProvider> _userBlockerProvider;
	FBMUser* _userToUnblock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldShowSendNotEligibleAlertForViewModel:(id)arg1 ;
-(void)showSendNotEligibleAlertForViewModel:(id)arg1 ;
-(BOOL)shouldShowForNewThreadWithPickedUsers:(id)arg1 experimentManager:(id)arg2 ;
-(void)showSendNotEligibleAlertForNewThreadWithPickedUsers:(id)arg1 ;
-(id)initWithNameFormatter:(id)arg1 userBlockerProvider:(id)arg2 ;
-(void)_showNotReceivingMessagesAlert:(id)arg1 ;
-(void)_showMultipleNotReceivingMessagesAlert;
-(void)_showUnblockMessagesAlertForOtherUser:(id)arg1 ;
-(void)_showUnblockOnFacebookAlertForOtherUser:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
