/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, FBContactPersonalName;

@interface FBContactCreateNoshimData : FBGraphQLInput

@property (nonatomic,copy) NSString * clientMutationId; 
@property (nonatomic,copy) NSString * actorId; 
@property (nonatomic,copy) NSString * contactSurface; 
@property (nonatomic,copy) NSString * profileId; 
@property (nonatomic,copy) NSString * userId; 
@property (nonatomic,copy) NSString * phone; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * addUnlessDeleted; 
@property (nonatomic,copy) NSString * sendAdminMessage; 
@property (nonatomic,copy) FBContactPersonalName * name; 
@property (nonatomic,copy) NSString * messengerContactCreationSource; 
+(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

