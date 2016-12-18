/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableBlockController.h>
#import <Messenger/FBExpandableMapNodeDelegate.h>

@class FBExpandableMapNode, NSArray, NSString;

@interface FBExpandableMapBlockController : FBExpandableBlockController <FBExpandableMapNodeDelegate> {

	FBExpandableMapNode* _expandableMapNode;
	BOOL _mapNodeHasFinishedRendering;
	NSArray* _tourCameras;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didEnterPreloadViewport;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(id)blockRenderable;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)_beginTour;
-(BOOL)_canBeginTour;
-(void)expandableMapNode:(id)arg1 didFinishRenderingMapView:(id)arg2 ;
-(BOOL)expandableMapNodeAllowedUserInteraction:(id)arg1 ;
-(void)expandableMapNode:(id)arg1 didFinishMovingToTourCamera:(id)arg2 ;
-(void)expandableMapNodeDidDisplaySnapshot:(id)arg1 ;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didExpand;
@end
