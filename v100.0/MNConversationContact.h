/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNTokenModel.h>
#import <Messenger/FBConversationContact.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNConversationPerson, MNConversationGroup, MNConversationPage, MNConversationSecurePerson, MNConversationAddressBookContact, MNConversationMontage, MNConversationInvitableContact, MNConversationMontageCameraRoll, NSString, NSNumber, FBMImageUrlCollection;

@interface MNConversationContact : NSObject <MNTokenModel, FBConversationContact, NSCopying> {

	unsigned long long _subtype;
	MNConversationPerson* _conversationPerson;
	MNConversationGroup* _conversationGroup;
	MNConversationPage* _conversationPage;
	MNConversationSecurePerson* _conversationSecurePerson;
	MNConversationAddressBookContact* _conversationAddressBookContact;
	MNConversationMontage* _conversationMontage;
	MNConversationInvitableContact* _conversationInvitableContact;
	MNConversationMontageCameraRoll* _conversationMontageCameraRoll;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contactFBID; 
@property (nonatomic,readonly) BOOL contactIsGroupConversation; 
@property (nonatomic,readonly) NSNumber * contactFavoriteRank; 
@property (nonatomic,copy,readonly) NSString * contactName; 
@property (nonatomic,readonly) BOOL contactIsEmailOnly; 
@property (nonatomic,readonly) BOOL contactHasMessenger; 
@property (nonatomic,readonly) BOOL contactIsMobilePushable; 
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls; 
@property (nonatomic,copy,readonly) NSString * firstNameForSort; 
@property (nonatomic,copy,readonly) NSString * lastNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilFirstNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilLastNameForSort; 
@property (nonatomic,readonly) BOOL contactIsMemorialized; 
@property (nonatomic,copy,readonly) NSString * email; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
+(id)conversationPerson:(id)arg1 ;
+(id)conversationGroup:(id)arg1 ;
+(id)conversationPage:(id)arg1 ;
+(id)conversationMontage:(id)arg1 ;
+(id)conversationMontageCameraRoll:(id)arg1 ;
+(id)conversationAddressBookContact:(id)arg1 ;
+(id)conversationInvitableContact:(id)arg1 ;
+(id)conversationSecurePerson:(id)arg1 ;
-(void)matchConversationPerson:(/*^block*/id)arg1 conversationGroup:(/*^block*/id)arg2 conversationPage:(/*^block*/id)arg3 conversationSecurePerson:(/*^block*/id)arg4 conversationAddressBookContact:(/*^block*/id)arg5 conversationMontage:(/*^block*/id)arg6 conversationInvitableContact:(/*^block*/id)arg7 conversationMontageCameraRoll:(/*^block*/id)arg8 ;
-(FBMImageUrlCollection *)imageUrls;
-(NSString *)nonNilFirstNameForSort;
-(NSString *)nonNilLastNameForSort;
-(BOOL)shouldShowTokenSeparator;
-(BOOL)contactIsGroupConversation;
-(NSString *)contactFBID;
-(NSNumber *)contactFavoriteRank;
-(NSString *)firstNameForSort;
-(NSString *)lastNameForSort;
-(BOOL)contactIsEmailOnly;
-(BOOL)contactHasMessenger;
-(BOOL)contactIsMobilePushable;
-(BOOL)contactIsMemorialized;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contactName;
-(NSString *)firstName;
-(NSString *)lastName;
@end

