/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <FBSharedFramework/FBAnalyticsInfoSource.h>

@protocol FBAttachmentNodeDelegate;
@class ASDisplayNode, NSString;

@interface FBAttachmentNode : ASDisplayNode <FBAnalyticsInfoSource> {

	BOOL _delegateNodeWillAppear;
	BOOL _delegateNodeDidDissapear;
	BOOL _edgeAntialiasingEnabled;
	ASDisplayNode* _owningViewNode;
	id<FBAttachmentNodeDelegate> _delegate;
	ASDisplayNode* _accessoryNode;

}

@property (assign,nonatomic,__weak) ASDisplayNode * owningViewNode;                     //@synthesize owningViewNode=_owningViewNode - In the implementation block
@property (assign,nonatomic,__weak) id<FBAttachmentNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPageable,nonatomic,readonly) BOOL pageable; 
@property (nonatomic,retain) ASDisplayNode * accessoryNode;                             //@synthesize accessoryNode=_accessoryNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)willEnterHierarchy;
-(void)didExitHierarchy;
-(void)setMinimorphFactor:(FBMinimorphFactor)arg1 ;
-(void)setAccessoryNode:(ASDisplayNode *)arg1 ;
-(BOOL)wantsFullscreen;
-(BOOL)isPageable;
-(ASDisplayNode *)owningViewNode;
-(void)setOwningViewNode:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)accessoryNode;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setDelegate:(id<FBAttachmentNodeDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBAttachmentNodeDelegate>)delegate;
-(void)layout;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg1 ;
@end

