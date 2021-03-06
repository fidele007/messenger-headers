/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAppMessage, MNConfirmedMessage, NSArray, MNThreadRowCTAViewModel;

@interface MNThreadRowMessageMetadata : FBValueObject <NSCopying> {

	MNAppMessage* _latestDisplayableMessage;
	MNAppMessage* _latestGenericSnippetMessage;
	MNAppMessage* _latestMessageForTextSnippet;
	MNConfirmedMessage* _latestServerMessage;
	NSArray* _apnsMessages;
	MNThreadRowCTAViewModel* _ctaViewModel;

}

@property (nonatomic,copy,readonly) MNAppMessage * latestDisplayableMessage;                 //@synthesize latestDisplayableMessage=_latestDisplayableMessage - In the implementation block
@property (nonatomic,copy,readonly) MNAppMessage * latestGenericSnippetMessage;              //@synthesize latestGenericSnippetMessage=_latestGenericSnippetMessage - In the implementation block
@property (nonatomic,copy,readonly) MNAppMessage * latestMessageForTextSnippet;              //@synthesize latestMessageForTextSnippet=_latestMessageForTextSnippet - In the implementation block
@property (nonatomic,copy,readonly) MNConfirmedMessage * latestServerMessage;                //@synthesize latestServerMessage=_latestServerMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * apnsMessages;                                  //@synthesize apnsMessages=_apnsMessages - In the implementation block
@property (nonatomic,copy,readonly) MNThreadRowCTAViewModel * ctaViewModel;                  //@synthesize ctaViewModel=_ctaViewModel - In the implementation block
-(MNThreadRowCTAViewModel *)ctaViewModel;
-(MNAppMessage *)latestDisplayableMessage;
-(MNConfirmedMessage *)latestServerMessage;
-(NSArray *)apnsMessages;
-(id)initWithLatestDisplayableMessage:(id)arg1 latestGenericSnippetMessage:(id)arg2 latestMessageForTextSnippet:(id)arg3 latestServerMessage:(id)arg4 apnsMessages:(id)arg5 ctaViewModel:(id)arg6 ;
-(MNAppMessage *)latestGenericSnippetMessage;
-(MNAppMessage *)latestMessageForTextSnippet;
@end

