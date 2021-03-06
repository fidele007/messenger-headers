/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBackgroundDeallocatedObject.h>
#import <Messenger/FBRichStoryBlockController.h>
#import <Messenger/FBTransitioningBlockController.h>
#import <Messenger/FBFocusableBlockController.h>

@class FBUserSession, FBRichStoryBlockDisplayContext, NSString, FBEmailCTAViewModel, FBRichStoryBlock, FBEmailCTANode;

@interface FBEmailCTABlockController : FBBackgroundDeallocatedObject <FBRichStoryBlockController, FBTransitioningBlockController, FBFocusableBlockController> {

	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	NSString* _articleID;
	FBEmailCTAViewModel* _viewModel;
	BOOL _ctaWasViewed;
	FBRichStoryBlock* _storyBlock;
	FBEmailCTANode* _emailCTANode;

}

@property (nonatomic,readonly) FBRichStoryBlock * storyBlock;                                //@synthesize storyBlock=_storyBlock - In the implementation block
@property (nonatomic,readonly) FBRichStoryBlockDisplayContext * displayContext;              //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,retain) FBEmailCTANode * emailCTANode;                                  //@synthesize emailCTANode=_emailCTANode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)_didTapCloseButton:(id)arg1 ;
-(id)richStoryRenderable;
-(FBRichStoryBlockDisplayContext *)displayContext;
-(void)didGainInteractiveFocus;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(id)eligiblePresentationAttributesFromTransitioningToPresentationAttributes:(id)arg1 ;
-(FBRichStoryBlock *)storyBlock;
-(FBEmailCTANode *)emailCTANode;
-(void)_didTapPrivacyPolicy:(id)arg1 ;
-(void)_didTapChangeEmailButton:(id)arg1 ;
-(void)_didTapSubscribeButton:(id)arg1 ;
-(void)_emailCTALogAcceptedEventForArticleID:(id)arg1 ctaID:(id)arg2 emailAddress:(id)arg3 ;
-(void)_emailCTALogViewedEventForArticleID:(id)arg1 ctaID:(id)arg2 ;
-(void)setEmailCTANode:(FBEmailCTANode *)arg1 ;
-(void)setSelectedEmail:(id)arg1 ;
-(id)initWithBlock:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
@end

