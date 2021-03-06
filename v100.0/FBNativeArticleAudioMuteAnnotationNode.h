/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBSpeakerNode, PAInterfaceGuide;

@interface FBNativeArticleAudioMuteAnnotationNode : ASControlNode {

	FBSpeakerNode* _speakerNode;
	PAInterfaceGuide* _interfaceGuide;
	BOOL _audioOn;

}
-(void)_staticInitialize;
-(BOOL)_isPointInSpeakerNode:(CGPoint)arg1 ;
-(void)setAudioOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithInterfaceGuide:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)layout;
-(void)didLoad;
@end

