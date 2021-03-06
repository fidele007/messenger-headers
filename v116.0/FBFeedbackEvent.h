/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCoding;
@class NSString, NSObject, NSDate;

@interface FBFeedbackEvent : FBValueObject <NSCopying, NSCoding> {

	NSString* _targetID;
	NSObject*<NSCoding> _feedback;
	unsigned long long _feedbackType;
	NSDate* _dateCreated;

}

@property (nonatomic,copy,readonly) NSString * targetID;                       //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCoding> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) unsigned long long feedbackType;                //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;                      //@synthesize dateCreated=_dateCreated - In the implementation block
-(id)initWithTargetID:(id)arg1 feedback:(id)arg2 feedbackType:(unsigned long long)arg3 dateCreated:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<NSCoding>)feedback;
-(unsigned long long)feedbackType;
-(NSString *)targetID;
-(NSDate *)dateCreated;
@end

