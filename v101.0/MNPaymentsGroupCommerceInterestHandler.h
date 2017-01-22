/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMessageSenderPluginServiceExtension.h>

@class NSMutableDictionary, FBUserSession, NSString;

@interface MNPaymentsGroupCommerceInterestHandler : NSObject <MNThreadMessageSenderPluginServiceExtension> {

	NSMutableDictionary* _commerceSellerOptionIds;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)handleEnqueuedMessage:(id)arg1 ;
-(void)handleSentMessage:(id)arg1 ;
-(void)handleFailedMessage:(id)arg1 error:(id)arg2 ;
-(void)handleIncomingInterestWithRecipientId:(id)arg1 withCommerceSellerOptionId:(id)arg2 ;
-(void)handleOutgoingMessagesWithRecipientId:(id)arg1 ;
@end
