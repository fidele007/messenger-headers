/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemFeedback;

@interface FBResharesOfContentFeedIntentTarget : FBIntentTarget {

	BOOL _hoistConnectedReshares;
	NSString* _feedbackID;

}

@property (nonatomic,readonly) FBMemFeedback * feedback; 
@property (nonatomic,copy,readonly) NSString * feedbackID;               //@synthesize feedbackID=_feedbackID - In the implementation block
@property (nonatomic,readonly) BOOL hoistConnectedReshares;              //@synthesize hoistConnectedReshares=_hoistConnectedReshares - In the implementation block
+(id)resharesOfContentFeedIntentTargetWithFeedbackID:(id)arg1 hoistConnectedReshares:(BOOL)arg2 ;
+(id)resharesOfContentFeedIntentTargetWithFeedback:(id)arg1 hoistConnectedReshares:(BOOL)arg2 ;
-(BOOL)hoistConnectedReshares;
-(NSString *)feedbackID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemFeedback *)feedback;
@end

