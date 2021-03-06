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

@class NSDictionary, NSString;

@interface FBPublishingAnalyticsPayload : FBValueObject <NSCopying, NSCoding> {

	NSDictionary* _extraDataToIncludeInPublishEvent;
	NSDictionary* _extraDataToIncludeInPublishFailureEvent;
	NSString* _feedbackSource;
	NSString* _feedbackReferrer;

}

@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPublishEvent;                     //@synthesize extraDataToIncludeInPublishEvent=_extraDataToIncludeInPublishEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPublishFailureEvent;              //@synthesize extraDataToIncludeInPublishFailureEvent=_extraDataToIncludeInPublishFailureEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackSource;                                           //@synthesize feedbackSource=_feedbackSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackReferrer;                                         //@synthesize feedbackReferrer=_feedbackReferrer - In the implementation block
-(NSString *)feedbackSource;
-(NSString *)feedbackReferrer;
-(NSDictionary *)extraDataToIncludeInPublishFailureEvent;
-(NSDictionary *)extraDataToIncludeInPublishEvent;
-(id)initWithExtraDataToIncludeInPublishEvent:(id)arg1 extraDataToIncludeInPublishFailureEvent:(id)arg2 feedbackSource:(id)arg3 feedbackReferrer:(id)arg4 ;
@end

