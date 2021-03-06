/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBRichStoryEntityActorProtocol.h>
#import <Messenger/FBAvatarProtocol.h>
#import <Messenger/FBTopicProtocol.h>
#import <Messenger/FBTimelineAppCollectionEntityProtocol.h>
#import <Messenger/FBQueriedActorFieldsProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedFollowableTopicFieldsProtocol.h>
#import <Messenger/FBQueriedMessagingActorFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedPayProfileFieldsProtocol.h>
#import <Messenger/FBQueriedPlaceFieldsProtocol.h>
#import <Messenger/FBQueriedProfileFieldsProtocol.h>
#import <Messenger/FBQueriedSavableFieldsProtocol.h>
#import <Messenger/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchableFieldsProtocol.h>
#import <Messenger/FBQueriedSuggestedRecipientsAttachmentFieldsProtocol.h>
#import <Messenger/FBQueriedTopicFeedOptionFieldsProtocol.h>
#import <Messenger/FBQueriedTopicFieldsProtocol.h>
#import <Messenger/FBQueriedVideoChannelCreatorFieldsProtocol.h>
#import <Messenger/FBQueriedVideoChannelFieldsProtocol.h>

@class NSString;

@interface FBMemPage : FBWildeMemModelObject <FBRichStoryEntityActorProtocol, FBAvatarProtocol, FBTopicProtocol, FBTimelineAppCollectionEntityProtocol, FBQueriedActorFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedFollowableTopicFieldsProtocol, FBQueriedMessagingActorFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedPayProfileFieldsProtocol, FBQueriedPlaceFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedSavableFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol, FBQueriedSearchableFieldsProtocol, FBQueriedSuggestedRecipientsAttachmentFieldsProtocol, FBQueriedTopicFeedOptionFieldsProtocol, FBQueriedTopicFieldsProtocol, FBQueriedVideoChannelCreatorFieldsProtocol, FBQueriedVideoChannelFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessTokenWithSession:(id)arg1 pageID:(id)arg2 ;
+(void)fetchAccessTokenWithSession:(id)arg1 pageID:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)entityURLWithFBID:(id)arg1 filter:(int)arg2 version:(id)arg3 userFBID:(id)arg4 ;
-(id)fbid;
-(id)entityURL;
-(void)fetchAccessTokenWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)legacyApiPostId;
-(id)lastNameForSort;
-(id)tokenText;
-(id)tokenImage;
-(id)tokenImageSelected;
-(int)normalizedPageType;
-(id)topicFeedURL;
-(unsigned long long)pagePermissions;
-(id)accessTokenWithSession:(id)arg1 ;
-(id)normalizedPageTypeAsString;
-(id)getAppCollectionSection;
-(id)initialRatingPrivacyOption;
-(BOOL)isNativeAssociatedApplicationInstalled;
-(BOOL)isGameEntityPage;
@end

