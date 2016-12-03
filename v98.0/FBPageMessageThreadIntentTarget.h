/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSURL, FBMemComment, FBMemFeedStory;

@interface FBPageMessageThreadIntentTarget : FBIntentTarget {

	BOOL _doesPrivateReplyExist;
	NSString* _participantFbid;
	NSString* _activityId;
	NSString* _pageId;
	NSString* _feedbackID;
	NSURL* _fallbackURL;

}

@property (nonatomic,readonly) FBMemComment * comment; 
@property (nonatomic,readonly) FBMemFeedStory * story; 
@property (nonatomic,copy,readonly) NSString * participantFbid;              //@synthesize participantFbid=_participantFbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityId;                   //@synthesize activityId=_activityId - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageId;                       //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackID;                   //@synthesize feedbackID=_feedbackID - In the implementation block
@property (nonatomic,readonly) BOOL doesPrivateReplyExist;                   //@synthesize doesPrivateReplyExist=_doesPrivateReplyExist - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;                     //@synthesize fallbackURL=_fallbackURL - In the implementation block
+(id)pageMessageThreadTargetForNewPrivateReplyWithPageID:(id)arg1 participantID:(id)arg2 activityID:(id)arg3 feedbackID:(id)arg4 ;
+(id)pageMessageThreadTargetForNewPrivateReplyWithComment:(id)arg1 ;
+(id)pageMessageThreadTargetForNewPrivateReplyWithStory:(id)arg1 pageID:(id)arg2 ;
+(id)pageMessageThreadTargetForExistingPrivateReplyWithParticipantFbid:(id)arg1 activityId:(id)arg2 pageId:(id)arg3 fallbackURL:(id)arg4 ;
-(NSString *)pageId;
-(id)fallbackURLs;
-(FBMemFeedStory *)story;
-(NSString *)feedbackID;
-(NSString *)participantFbid;
-(BOOL)doesPrivateReplyExist;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemComment *)comment;
-(NSURL *)fallbackURL;
-(NSString *)activityId;
@end
