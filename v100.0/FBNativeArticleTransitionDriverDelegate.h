/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeArticleTransitionDriverDelegate <NSObject>
@required
-(CGRect*)transitionDriver:(id)arg1 currentContentFrameForBlock:(id)arg2;
-(id)transitionDriver:(id)arg1 storyBlockAtPoint:(CGPoint)arg2;
-(BOOL)transitionDriver:(id)arg1 canRespondToGestureInDirection:(long long)arg2 withTouches:(id)arg3;
-(id)transitionDriver:(id)arg1 eligibleTransitionAttributesFromPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3;
-(id)transitionDriver:(id)arg1 transitionLayoutForStoryBlock:(id)arg2 withPresentationAttributes:(id)arg3;
-(id)transitionDriver:(id)arg1 currentPresentationAttributesForBlock:(id)arg2;
-(void)transitionDriver:(id)arg1 willBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 atTouchPoint:(CGPoint)arg4 touchDirection:(long long)arg5 shouldTrackTouches:(BOOL*)arg6;
-(void)transitionDriver:(id)arg1 didBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 atTouchPoint:(CGPoint)arg4 transitionLayout:(id)arg5;
-(void)transitionDriver:(id)arg1 didUpdateTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withProgress:(double)arg4;
-(void)transitionDriver:(id)arg1 didUpdateTrackingPoint:(CGPoint)arg2 forStoryBlock:(id)arg3;
-(void)transitionDriver:(id)arg1 willFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 animationConfiguration:(SCD_Struct_FB70)arg4;
-(void)transitionDriver:(id)arg1 transitionToPresentationAttributes:(id)arg2 didBeginSettlingForStoryBlock:(id)arg3;
-(void)transitionDriver:(id)arg1 didFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withResultantLayout:(id)arg4;
-(BOOL)transitionDriver:(id)arg1 shouldRecognizePanSimultaneouslyWithGestureRecognizer:(id)arg2;
-(CGPoint*)transitionDriver:(id)arg1 currentTrackingPointForStoryBlock:(id)arg2;
-(CGPoint*)transitionDriver:(id)arg1 destinationTrackingPointForStoryBlock:(id)arg2 transitioningToPresentationAttributes:(id)arg3 withLayout:(id)arg4 progress:(double)arg5 originContentFrame:(CGRect*)arg6 destinationContentFrame:(CGRect*)arg7;

@end

