/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, NSArray, UIColor;

@interface MNContentSubscriptionAdminMessageViewModel : FBValueObject <NSCopying> {

	NSString* _pageId;
	NSString* _threadFBID;
	NSString* _messageState;
	FBStringWithRedactedDescription* _messageText;
	NSString* _unfoldCTAText;
	NSString* _pageName;
	NSString* _pageProfilePicUri;
	NSArray* _callToActions;
	UIColor* _themeColor;

}

@property (nonatomic,copy,readonly) NSString * pageId;                                          //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFBID;                                      //@synthesize threadFBID=_threadFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageState;                                    //@synthesize messageState=_messageState - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * messageText;              //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy,readonly) NSString * unfoldCTAText;                                   //@synthesize unfoldCTAText=_unfoldCTAText - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                        //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageProfilePicUri;                               //@synthesize pageProfilePicUri=_pageProfilePicUri - In the implementation block
@property (nonatomic,copy,readonly) NSArray * callToActions;                                    //@synthesize callToActions=_callToActions - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                                       //@synthesize themeColor=_themeColor - In the implementation block
-(NSString *)threadFBID;
-(UIColor *)themeColor;
-(NSString *)pageId;
-(NSString *)pageName;
-(NSArray *)callToActions;
-(id)initWithPageId:(id)arg1 threadFBID:(id)arg2 messageState:(id)arg3 messageText:(id)arg4 unfoldCTAText:(id)arg5 pageName:(id)arg6 pageProfilePicUri:(id)arg7 callToActions:(id)arg8 themeColor:(id)arg9 ;
-(NSString *)messageState;
-(NSString *)unfoldCTAText;
-(NSString *)pageProfilePicUri;
-(FBStringWithRedactedDescription *)messageText;
@end

