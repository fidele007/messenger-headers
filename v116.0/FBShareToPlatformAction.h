/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFeedSecondaryAction.h>

@class FBMemFeedStory, FBFeedSecondaryActionContext, NSString;

@interface FBShareToPlatformAction : NSObject <FBFeedSecondaryAction> {

	FBMemFeedStory* _story;
	FBFeedSecondaryActionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(void)handleWithStory:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 ;
-(id)overrideIcon;
-(id)initWithFeedStory:(id)arg1 context:(id)arg2 ;
-(unsigned long long)glyphName;
-(id)title;
-(id)accessibilityIdentifier;
-(id)detail;
@end

