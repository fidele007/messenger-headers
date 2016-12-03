/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryRendererController.h>

@class FBNativeArticleInteractionRegistry, NSMutableSet, NSMutableDictionary, FBNAPinnableBlockRegistry;

@interface FBNativeArticleRendererController : FBRichStoryRendererController {

	FBNativeArticleInteractionRegistry* _interactionRegistry;
	NSMutableSet* _focusedBlockControllers;
	unsigned long long _focusState;
	NSMutableDictionary* _storyBlockCapabilities;
	mutex _rendererLock;
	NSMutableDictionary* _evergreenBlockSets;
	BOOL _isLayoutFinished;
	FBNAPinnableBlockRegistry* _pinnableBlockRegistry;

}

@property (assign,nonatomic) unsigned long long focusState;                                    //@synthesize focusState=_focusState - In the implementation block
@property (nonatomic,readonly) FBNAPinnableBlockRegistry * pinnableBlockRegistry;              //@synthesize pinnableBlockRegistry=_pinnableBlockRegistry - In the implementation block
-(id)initWithRendererClass:(Class)arg1 layoutDescription:(id)arg2 displayContext:(id)arg3 metrics:(id)arg4 viewModel:(id)arg5 presentationState:(id)arg6 boundingSize:(CGSize)arg7 blockControllerRegistry:(id)arg8 interactionRegistry:(id)arg9 renderQueue:(id)arg10 session:(id)arg11 ;
-(void)setFocusState:(unsigned long long)arg1 ;
-(BOOL)storyBlockRecognizesGestures:(id)arg1 ;
-(id)gestureRecognizingBlockControllerForStoryBlock:(id)arg1 ;
-(BOOL)isFocusableStoryBlock:(id)arg1 ;
-(id)focusableBlockControllerForStoryBlock:(id)arg1 ;
-(BOOL)storyBlockSupportsTransitions:(id)arg1 ;
-(id)blockControllerForTransitioningStoryBlock:(id)arg1 ;
-(FBNAPinnableBlockRegistry *)pinnableBlockRegistry;
-(unsigned long long)focusState;
-(unsigned long long)fullscreenPresentationStyleForStoryBlock:(id)arg1 ;
-(void)storyBlockDidGainFocus:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)storyBlockDidLoseFocus:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(BOOL)shouldStoryBlockUseFullscreenFocusHooks:(id)arg1 ;
-(void)storyBlockDidGainInteractiveFocus:(id)arg1 ;
-(void)storyBlockDidLoseInteractiveFocus:(id)arg1 ;
-(void)storyBlockWillGainFocus:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(unsigned long long)_capabilitiesForStoryBlock:(id)arg1 ;
-(void)_invokeFocusHooksForBlockController:(id)arg1 block:(id)arg2 state:(unsigned long long)arg3 interaction:(unsigned long long)arg4 ;
-(BOOL)isFullscreenStoryBlock:(id)arg1 ;
-(id)fullscreenBlockControllerForStoryBlock:(id)arg1 ;
-(id)initWithRendererClass:(Class)arg1 layoutDescription:(id)arg2 displayContext:(id)arg3 metrics:(id)arg4 viewModel:(id)arg5 presentationState:(id)arg6 boundingSize:(CGSize)arg7 blockControllerRegistry:(id)arg8 renderQueue:(id)arg9 ;
-(void)didGenerateBlockController:(id)arg1 forStoryBlock:(id)arg2 ;
-(void)didCullBlockController:(id)arg1 forStoryBlock:(id)arg2 ;
-(void)storyBlockEnteredWorkingRange:(id)arg1 ;
-(void)storyBlockExitedWorkingRange:(id)arg1 ;
-(id)hiddenBlocks;
-(void)layoutDidFinish:(id)arg1 ;
-(id)evergreenBlockSetKeys;
-(id)evergreenBlocksForKey:(id)arg1 ;
-(unsigned long long)maxActiveEvergreenBlocksForKey:(id)arg1 ;
-(void)_invokeFocusHooksForStoryBlock:(id)arg1 state:(unsigned long long)arg2 interaction:(unsigned long long)arg3 ;
-(BOOL)hasFocus;
-(void)dealloc;
@end

