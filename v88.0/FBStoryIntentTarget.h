/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSURL, NSNumber, FBMemFeedStory;

@interface FBStoryIntentTarget : FBIntentTarget {

	NSString* _graphAPIID;
	NSString* _graphQLID;
	NSString* _focusedCommentID;
	NSString* _parentCommentID;
	NSString* _viewerFBID;
	NSString* _notificationType;
	NSString* _notificationSource;
	NSString* _notificationTrackingInfo;
	NSURL* _fallbackURL;
	NSNumber* _relevantReactionKey;

}

@property (nonatomic,readonly) FBMemFeedStory * story; 
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,copy,readonly) NSString * graphAPIID;                            //@synthesize graphAPIID=_graphAPIID - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLID;                             //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;                      //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentCommentID;                       //@synthesize parentCommentID=_parentCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerFBID;                            //@synthesize viewerFBID=_viewerFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationType;                      //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationSource;                    //@synthesize notificationSource=_notificationSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationTrackingInfo;              //@synthesize notificationTrackingInfo=_notificationTrackingInfo - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;                              //@synthesize fallbackURL=_fallbackURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * relevantReactionKey;                   //@synthesize relevantReactionKey=_relevantReactionKey - In the implementation block
+(id)storyTargetWithGraphQLID:(id)arg1 ;
+(id)storyTargetWithStory:(id)arg1 ;
+(id)storyTargetWithStory:(id)arg1 focusedCommentID:(id)arg2 parentCommentID:(id)arg3 viewerFBID:(id)arg4 notificationSource:(id)arg5 notificationTrackingInfo:(id)arg6 fallbackURL:(id)arg7 layoutIdiom:(unsigned long long)arg8 ;
+(id)storyTargetWithGraphQLID:(id)arg1 graphAPIID:(id)arg2 focusedCommentID:(id)arg3 parentCommentID:(id)arg4 viewerFBID:(id)arg5 notificationSource:(id)arg6 notificationTrackingInfo:(id)arg7 fallbackURL:(id)arg8 layoutIdiom:(unsigned long long)arg9 ;
+(id)storyTargetWithGraphQLID:(id)arg1 graphAPIID:(id)arg2 focusedCommentID:(id)arg3 parentCommentID:(id)arg4 viewerFBID:(id)arg5 notificationType:(id)arg6 notificationSource:(id)arg7 notificationTrackingInfo:(id)arg8 fallbackURL:(id)arg9 relevantReactionKey:(id)arg10 ;
+(id)storyTargetWithStory:(id)arg1 focusedCommentID:(id)arg2 parentCommentID:(id)arg3 ;
+(id)storyTargetWithGraphAPIID:(id)arg1 ;
-(NSString *)graphQLID;
-(id)fallbackURLs;
-(unsigned long long)layoutIdiom;
-(NSString *)focusedCommentID;
-(FBMemFeedStory *)story;
-(NSString *)graphAPIID;
-(NSString *)parentCommentID;
-(NSString *)viewerFBID;
-(NSString *)notificationTrackingInfo;
-(NSNumber *)relevantReactionKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)notificationSource;
-(NSString *)notificationType;
-(NSURL *)fallbackURL;
@end

