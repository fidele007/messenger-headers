/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemComment, FBMemTextWithEntities, NSSet;

@interface FBCommentIntentTarget : FBIntentTarget {

	NSString* _commentID;
	NSString* _focusedReplyID;
	NSString* _fallback;
	NSString* _groupID;
	NSString* _storyID;
	NSString* _storyURL;
	NSString* _notificationSource;
	NSString* _notificationTrackingInfo;
	NSString* _viewerFBID;
	NSString* _composerActivationSource;

}

@property (nonatomic,readonly) FBMemComment * comment; 
@property (nonatomic,copy,readonly) FBMemTextWithEntities * composerPrefillText; 
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,copy,readonly) NSSet * mainThreadCommenters; 
@property (nonatomic,copy,readonly) NSString * commentID;                                     //@synthesize commentID=_commentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedReplyID;                                //@synthesize focusedReplyID=_focusedReplyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * fallback;                                      //@synthesize fallback=_fallback - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupID;                                       //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyID;                                       //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyURL;                                      //@synthesize storyURL=_storyURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationSource;                            //@synthesize notificationSource=_notificationSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationTrackingInfo;                      //@synthesize notificationTrackingInfo=_notificationTrackingInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerFBID;                                    //@synthesize viewerFBID=_viewerFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerActivationSource;                      //@synthesize composerActivationSource=_composerActivationSource - In the implementation block
+(id)commentTargetWithComment:(id)arg1 focusedReplyID:(id)arg2 composerActivationSource:(id)arg3 composerPrefillText:(id)arg4 layoutIdiom:(unsigned long long)arg5 notificationSource:(id)arg6 notificationTrackingInfo:(id)arg7 viewerFBID:(id)arg8 mainThreadCommenters:(id)arg9 ;
+(id)commentTargetWithCommentID:(id)arg1 focusedReplyID:(id)arg2 fallback:(id)arg3 groupID:(id)arg4 storyID:(id)arg5 storyURL:(id)arg6 notificationSource:(id)arg7 notificationTrackingInfo:(id)arg8 viewerFBID:(id)arg9 composerActivationSource:(id)arg10 ;
+(id)commentTargetWithComment:(id)arg1 ;
-(unsigned long long)layoutIdiom;
-(NSString *)storyID;
-(NSString *)focusedReplyID;
-(NSString *)composerActivationSource;
-(FBMemTextWithEntities *)composerPrefillText;
-(NSSet *)mainThreadCommenters;
-(NSString *)commentID;
-(NSString *)fallback;
-(NSString *)storyURL;
-(NSString *)notificationTrackingInfo;
-(NSString *)viewerFBID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemComment *)comment;
-(NSString *)groupID;
-(NSString *)notificationSource;
@end

