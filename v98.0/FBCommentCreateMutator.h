/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCommentPublishing.h>

@class NSString, NSArray, NSData, FBCKQueryTopLevelCommentParametersInput;

@interface FBCommentCreateMutator : NSObject <FBCommentPublishing> {

	NSString* _GUID;
	NSString* _feedbackID;
	NSString* _actorID;
	NSString* _message;
	NSArray* _mentions;
	NSData* _photoData;
	NSString* _stickerID;
	NSString* _videoID;
	NSString* _vodVideoTimestamp;
	NSString* _liveVideoTimestamp;
	BOOL _isPrivate;
	NSArray* _trackingCodes;
	NSString* _feedbackSource;
	NSString* _feedbackReferrer;
	FBCKQueryTopLevelCommentParametersInput* _refreshCommentWithParameters;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)publishWithSession:(id)arg1 ;
-(id)initWithFeedbackID:(id)arg1 actorID:(id)arg2 message:(id)arg3 mentions:(id)arg4 photoData:(id)arg5 stickerID:(id)arg6 videoID:(id)arg7 vodVideoTimestamp:(id)arg8 liveVideoTimestamp:(id)arg9 isPrivate:(BOOL)arg10 trackingCodes:(id)arg11 feedbackSource:(id)arg12 feedbackReferrer:(id)arg13 refreshCommentWithParameters:(id)arg14 successBlock:(/*^block*/id)arg15 failureBlock:(/*^block*/id)arg16 ;
@end

